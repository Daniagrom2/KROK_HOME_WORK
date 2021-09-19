//
//  main.cpp
//  DoubleLinkedList
//
//  Created by Kolodii Daniil on 06.08.2021.
//
///////1/////////////
//#include <iostream>
//
//using namespace std;
//
//class Printer;
//
//struct Node {
//    Node* next = nullptr;
//    Node* prev = nullptr;
//    int value;
//    Node(int value = 0) : value(value) {}
//
//};
//
//class List {
//public:
//    List() : _phead(nullptr), _ptail(nullptr) {}
//    void addTail(int n)
//    {
//        Node * tmp = new Node;
//        tmp->next = 0;
//        tmp->value = n;
//        tmp->prev = _ptail;
//        if(_ptail != 0)
//            _ptail->next = tmp;
//        if(_count == 0) _phead = _ptail = tmp;
//        else
//            _ptail = tmp;
//        _count++;
//    }
//    List(const List* list){
//        _phead = _ptail = NULL;
//            _count = 0;
//            Node* tmp = list->_phead;
//            while(tmp != 0)
//            {
//                addTail(tmp->value);
//                tmp = tmp->next;
//            }
//    }
//
//    void add(int value) {
//        if (_phead == nullptr) {
//            _phead = new Node(value);
//            _ptail = _phead;
//        }
//        else {
//            Node* tmp = new Node(value);
//            _ptail->next = tmp;
//            tmp->prev = _ptail;
//            _ptail = tmp;
//        }
//        _count++;
//    }
//
//    void remove_at(int index) {
//        if (index != 0) {
//            Node* tmp = _phead;
//            for (auto i = 0; i < index - 1; i++) {
//                tmp = tmp->next;
//            }
//
//            Node* remove = tmp->next;
//            tmp->next = remove->next;
//            remove->next->prev = tmp;
//            delete remove;
//        } else {
//            Node* tmp = _phead;
//            _phead = _phead->next;
//            if (!_phead) {
//                _ptail = _phead;
//            }
//            delete tmp;
//        }
//        _count--;
//    }
//    void clear(){
//        for (auto i = 0; _phead->next != nullptr; i++) {
//            if (i == 0) {
//                Node* tmp = _phead;
//                _phead = _phead->next;
//                delete tmp;
//            }
//            else {
//                Node* tmp = _phead;
//                for (auto j = 0; j < i - 1; j++) {
//                    tmp = tmp->next;
//                }
//                Node* tmp_remove = tmp->next;
//                tmp->next = tmp_remove->next;
//                delete tmp_remove;
//            }
//        }
//    }
//    void insert(int value, int index) {
//        Node* new_node = new Node(value);
//        if (index == 0) {
//            new_node->next = _phead;
//            _phead->prev = new_node;
//            _phead = new_node;
//        } else {
//            Node* tmp = _phead;
//            for (auto i = 0; i < index - 1; i++) {
//                tmp = tmp->next;
//            }
//
//            new_node->next = tmp->next;
//            tmp->next->prev = new_node;
//            tmp->next = new_node;
//            new_node->prev = tmp;
//        }
//        _count++;
//    }
//    int get_count(){
//        return _count;
//    }
//    Node * GetNode(int index){
//        Node* tmp = _phead;
//        for (auto i = 0; i< index -1; i++) {
//            tmp = tmp->next;
//        }
//        return tmp ;
//    }
//    void addHead(int value)
//    {
//        Node * tmp = new Node;
//        tmp->prev = 0;
//        tmp->value = value;
//        tmp->next = _phead;
//        if(_phead != 0)
//            _phead->prev = tmp;
//        if(_count == 0) _phead = _ptail = tmp;
//        else
//            _phead = tmp;
//        _count++;
//    }
//
//    ~List() {
//        Node* tmp = nullptr;
//        while (_ptail != nullptr) {
//            tmp = _ptail;
//            _ptail = _ptail->prev;
//            delete tmp;
//        }
//    }
//
//    friend Printer;
//private:
//    Node* _phead;
//    Node* _ptail;
//    int _count;
//};
//
//class Printer {
//public:
//    static void list_to_cmd(const List& list) {
//        Node* out = list._phead;
//
//        while (out) {
//            cout << out->value << '\t';
//            out = out->next;
//        }
//        cout << endl;
//    }
//    static void list_to_cmd_index(const List& list,int index) {
//        Node* out = list._phead;
//        for (auto i = 0; i<index-1; i++) {
//            out = out->next;
//        }
//        cout << out->value << '\t';
//        cout << endl;
//    }
//};
//
//int main() {
//    List l;
//    l.add(1);
//    l.remove_at(0);
//    Printer::list_to_cmd(l);
//    return 0;
//}
///////////////2///////////////
#include <iostream>

