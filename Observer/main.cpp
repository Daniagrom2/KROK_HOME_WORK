#include <iostream>
#include <vector>
using namespace std;
class observer{
public:
    virtual void update(string s) = 0;
};
class observable{
public:
  virtual void add(observer*) = 0;
  virtual void remove(observer*) = 0;
  virtual void notify(string)= 0;
};
class topicsGenerator:public observable{
public:
    void add(observer* ob) override{
        observers_.push_back(ob);
    }
    void remove(observer* ob) override{
      cout<<"deleted"<<endl;
    }
    void notify(string m)override{
        for (auto ob:observers_) {
            ob->update(m);
        }
    }
private:
    vector<observer*> observers_;
};

class client:public observer{
public:
    client(string n):Name(n){}
    string Name;
    void update(string s) override{
        cout<<"Name: "<< Name <<"\t"<<s<<endl;
    }

};
int main() {
  topicsGenerator tg;
  client client1("Nikolay");
    client client2("Victor");
    tg.add(&client1);
    tg.add(&client2);
    tg.notify("Hello man");
    tg.add(new client("Vasyliy"));
    tg.notify("Bomb in the house");
    tg.remove(&client1);
    return 0;
}
