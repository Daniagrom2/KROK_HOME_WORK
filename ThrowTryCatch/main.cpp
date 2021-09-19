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
            throw "Stack is full!!";
        }

    }

    int pop() {
        if (is_empty()) {
            throw "Stack is empty!!";
        }
        return _arr[_top--];
    }

    int peek() {
        if (!is_empty()) {
            cout << _arr[_top] << endl;
            return _arr[_top];
        } else {
            throw "Stack is empty!";
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
        throw "Wrong data";
    else {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
}

int hours_minuts_to_seconds(int hours, int minutes) {
    if (hours < 0 || minutes < 0)
        throw "Wrong time data ";
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
        throw invalid_argument("Is not a palindrom");
    }

}


int main() {
    Stack s;
    try {
        s.pop();
    } catch (const char *ex) {
        cout << ex << endl;
    }
    try {
        s.peek();
    } catch (const char *ex) {
        cout << ex << endl;
    }
    try {
        for (int i = 0; i < 32; i++) {
            s.push('l');
        }
    } catch (const char *ex) {
        cout << ex << endl;
    }
    try {
        is_palindrom("abccbe");
    } catch (exception &ex) {
        cout << ex.what() << endl;
    }
    try {
        square(-1, 2, 5);
    } catch (const char *ex) {
        cout << ex << endl;
    }
    try {
        hours_minuts_to_seconds(-1, 20);
    } catch (const char *ex) {
        cout << ex << endl;
    }

    return 0;
}
