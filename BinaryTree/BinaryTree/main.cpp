//
//  main.cpp
//  BinaryTree
//
//  Created by Kolodii Daniil on 09.08.2021.
//

#include <iostream>
using namespace std;
template<typename T>
struct Node{
    T value;
    Node<T>* right = nullptr;
    Node<T>* left = nullptr;
    Node<T>* parent = nullptr;
    Node(T value = NULL):value(value){
    }
};
template<class T>
class Tree{
public:
    Tree():_root(nullptr){}
    Tree(const Tree& t){
        _copy(_root);
    }
    void print(Node<T>* node) {
        _print(node);
    }
    void insert(T value){
        Node<T>* new_node = new Node<T>(value);
        Node<T>* tmp = _root;
        Node<T>* parent = nullptr;
        while(tmp != nullptr){
            parent = tmp;
            if(new_node->value < parent->value){
                tmp = tmp->left;
            }else{
                tmp = tmp->right;
            }
        }
        new_node->parent = parent;
        if(parent == nullptr){
            _root = new_node;
        }else if(new_node->value < parent->value){
            parent->left = new_node;
        }else{
            parent->right = new_node;
        }
         
    }
    void Del(Node<T> * z = 0){
        if(z == 0){
            Delete(_root);
        }else{
            Delete(z);
        }
    }
    void Delete(Node<T>* node){
        if(node != nullptr ){
            Delete(node->left);
            Delete(node->right);
            delete node;
        }
    }
    ~Tree(){
        Delete(_root);
    }
    
    Node<T>* min_node(Node<T>* root){
        if (root != nullptr) {
            Node<T>* tmp_root = root;
            while(tmp_root->left != nullptr){
                tmp_root = tmp_root->left;
            }

            return tmp_root;
        }

        return -1;
    }
    Node<T>* max_node(Node<T>* root){
        if (root != nullptr) {
            Node<T>* tmp_root = root;
            while(tmp_root->right != nullptr){
                tmp_root = tmp_root->right;
            }

            return tmp_root;
        }

        return -1;
    }
    
    
    T min() {
        if (_root != nullptr) {
            Node<T>* tmp_root = _root;
            while(tmp_root->left != nullptr){
                tmp_root = tmp_root->left;
            }

            return tmp_root->value;
        }

        return NULL;
    }
    T max() {
        if (_root != nullptr) {
            Node<T>* tmp_root = _root;
            while(tmp_root->right != nullptr){
                tmp_root = tmp_root->right;
            }

            return tmp_root->value;
        }

        return NULL;
    }
    Node<T>* search(Node<T>* node,T value){
        if(node != nullptr){
            if(value==node->value){
                return node;
        
            }
            else
            {
                return search(node->right(), value);
                         return search(node->left(), value);
            }
        }
    }
    
    Node<T> * getRoot(){
        return _root;
    }
    Node<T>* next(Node<T>* node){
        Node<T>* tmp_root = _root;
        char answ;
        cout<<"Next right or left? (r/l)"<<endl;
        cout<<"Enter:";
        cin>>answ;
        if(answ == 'r' && tmp_root->right!= nullptr){
            tmp_root =tmp_root->right;
            return tmp_root;
        }else if(answ == 'l' && tmp_root->left!= nullptr){
            tmp_root =tmp_root->left;
            return tmp_root;
        }else{
            cout<<"Wrong answer!!!\n";
            return -1;
        }
    }
    Node<T>* previus(Node<T>* node){
        if(node->parent != nullptr)
            return node->parent;
        else
            return -1;
    }
private:
    void _print(Node<T>* node) {
        if(node != nullptr) {
            _print(node->left);
            cout << node->data << '\t';
            _print(node->right);
        }
    }

    
    void _copy(Node<T>* root){
        if(root!= nullptr){
            copy(root->right);
            copy(root->left);
            insert(root->data);
        }
    }
    Node<T>* _root;
};
int main(int argc, const char * argv[]) {
    Tree<int> one;
    one.insert(10);
    one.insert(2);
    one.insert(12);
    one.insert(3);
    cout<<one.min();
    return 0;
}
