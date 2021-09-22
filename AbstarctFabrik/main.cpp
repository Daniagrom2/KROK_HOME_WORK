#include <iostream>

using namespace std;

class motherBoard {
public:
    virtual string getMotherBoard() = 0;

    virtual ~motherBoard() {}
};

class diskType {
public:
    virtual string getDiskType() = 0;

    virtual ~diskType() {}
};

class MSI : public motherBoard {
public:
    string getMotherBoard() override {
        return "msi";
    }

};

class ASUS : public motherBoard {
public:
    string getMotherBoard() override {
        return "asus";
    }

};

class HDD : public diskType {
public:
    string getDiskType() override {
        return "HDD";
    }
};

class SSD : public diskType {
public:
    string getDiskType() override {
        return "SSD";
    }
};

class abstracktFactory {
public:
    virtual motherBoard *createMotherBoard() = 0;

    virtual diskType *createDisk() = 0;

    virtual ~abstracktFactory() {}
};

class homePCFactory : public abstracktFactory {
public:
    motherBoard *createMotherBoard() override {
        return new MSI;
    }

    diskType *createDisk() override {
        return new HDD;
    }

};

class workStation : public abstracktFactory {
public:
    motherBoard *createMotherBoard() override {
        return new ASUS;
    }

    diskType *createDisk() override {
        return new SSD;
    }

};

class PC {
public:
    motherBoard *board;
    diskType *disk;
};

class configurator {
public:
    configurator(abstracktFactory *factory) {
        factory_ = factory;
    }

    void config(PC *P) {
        P->board = factory_->createMotherBoard();
        P->disk = factory_->createDisk();
    }
~configurator(){
        delete factory_;
    }
private:
    abstracktFactory *factory_;
};

int main() {
    PC *pc = new PC;
    configurator *conf = new configurator(new homePCFactory);
    conf->config(pc);
    cout << pc->disk->getDiskType() << endl;
    cout << pc->board->getMotherBoard() << endl;
    delete pc;
    delete conf;
    return 0;

}
