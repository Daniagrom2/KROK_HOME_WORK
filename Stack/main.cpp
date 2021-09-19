////////1//////////
//#include <iostream>
//
//using namespace std;
//
//class Stack {
//public:
//    bool is_empty() {
//        cout << (_top == -1 ? true : false) << endl;
//        return _top == -1 ? true : false;
//    }
//
//    bool is_full() {
//        cout << (_top == 10 - 1 ? true : false) << endl;
//        return _top == 10 - 1;
//    }
//
//    void push(int value) {
//        if (!is_full()) {
//            _arr[++_top] = value;
//            cout << "New was pushed" << endl;
//        } else {
//            cout << "Stack is full" << endl;
//        }
//
//    }
//
//    int pop() {
//        if (!is_empty()) {
//            cout << "One was deleted." << endl;
//            return _arr[_top--];
//        }
//        cout << "Something go wrong" << endl;
//        return -1;
//    }
//
//    int peek() {
//        if (!is_empty()) {
//            cout << _arr[_top] << endl;
//            return _arr[_top];
//        }else{
//        cout << "Something go wrong" << endl;
//        return -1;}
//    }
//
//    void clear() {
//        _top = -1;
//        cout << "Clear." << endl;
//    }
//
//    int get_count() {
//        cout << _top + 1 << endl;
//        return _top + 1;
//    }
//
//private:
//    int _arr[10];
//    int _top = -1;
//};
//
//int main() {
//    Stack s;
//    string yesno;
//    do{
//    cout << "\ta)Push\n";
//    cout << "\tb)Pop\n";
//    cout << "\tc)Clear\n";
//    cout << "\td)Is Empty\n";
//    cout << "\te)Is Full\n";
//    cout << "\tg)Get Count\n";
//    char answer;
//    cin >> answer;
//    switch (answer) {
//        case 'a':{
//            int value;
//            cout<<"Enter value:";
//            cin>>value;
//            s.push(value);
//            break;
//        }
//        case 'b':{
//            s.pop();
//            break;
//        }
//        case 'c':{
//            s.clear();
//            break;
//        }
//        case 'd':{
//            s.is_empty();
//            break;
//        }
//        case 'e':{
//            s.is_full();
//            break;
//        }
//        case 'g':{
//            s.get_count();
//            break;
//        }
//        default:
//            cout<<"Something go wrong"<<endl;
//    }
//            cout<<"Do you want do something more? yes/no\nEnter:";
//            cin>>yesno;
//    }while(yesno != "no");
//    return 0;
//}
/////////////2////////////
//#include <iostream>
//
//using namespace std;
//
//class Stack {
//public:
//    bool is_empty() {
//
//        return _top == -1 ? true : false;
//    }
//
//    bool is_full() {
//
//        return _top == 30 - 1;
//    }
//
//    void push(char value) {
//        if (!is_full()) {
//            _arr[++_top] = value;
//
//        } else {
//            cout << "Stack is full" << endl;
//        }
//
//    }
//
//    int pop() {
//        if (!is_empty()) {
//            return _arr[_top--];
//        }
//        cout << "Something go wrong" << endl;
//        return -1;
//    }
//
//    int peek() {
//        if (!is_empty()) {
//            cout << _arr[_top] << endl;
//            return _arr[_top];
//        }else{
//        cout << "Something go wrong" << endl;
//        return -1;}
//    }
//
//    void clear() {
//        _top = -1;
//        cout << "Clear." << endl;
//    }
//
//    int get_count() {
//        cout << _top + 1 << endl;
//        return _top + 1;
//    }
//
//private:
//    char _arr[30];
//    int _top = -1;
//};
//
//int main() {
//    Stack s;
//    string value = "Hello world";
//    for (int i = 0; i < value.length()+1; i++) {
//        s.push(value[i]);
//    }
//    for (int i = 0; i < value.length()+1; i++) {
//        s.peek();
//        s.pop();
//    }
//    return 0;
//}
//////3/////////
#include <iostream>

using namespace std;

class Stack {
public:
    bool is_empty() {

        return _top == -1 ? true : false;
    }

    bool is_full() {

        return _top == 30 - 1;
    }

    void push(char value) {
        if (!is_full()) {
            _arr[++_top] = value;

        } else {
            cout << "Stack is full" << endl;
        }

    }

    int pop() {
        if (!is_empty()) {
            return _arr[_top--];
        }
        cout << "Something go wrong" << endl;
        return -1;
    }

    int peek() {
        if (!is_empty()) {
            cout << _arr[_top] << endl;
            return _arr[_top];
        }else{
        cout << "Something go wrong" << endl;
        return -1;}
    }

    void clear() {
        _top = -1;
        cout << "Clear." << endl;
    }

    int get_count() {
        return _top + 1;
    }

private:
    char _arr[30];
    int _top = -1;
};

int main() {
    Stack s;
    string value;
cout<<"Enter strctura:";
   cin>>value;
    for (int i = 0; i < value.length(); i++)
        if (value[i] == '(')
            s.push('(');
        else if (value[i] == ')' && s.get_count() > 0)
            s.pop();

    cout<<((s.get_count() == 0) ? "True" : "False");
    return 0;
}