using namespace std;

class Printer;
struct Node {
    Node* next = nullptr;
    Node* prev = nullptr;
    int value;
    Node(int value = 0) : value(value) {}
  
};

class List {
public:
    List() : _phead(nullptr), _ptail(nullptr) {}
    void addTail(int n)
    {
        Node * tmp = new Node;
        tmp->next = 0;
        tmp->value = n;
        tmp->prev = _ptail;
        if(_ptail != 0)
            _ptail->next = tmp;
        if(_count == 0) _phead = _ptail = tmp;
        else
            _ptail = tmp;
        _count++;
    }
    List(const List* list){
        _phead = _ptail = NULL;
            _count = 0;
            Node* tmp = list->_phead;
            while(tmp != 0)
            {
                addTail(tmp->value);
                tmp = tmp->next;
            }
    }
    
    void add(int value) {
        if (_phead == nullptr) {
            _phead = new Node(value);
            _ptail = _phead;
        }
        else {
            Node* tmp = new Node(value);
            _ptail->next = tmp;
            tmp->prev = _ptail;
            _ptail = tmp;
        }
        _count++;
    }

    void remove_at(int index) {
        if (index != 0) {
            Node* tmp = _phead;
            for (auto i = 0; i < index - 1; i++) {
                tmp = tmp->next;
            }

            Node* remove = tmp->next;
            tmp->next = remove->next;
            remove->next->prev = tmp;
            delete remove;
        } else {
            Node* tmp = _phead;
            _phead = _phead->next;
            if (!_phead) {
                _ptail = _phead;
            }
            delete tmp;
        }
        _count--;
    }
    int remove_for_stack(){
        Node* tmp = _ptail;
        _ptail = _ptail->prev;
        int boof = tmp->value;
        delete tmp;
        return boof;
    }
    void clear(){
        for (auto i = 0; _phead->next != nullptr; i++) {
            if (i == 0) {
                Node* tmp = _phead;
                _phead = _phead->next;
                delete tmp;
            }
            else {
                Node* tmp = _phead;
                for (auto j = 0; j < i - 1; j++) {
                    tmp = tmp->next;
                }
                Node* tmp_remove = tmp->next;
                tmp->next = tmp_remove->next;
                delete tmp_remove;
            }
        }
    }
    void insert(int value, int index) {
        Node* new_node = new Node(value);
        if (index == 0) {
            new_node->next = _phead;
            _phead->prev = new_node;
            _phead = new_node;
        } else {
            Node* tmp = _phead;
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
    int get_count(){
        return _count;
    }
    Node * GetNode(int index){
        Node* tmp = _phead;
        for (auto i = 0; i< index -1; i++) {
            tmp = tmp->next;
        }
        return tmp ;
    }
    void addHead(int value)
    {
        Node * tmp = new Node;
        tmp->prev = 0;
        tmp->value = value;
        tmp->next = _phead;
        if(_phead != 0)
            _phead->prev = tmp;
        if(_count == 0) _phead = _ptail = tmp;
        else
            _phead = tmp;
        _count++;
    }
    int peek_for_stack(){
        if(_count!=0){
        Node* tmp = _ptail;
            return tmp->value;}
        else
            return -1;
    }
    ~List() {
        Node* tmp = nullptr;
        while (_ptail != nullptr) {
            tmp = _ptail;
            _ptail = _ptail->prev;
            delete tmp;
        }
    }

    friend Printer;
private:
    Node* _phead;
    Node* _ptail;
    int _count;
};

class Printer {
public:
    static void list_to_cmd(const List& list) {
        Node* out = list._phead;

        while (out) {
            cout << out->value << '\t';
            out = out->next;
        }
        cout << endl;
    }
    static void list_to_cmd_index(const List& list,int index) {
        Node* out = list._phead;
        for (auto i = 0; i<index-1; i++) {
            out = out->next;
        }
        cout << out->value << '\t';
        cout << endl;
    }
};
class DoubleListStack{
public:
   bool is_empty(){
        return l.get_count() == 0;
    }
    void push(int value){
        l.add(value);
    }
    int pop(){
        if(!is_empty())
        return l.remove_for_stack();
        else
            return -1;
    }
    int peek(){
        return l.peek_for_stack();
    }
    void clear(){
        l.clear();
    }
    int get_count(){
        return l.get_count();
    }
private:
    List l;
};
int main() {
 
    return 0;
}
