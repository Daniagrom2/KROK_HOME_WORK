//
//  main.cpp
//  LinkedList
//
//  Created by Kolodii Daniil on 05.08.2021.
//
///////1///////////
//#include <iostream>
//using namespace std;
//
//struct Node{
//    Node* next = nullptr;
//    int value;
//    Node(int value = 0):value(value){};
//};
//class List{
//public:
//    List() : _p_head(nullptr), _p_tail(nullptr) {}
//    ~List(){
//        while (_p_head!=nullptr) {
//            Node* tmp = _p_head;
//            _p_head = _p_head->next;
//            delete tmp;
//        }
//    }
//    void add(int value){
//        Node* tmp = new Node(value);
//        if(_p_head == nullptr)
//        {
//            _p_head = _p_tail = tmp;
//        }else{
//                _p_tail->next = tmp;
//                _p_tail = tmp;
//        }
//    }
//    void insert(int value,int index){
//        Node* new_node = new Node(value);
//        if(index == 0){
//            new_node->next = _p_head;
//            _p_head = new_node;
//        }else{
//            Node* tmp = _p_head;
//            for (auto i = 0; i<index - 1; i++) {
//                tmp = tmp->next;
//            }
//            new_node->next = tmp->next;
//            tmp->next = new_node;
//        }
//    }
//    void remove_at(int index) {
//        if (index == 0) {
//            Node* tmp = _p_head;
//            _p_head = _p_head->next;
//            delete tmp;
//        }
//        else {
//            Node* tmp = _p_head;
//            for (auto i = 0; i < index - 1; i++) {
//                tmp = tmp->next;
//            }
//            Node* tmp_remove = tmp->next;
//            tmp->next = tmp_remove->next;
//            delete tmp_remove;
//        }
//    }
//    int find_index(int value) {
//        Node* tmp = _p_head;
//        int index = 0;
//        while (tmp != nullptr) {
//            if (tmp->value == value) {
//                return index;
//            }
//            tmp = tmp->next;
//            index++;
//        }
//        return -1;
//    }
//private:
//    Node* _p_head;
//    Node* _p_tail;
//};
//int main(int argc, const char * argv[]) {
//    List l;
//    string yesno;
//    do {
//        cout << "\ta)Добавить елемент по индексу \n";
//        cout << "\tb)Удалить елемент по индексу\n";
//        cout << "\tc)Поиск заданогго елемента\n";
//        cout << "\td)Добавление елемента\n";
//        char answer;
//        cout << "Enter:";
//        cin >> answer;
//        switch (answer) {
//            case 'a': {
//                int value;
//                int index;
//                cout << "Введите value:";
//                cin >> value;
//                cout << "Введите index:";
//                cin >> index;
//                l.insert(value,index);
//                break;
//            }
//            case 'b': {
//                int index;
//                cout << "Введите index:";
//                cin >> index;
//                l.remove_at(index);
//                break;
//            }
//            case 'c': {
//                int value;
//                cout << "Введите value:";
//                cin >> value;
//                l.find_index(value);
//                break;
//            }
//            case 'd': {
//                int value;
//                cout << "Введите value:";
//                cin >> value;
//                l.add(value);
//                break;
//            }
//
//            default:
//                cout << "Something go wrong" << endl;
//        }
//        cout << "Do you want do something more? yes/no\nEnter:";
//        cin >> yesno;
//    } while (yesno != "no");
//    return 0;
//}
/////////2////////////
#include <iostream>
using namespace std;

struct Node{
    Node* next = nullptr;
    int value;
    Node(int value = 0):value(value){};
};
class List{
public:
    List() : _p_head(nullptr), _p_tail(nullptr) {}
    ~List(){
        while (_p_head!=nullptr) {
            Node* tmp = _p_head;
            _p_head = _p_head->next;
            delete tmp;
        }
    }
    void add(int value){
        Node* tmp = new Node(value);
        if(_p_head == nullptr)
        {
            _p_head = _p_tail = tmp;
        }else{
                _p_tail->next = tmp;
                _p_tail = tmp;
        }
    }
    void insert(int value,int index){
        Node* new_node = new Node(value);
        if(index == 0){
            new_node->next = _p_head;
            _p_head = new_node;
        }else{
            Node* tmp = _p_head;
            for (auto i = 0; i<index - 1; i++) {
                tmp = tmp->next;
            }
            new_node->next = tmp->next;
            tmp->next = new_node;
        }
    }
    void remove_from_queue(){
        Node* tmp = _p_head;
        _p_head = _p_head->next;
        delete tmp;
    }
    void remove_at(int index) {
        if (index == 0) {
            Node* tmp = _p_head;
            _p_head = _p_head->next;
            delete tmp;
        }
        else {
            Node* tmp = _p_head;
            for (auto i = 0; i < index - 1; i++) {
                tmp = tmp->next;
            }
            Node* tmp_remove = tmp->next;
            tmp->next = tmp_remove->next;
            delete tmp_remove;
        }
    }
    void clear(){
        for (auto i = 0; _p_head->next != nullptr; i++) {
            if (i == 0) {
                Node* tmp = _p_head;
                _p_head = _p_head->next;
                delete tmp;
            }
            else {
                Node* tmp = _p_head;
                for (auto j = 0; j < i - 1; j++) {
                    tmp = tmp->next;
                }
                Node* tmp_remove = tmp->next;
                tmp->next = tmp_remove->next;
                delete tmp_remove;
            }
        }
    }
    int find_index(int value) {
        Node* tmp = _p_head;
        int index = 0;
        while (tmp != nullptr) {
            if (tmp->value == value) {
                return index;
            }
            tmp = tmp->next;
            index++;
        }
        return -1;
    }
    void print_list() {
        Node* tmp = _p_head;
        while(tmp != nullptr) {
            cout << tmp->value << '\t';
            tmp = tmp->next;
        }
        cout << endl;
    }
private:
    Node* _p_head;
    Node* _p_tail;
};
class List_Queue{
private:
    List _l;
    int _count = 0;
public:
    bool is_empty() {
        return _count == 0;
    }
    void enqueue(int value) {
        _l.add(value);
        _count++;
    }
    void dequeue(){
        _l.remove_from_queue();
        _count--;
    }
    int get_count() {
        return _count;
    }
    void clear() {
        _l.clear();
        _count = 0;
    }
    void show(){
        _l.print_list();
    }
};
int main(int argc, const char * argv[]) {
    List_Queue one;
    cout<< one.is_empty()<<endl;
    one.enqueue(2);
    one.enqueue(10);
    one.dequeue();
    cout<<one.get_count()<<endl;
    one.show();
    return 0;
}
