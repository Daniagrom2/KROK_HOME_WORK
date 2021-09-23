#include <iostream>

using namespace std;

class colleague;

class mediator {
public:
    virtual void send(string massage, colleague *colleague) = 0;
};

class colleague {
public:
    colleague(mediator *m) : mediator_(m) {}

    virtual void notify(string massage) = 0;

    virtual void send(string massage) = 0;

protected:
    mediator *mediator_;
};

class colleague1 : public colleague {
public:
    colleague1(mediator *m) : colleague(m) {}

    void send(string massage) override {
        mediator_->send(massage, this);
    }

    void notify(string massage) override {
        cout <<"Colleague1 gets: "<<massage<<"\n";
    }
};
class colleague2 : public colleague {
public:
    colleague2(mediator *m) : colleague(m) {}

    void send(string massage) override {
        mediator_->send(massage, this);
    }

    void notify(string massage) override {
        cout <<"Colleague2 gets: "<<massage<<"\n";
    }
};
class concreteMediator : public mediator{
public:
    void send(string massage,colleague* colleague) override{
        if(typeid(*colleague) == typeid(*c1)){
            c2->notify(massage);
        }
        else{
            c1->notify(massage);
        }
    }
    void setColleague1(colleague1* value){
        c1 = value;
    }
    void setColleague2(colleague2* value){
        c2 = value;
    }

private:
    colleague1* c1;
    colleague2* c2;
};
int main() {
   concreteMediator cm;
   colleague1 c1(&cm);
    colleague2 c2(&cm);
    cm.setColleague1(&c1);
    cm.setColleague2(&c2);
    c1.send("Hey Vasya");
    c2.send("Hey Billy");

    return 0;
}