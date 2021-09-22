#include <iostream>

using namespace std;
enum metal{
    SILVER,
    GOLD
};
enum stone{
    AMETIST,
    BRILIANT
};
class preciousMetal {
public:
    virtual  metal getPreciousMetal() = 0;

    virtual ~preciousMetal() {}
};

class preciousStone {
public:
    virtual stone getPreciousStone() = 0;

    virtual ~preciousStone () {}
};

class GOLDmetal : public preciousMetal {
public:
     metal getPreciousMetal() override {
        return metal::GOLD;
    }

};
//
class SILVERmetal : public preciousMetal {
public:
    metal getPreciousMetal() override {
        return  metal::SILVER;
    }

};

class AMETISTstone : public preciousStone {
public:
    stone getPreciousStone() override {
        return stone::AMETIST;
    }
};

class BRILIANTstone : public preciousStone {
public:
    stone getPreciousStone() override {
        return stone::BRILIANT;
    }
};

class abstracktFactory {
public:
    virtual preciousMetal *createPreciousMetal() = 0;

    virtual preciousStone *createPreciousStone() = 0;

    virtual ~abstracktFactory() {}
};

class ExpensiveFactory : public abstracktFactory {
public:
    preciousMetal *createPreciousMetal() override {
        return new GOLDmetal;
    }

    preciousStone *createPreciousStone() override {
        return new BRILIANTstone;
    }

};

class CheapFactory : public abstracktFactory {
public:
    preciousMetal *createPreciousMetal() override {
        return new SILVERmetal;
    }

    preciousStone *createPreciousStone() override {
        return new AMETISTstone;
    }

};

class Jewerly {
public:
    preciousMetal *metal;
    preciousStone *stone;
};

class configurator {
public:
    configurator(abstracktFactory *factory) {
        factory_ = factory;
    }

    void config(Jewerly *j) {
        j->metal = factory_->createPreciousMetal();
        j->stone= factory_->createPreciousStone();
    }
    ~configurator(){
        delete factory_;
    }
private:
    abstracktFactory *factory_;
};

int main() {
    Jewerly *je = new Jewerly;
    configurator *conf = new configurator(new ExpensiveFactory);
    conf->config(je);
    cout << typeid(*je->metal).name()<< endl;
    cout << typeid(*je->stone).name() << endl;
    delete je;
    delete conf;
    return 0;
}
