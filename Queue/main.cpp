#include <iostream>

using namespace std;

template<class T>
class Queue {
public:
    Queue(int size = 5) : _count(0), _size(size) {
        _arr = new T[_size];
    }

    bool is_full() {
        return _count == _size;
    }

    bool is_empty() {
        return _count == 0;
    }

    void enqueue(T value) {
        if (!is_full()) {
            _arr[_count++] = value;
        }
    }

    T dequeue() {
        if (!is_empty()) {
            T first_element = _arr[0];
            for (int i = 1; i < _count; i++) {
                _arr[i - 1] = _arr[i];
            }
            _count--;
            return first_element;
        }
        return -1;
    }

    int get_count() {
        return _count;
    }

    void clear() {
        _count = 0;
    }

    void show() {
        for (int i = 0; i < _count; i++) {
            cout << _arr[i] << "\n";
        }
    }

    ~Queue() {
        delete[] _arr;
    }

private:
    T *_arr;
    int _count;
    int _size;
};

template<typename A>
class Value {
public:
    A get_value() {
        cout << "Enter value:";
        cin >> _value;
        return _value;
    }

private:
    A _value;
};

int main() {

    Queue<double> one(10);
    string yesno;
    do {
        cout << "\ta)Enqueue\n";
        cout << "\tb)Deqeue\n";
        cout << "\tc)Clear\n";
        cout << "\td)Is Empty\n";
        cout << "\te)Is Full\n";
        cout << "\tg)Get Count\n";
        cout << "\tf)Show Queue\n";
        char answer;
        cin >> answer;
        switch (answer) {
            case 'a': {
                Value<double> q;
                one.enqueue(q.get_value());
                break;
            }
            case 'b': {
                cout << one.dequeue() << endl;
                break;
            }
            case 'c': {
                one.clear();
                break;
            }
            case 'd': {
                cout << one.is_empty() << endl;
                break;
            }
            case 'e': {
                cout << one.is_full() << endl;
                break;
            }
            case 'g': {
                cout << one.get_count() << endl;
                break;
            }
            case 'f': {
one.show();
                break;
            }
            default:
                cout << "Something go wrong" << endl;
        }
        cout << "Do you want do something more? yes/no\nEnter:";
        cin >> yesno;
    } while (yesno != "no");
    return 0;
}
