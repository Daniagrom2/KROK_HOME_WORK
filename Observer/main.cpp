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
  virtual void notify(string)= 0;
};
class Update: public observable{
public:
    void add(observer* ob) override {
        observers_.push_back(ob);
    }
    void notify(string m)override{
        for (auto ob:observers_) {
            ob->update(m);
        }
    }
private:
    vector<observer*> observers_;
};

class user: public observer{
public:
    user(string n): Name(n){}
    string Name;
    void update(string s) override{
        cout<<"Name: "<< Name <<"\t"<<s<<endl;
    }

};
int main() {
  Update u;
  user user1("Nikolay");
    user user2("Victor");
    u.add(&user1);
    u.add(&user2);
    u.notify("Git have new vesion");
    u.add(new user("Vasyliy"));
    u.notify("Clion have new version");

    return 0;
}
