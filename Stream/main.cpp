#include <iostream>
#include <fstream>
#include <memory>
using namespace std;

template<class T>
class Printer;
class Contackt_LIST;
class Contackt {
public:
    friend std::ostream &operator<<(std::ostream &out, const Contackt &contackt);

    string get_full_name() {
        return full_name_;
    }

    string get_phone_number() {
        return phone_number_;
    }

    void set_full_name(string name) {
        full_name_ = name;
    }

    void set_phone_number(string phone_number) {
        phone_number_ = phone_number;
    }

    friend Printer<Contackt>;
protected:
    string full_name_;
    string phone_number_;
};

std::ostream &operator<<(ostream &out, const Contackt &contackt) {
    out << "FIO: " << contackt.full_name_ << "\nPhone number: " << contackt.phone_number_ << endl;
    return out;
}

template<class T>
struct Node {


    Node *next = nullptr;
    Node *prev = nullptr;
    T value;

};

template<class T>
class List {
public:
    friend  Contackt_LIST;
    friend Printer<List<T>>;
    List() : _phead(nullptr), _ptail(nullptr) {}

    void addTail(T value) {
        Node<T> *tmp = new Node<T>;
        tmp->next = 0;
        tmp->value = value;
        tmp->prev = _ptail;
        if (_ptail != 0)
            _ptail->next = tmp;
        if (_count == 0) _phead = _ptail = tmp;
        else
            _ptail = tmp;
        _count++;
    }

    List(const List *list) {
        _phead = _ptail = NULL;
        _count = 0;
        Node<T> *tmp = list->_phead;
        while (tmp != 0) {
            addTail(tmp->value);
            tmp = tmp->next;
        }
    }

    void remove_at(int index) {
        if (index != 0) {
            Node<T> *tmp = _phead;
            for (auto i = 0; i < index - 1; i++) {
                tmp = tmp->next;
            }

            Node<T> *remove = tmp->next;
            tmp->next = remove->next;
            remove->next->prev = tmp;
            delete remove;
        } else {
            Node<T> *tmp = _phead;
            _phead = _phead->next;
            if (!_phead) {
                _ptail = _phead;
            }
            delete tmp;
        }
        _count--;
    }
    void remove_by_name(string name) {
        if (_count != 0) {
            Node<T> *tmp = _phead;
            while(tmp->value.get_full_name() != name){
                tmp = tmp->next;
            }
            Node<T> *remove = tmp;
            tmp->prev->next  = tmp->next;
            tmp->next->prev = tmp->prev;
            delete remove;
        } else {
            Node<T> *tmp = _phead;
            _phead = _phead->next;
            if (!_phead) {
                _ptail = _phead;
            }
            delete tmp;
        }
        _count--;
    }
    void remove_by_phone(string phone) {

        Node<T> *tmp = _phead;
        while(tmp->value.get_phone_number() != phone ){
            tmp = tmp->next;
        }

        Node<T> *remove = tmp->next;
        tmp->next = remove->next;
        remove->next->prev = tmp;
        delete remove;
        _count--;
    }
    void clear() {
        for (auto i = 0; _phead->next != nullptr; i++) {
            if (i == 0) {
                Node<T> *tmp = _phead;
                _phead = _phead->next;
                delete tmp;
            } else {
                Node<T> *tmp = _phead;
                for (auto j = 0; j < i - 1; j++) {
                    tmp = tmp->next;
                }
                Node<T> *tmp_remove = tmp->next;
                tmp->next = tmp_remove->next;
                delete tmp_remove;
            }
        }
    }

    void insert(T value, int index) {
        Node<T> *new_node = new Node<T>(value);
        if (index == 0) {
            new_node->next = _phead;
            _phead->prev = new_node;
            _phead = new_node;
        } else {
            Node<T> *tmp = _phead;
            for (auto i = 0; i < index - 1; i++) {
                tmp = tmp->next;
            }

            new_node->next = tmp->next;
            tmp->next->prev = new_node;
            tmp->next = new_node;
            new_node->prev = tmp;
        }
        _count++;
    }

    int get_count() {
        return _count;
    }

    Node<T> *GetNode(int index) {
        Node<T> *tmp = _phead;
        for (auto i = 0; i < index - 1; i++) {
            tmp = tmp->next;
        }
        return tmp;
    }

