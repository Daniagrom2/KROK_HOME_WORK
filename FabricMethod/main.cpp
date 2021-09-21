#include <iostream>
using namespace std;
class product{
public:
    virtual void creating() = 0;
    virtual ~product() {}
};
class milk: public product{
    void creating() override{
        cout<<"Milk was taken"<<endl;
    }
};
class bread: public product{
    void creating() override{
        cout<<"Bread was baked"<<endl;
    }
};
class developer{
public:
    virtual product* get_creating() = 0;
    virtual ~developer(){};
};
class milk_Developer:public developer{
    product* get_creating(){
        return new milk;
    }
};
class bread_Developer:public developer{
    product* get_creating(){
        return new bread;
    }
};

int main() {
    developer* d = new milk_Developer;
    product* p = d->get_creating();
    p->creating();
    delete d;
    delete p;
    d = new bread_Developer;
    p = d->get_creating();
    p->creating();
    delete d;
    delete p;
    return 0;
}
