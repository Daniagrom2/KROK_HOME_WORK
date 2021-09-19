////////1//////////
//#include <iostream>
//
//using namespace std;
//
//template<class T>
//class Circular_queue {
//public:
//    Circular_queue(int size = 10) : _count(0), _size(size) {
//        _arr = new T[_size];
//    }
//
//    bool is_full() {
//        return _count == _size;
//    }
//
//    bool is_empty() {
//        return _count == 0;
//    }
//
//    void enqueue(T value) {
//        if (!is_full()) {
//            _arr[_count++] = value;
//        }
//    }
//
//    int dequeue() {
//        if (!is_empty()) {
//            T first_element = _arr[0];
//            for (auto i = 1; i < _count; i++) {
//                _arr[i - 1] = _arr[i];
//            }
//            _arr[_count - 1] = first_element;
//            return first_element;
//        }
//        return -1;
//    }
//
//    int get_count() {
//        return _count;
//    }
//
//    void clear() {
//        _count = 0;
//    }
//
//    void show() {
//        for (int i = 0; i < _count; i++) {
//            cout << _arr[i] << "\n";
//        }
//    }
//
//    ~Circular_queue() {
//        delete[] _arr;
//    }
//
//private:
//    T *_arr;
//    int _count;
//    int _size;
//};
//
//int main() {
//    Circular_queue<double> one(10);
//    string yesno;
//    do {
//        cout << "\ta)Enqueue\n";
//        cout << "\tb)Deqeue\n";
//        cout << "\tc)Clear\n";
//        cout << "\td)Is Empty\n";
//        cout << "\te)Is Full\n";
//        cout << "\tg)Get Count\n";
//        cout << "\tf)Show Queue\n";
//        char answer;
//        cin >> answer;
//        switch (answer) {
//            case 'a': {
//                double value;
//                cout << "Enter value:";
//                cin >> value;
//                one.enqueue(value);
//                break;
//            }
//            case 'b': {
//                cout << one.dequeue() << endl;
//                break;
//            }
//            case 'c': {
//                one.clear();
//                break;
//            }
//            case 'd': {
//                cout << one.is_empty() << endl;
//                break;
//            }
//            case 'e': {
//                cout << one.is_full() << endl;
//                break;
//            }
//            case 'g': {
//                cout << one.get_count() << endl;
//                break;
//            }
//            case 'f': {
//                one.show();
//                break;
//            }
//            default:
//                cout << "Something go wrong" << endl;
//        }
//        cout << "Do you want do something more? yes/no\nEnter:";
//        cin >> yesno;
//    } while (yesno != "no");
//    return 0;
//}
////////2////////
#include <iostream>

using namespace std;

template<class T>
class Circular_queue {
public:
    Circular_queue(int size = 10) : _count(0), _size(size) {
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

    int dequeue() {
        if (!is_empty()) {
            T first_element = _arr[0];
            for (auto i = 1; i < _count; i++) {
                _arr[i - 1] = _arr[i];
            }
            _arr[_count - 1] = first_element;
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

    ~Circular_queue() {
        delete[] _arr;
    }

private:
    T *_arr;
    int _count;
    int _size;
};

int main() {

    Circular_queue<int> one(10);
    one.enqueue(2);
    one.enqueue(3);
    one.enqueue(3);
    one.enqueue(3);
    one.enqueue(2);
    one.enqueue(3);
    one.enqueue(3);
    one.enqueue(3);
    one.enqueue(2);
    one.enqueue(1);
    int tmp1;
    int tmp2;
    int tmp3;

    Circular_queue<int> two(10);
    one.enqueue(3);
    one.enqueue(2);
    one.enqueue(2);
    one.enqueue(3);
    one.enqueue(3);
    one.enqueue(1);
    one.enqueue(3);
    one.enqueue(3);
    one.enqueue(3);
    one.enqueue(2);


    Circular_queue<int> three(10);
    one.enqueue(1);
    one.enqueue(3);
    one.enqueue(3);
    one.enqueue(2);
    one.enqueue(2);
    one.enqueue(3);
    one.enqueue(3);
    one.enqueue(2);
    one.enqueue(3);
    one.enqueue(3);
    string yesno;
    do{
    for (int i = 0; i < rand() % 21; i++) {
        tmp1 = one.dequeue();

    }
    int win_conunter;
    win_conunter +=tmp1;
    cout<<tmp1<<"\t";

    for (int i = 0; i < rand() % 21; i++) {

        tmp2 = one.dequeue();
    }
    win_conunter +=tmp2;
    cout<<tmp2<<"\t";

    for (int i = 0; i < rand() % 21; i++) {

        tmp3 = one.dequeue();
    }
    win_conunter +=tmp3;
    cout<<tmp3<<"\n";
    if(win_conunter == 9)
        cout<<"You LOSE"<<endl;
    else if(win_conunter == 8)
        cout<<"You win 1$"<<endl;
    else if(win_conunter == 7)
        cout<<"You win 5$"<<endl;
    else if(win_conunter == 6)
        cout<<"You win 10$"<<endl;
    else if(win_conunter == 5)
        cout<<"You win 20$"<<endl;
    else if(win_conunter == 4)
        cout<<"You win 50$"<<endl;
    else if(win_conunter == 3)
        cout<<"You win 100$"<<endl;

    cout<<"Do you want play again? (yes/no)"<<endl;
    cin>>yesno;
    win_conunter = 0;
    }while(yesno !="no");
    return 0;
}
