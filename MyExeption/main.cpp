#include <iostream>

using namespace std;
class MyExeption_I: public invalid_argument{
public:
    MyExeption_I(const char* msg): invalid_argument(msg){

    }
};
class MyExeption_L: public out_of_range{
public:
    MyExeption_L(const char* msg): out_of_range(msg){

    }
};
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
            throw MyExeption_L("Stack is full!!");
        }

    }

    int pop() {
        if (is_empty()) {
            throw MyExeption_L("Stack is empty!!");
        }
        return _arr[_top--];
    }

    int peek() {
        if (!is_empty()) {
            cout << _arr[_top] << endl;
            return _arr[_top];
        } else {
            throw MyExeption_L("Stack is empty!");
        }
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

double square(int a, int b, int c) {
    if (a < 1 || b < 1 || c < 1)
        throw MyExeption_I("Wrong data");
    else {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
}

int hours_minuts_to_seconds(int hours, int minutes) {
    if (hours < 0 || minutes < 0)
        throw MyExeption_I("Wrong time data ");
    else {
        return hours * 3600 + minutes * 60;
    }
}

bool is_palindrom(const char *value) {
    int length = strlen(value);
    bool flag;
    for (int i = 0; i < length; i++) {
        if (value[i] != value[length - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        return 1;
    } else {
        throw MyExeption_I("Is not a palindrom");
    }

}


int main() {
    Stack s;
    try {
        s.pop();
    } catch (MyExeption_L &ex) {
        cout << ex.what() << endl;
    }
    try {
        s.peek();
    } catch (MyExeption_L &ex) {
        cout << ex.what() << endl;
    }
    try {
        for (int i = 0; i < 32; i++) {
            s.push('l');
        }
    } catch (MyExeption_L &ex) {
        cout << ex.what() << endl;
    }
    try {
        is_palindrom("abccbe");
    } catch (MyExeption_I &ex) {
        cout << ex.what() << endl;
    }
    try {
        square(-1, 2, 5);
    } catch (MyExeption_I &ex) {
        cout << ex.what() << endl;
    }
    try {
        hours_minuts_to_seconds(-1, 20);
    } catch (MyExeption_I &ex) {
        cout << ex.what() << endl;
    }

    return 0;
}

