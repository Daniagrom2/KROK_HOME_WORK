#include <iostream>
#include <vector>

using namespace std;

class user;

class mediator {
public:
    virtual void send(string message, user *colleague) = 0;
};

class user {
public:
    user(shared_ptr<mediator> m) : mediator_(m) {}

    virtual void notify(string message) = 0;

    virtual void send(string message) = 0;

protected:
    shared_ptr<mediator> mediator_;
};

class user1 : public user {
public:
    user1(shared_ptr<mediator> m) : user(m) {}

    void send(string message) override {
        mediator_->send(message, this);
    }

    void notify(string massage) override {
        cout << name_ << " gets: " << massage << "\n";
    }

private:
    string name_ = "ME";
};

class user2 : public user {
public:
    user2(shared_ptr<mediator> m, string name) : user(m), name_(name) {}

    void send(string message) override {
        mediator_->send(message, this);
    }

    void notify(string massage) override {
        cout << name_ << " gets: " << massage << "\n";
    }

    void set_name(string name) {
        name_ = name;
    }

    string get_name() {
        return name_;
    }

private:
    string name_;
};

class concreteMediator : public mediator {
public:
    void send(string message, user *colleague) override {
        if (typeid(*colleague) == typeid(*c1)) {
            c2->notify(message);
        } else {
            c1->notify(message);
        }
    }

    void setUser1(user1 *value) {
        c1 = value;
    }

    void setUser2(user2 *value) {
        c2 = value;
    }

private:
    user1 *c1;
    user2 *c2;
};

class Massenger {
public:
    void add_contact(string name) {
        shared_ptr<user2> a = make_shared<user2>(cm, name);
        contacts.push_back(*a);
    }

    void remove_contact(string name) {
        auto remove_it = find(contacts, name);
        contacts.erase(remove_it);
    }

    void send_massage(string massege, string contact_name) {
        cm->setUser1(c1);
        cm->setUser2(search_contact(contact_name));
        c1->send(massege);
    }

protected:
    user2 *search_contact(string name) {
        for (int i = 0; i < contacts.size(); i++) {
            if (contacts[i].get_name() == name) {
                return &contacts[i];
            }

        }
    }

    vector<user2>::iterator &find(vector<user2> &ls, string name) {
        for (auto itr = ls.begin();
             itr != ls.end(); itr++) {
            return itr;
        }
    }

    shared_ptr<concreteMediator> cm = make_shared<concreteMediator>();
    user1 *c1 = new user1(cm);
    vector<user2> contacts;
};

int main() {
    Massenger a;
    a.add_contact("Nikolay");
    a.add_contact("Vadim");
    a.add_contact("Ivan");
    a.send_massage("Hey Vadim, how r u doing?", "Vadim");

    return 0;
}