    void addHead(T value) {
        Node<T> *tmp = new Node<T>;
        tmp->prev = 0;
        tmp->value = value;
        tmp->next = _phead;
        if (_phead != 0)
            _phead->prev = tmp;
        if (_count == 0) _phead = _ptail = tmp;
        else
            _phead = tmp;
        _count++;
    }
    Contackt search_contackt_by_name(string name){
        Node<Contackt>*tmp = new Node<Contackt>;
        tmp = _phead;
        while(tmp->value.get_full_name() != name && tmp->next != nullptr){
            tmp = tmp->next;
        }
         if(tmp == _ptail && _ptail->value.get_full_name() != name){
            cout<<"There isn't this name in base!!"<<endl;
            delete tmp;
        }
        else{
            return tmp->value;
        }
    }
    Contackt search_contackt_by_phone(string phone){
        Node<Contackt>*tmp = new Node<Contackt>;
        tmp = _phead;
        while(tmp->value.get_phone_number() != phone && tmp->next != nullptr){
            tmp = tmp->prev;
        }
         if(tmp == _ptail && tmp->value.get_phone_number() != phone){
            cout<<"There isn't this phone number in base!!"<<endl;
            delete tmp;
        }
        else{
            return tmp->value;
        }

    }
    ~List() {
        Node<T> *tmp = nullptr;
        while (_ptail != nullptr) {
            tmp = _ptail;
            _ptail = _ptail->prev;
            delete tmp;
        }
    }

Node<T> get_p_head(){
        return *_phead;
    }

    Node<T> *_phead;
private:
    Node<T> *_ptail;
    int _count;
};

class Contackt_LIST {
public:

    friend Printer<Contackt_LIST>;

    List<Contackt> get_phone_book() {
        return phone_book;
    }

    void add_contact2(const Contackt& a){
        phone_book.addHead(a);
    }
void remove_contact_by_name(string name){

    }
    void remove_contact_by_phone(string phone){

    }
    void edit_data_by_name(string old_name,string new_name){
        phone_book.search_contackt_by_name(old_name).set_full_name(new_name);
    }
    void edit_data_by_phone(string old_phone,string new_phone){
        phone_book.search_contackt_by_phone(old_phone).set_phone_number(new_phone);
    }

    void save_contackts_to_file(string path){
        Node<Contackt>* tmp = new Node<Contackt>;
        tmp = phone_book._phead;
        ofstream f;
        f.open(path,ofstream::app);
        if(f.is_open()){
            while (tmp != nullptr){
                f<<tmp->value.get_full_name()<< '\n';
                f<<tmp->value.get_phone_number()<< '\n';
                tmp = tmp->next;
            }

        }else{
            cout<<"Can^t open stream!!"<<endl;
        }

        f.close();
        delete tmp;
    }
    void download_contackts_from_file(string path){
        ifstream f;
        f.open(path);
        if(f.is_open()){
            string name;
            string phone;
            Contackt* tmp2 = new Contackt;
            while (!f.eof()) {
                getline(f, name);
                if(name != "") {
                    tmp2->set_full_name(name);

                getline(f,phone);
                tmp2->set_phone_number(phone);

                phone_book.addHead(*tmp2);}
        }

            delete tmp2;
        }else{
            cout<<"Can^t open stream!!"<<endl;
        }

        f.close();
    }
protected:
    List<Contackt> phone_book;
};

template<class T>
class Printer {
public:
    static void list_to_cmd(List<T> list) {
        Node<T> *out = list._phead;

        while (out) {
            cout << out->value << '\t';
            out = out->next;
        }
        cout << endl;
    }

    static void list_to_cmd_index(const List<T> &list, int index) {
        Node<T> *out = list._phead;
        for (auto i = 0; i < index - 1; i++) {
            out = out->next;
        }
        cout << out->value << '\t';
        cout << endl;
    }

    static void contackt_to_cmd(const Contackt &contackt) {
        cout << contackt;
    }

    static void contackt_book_to_cmd(const Contackt_LIST &contackt) {
        list_to_cmd(contackt.phone_book);
    }

};


int main() {
Contackt_LIST a;
Contackt a1;
    Contackt a2;
    Contackt a3;
    a1.set_full_name("Nikita Lock");
    a1.set_phone_number("+380730030388");
    a2.set_full_name("Danila Lock");
    a2.set_phone_number("+380632323128");
    a3.set_full_name("Dimon Toxik");
    a3.set_phone_number("+380935654888");
    a.add_contact2(a1);
    a.add_contact2(a2);
    a.add_contact2(a3);
    a.get_phone_book().remove_by_name("Nikita Lock");
// a.edit_data_by_name("Nikita Lock","Valera Yomayo");
//cout<<a.get_phone_book().search_contackt_by_name("Danila Lock");

//Printer<Contackt>::list_to_cmd_index(a.get_phone_book(),1);
//a.save_contackts_to_file("test.txt");
    Contackt_LIST b;
//    b.download_contackts_from_file("test.txt");
    Printer<Contackt>::list_to_cmd(a.get_phone_book());

    return 0;
}
