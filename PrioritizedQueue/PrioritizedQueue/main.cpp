//
//  main.cpp
//  PriorityQueue
//
//  Created by Kolodii Daniil on 02.08.2021.
//
//////////////1/////////////////
//#include <iostream>
//using namespace std;
//struct Node{
//    int prioritet;
//    int value;
//    friend ostream& operator<<(ostream& os, const Node& one);
//};
//ostream& operator<<(ostream& os, const Node& one){
//    os<<"Value: "<<one.value<<" Prioritet: "<<one.prioritet<<"\n";
//    return os;
//}
//class PriorityQueue{
//public:
//    PriorityQueue() : _count(0){
//
//    }
//
//    bool is_full() {
//        return _count == 10;
//    }
//
//    bool is_empty() {
//        return _count == 0;
//    }
//
//    void en_queue(int value,int prioritet){
//        if (!is_full()) {
//        _arr[_count].value = value;
//        _arr[_count].prioritet = prioritet;
//        _count++;
//        }
//    }
//    Node de_queue(){
//        if (!is_empty()) {
//            int tmp_index = 0;
//            int max_prioritet = _arr[tmp_index].prioritet;
//            for (auto i = 0; i<_count; i++) {
//                if(max_prioritet<_arr[i].prioritet){
//                    max_prioritet =_arr[i].prioritet;
//                    tmp_index = i;
//                }
//            }
//            int tmp_value = _arr[tmp_index].value;
//            for (auto i = tmp_index+1; i<_count; i++) {
//                _arr[i-1].prioritet=_arr[i].prioritet;
//                _arr[i-1].value=_arr[i].value;
//            }
//            _count--;
//
//            return { tmp_value, max_prioritet};
//        }
//        return {-1,-1};
//    }
//    int get_count() {
//        return _count;
//    }
//        void clear() {
//            _count = 0;
//        }
//
//        void show() {
//            for (int i = 0; i < _count; i++) {
//                cout << _arr[i].prioritet << "\t"<< _arr[i].value<<"\n";
//            }
//        }
//private:
//    Node _arr[10];
//    int _count;
//};
//int main(int argc, const char * argv[]) {
//    PriorityQueue one;
//        string yesno;
//        do {
//            cout << "\ta)Enqueue\n";
//            cout << "\tb)Deqeue\n";
//            cout << "\tc)Clear\n";
//            cout << "\td)Is Empty\n";
//            cout << "\te)Is Full\n";
//            cout << "\tg)Get Count\n";
//            cout << "\tf)Show Queue\n";
//            char answer;
//            cout << "Enter:";
//            cin >> answer;
//            switch (answer) {
//                case 'a': {
//                    int value;
//                    int prioritet;
//                    cout << "Enter value:";
//                    cin >> value;
//                    cout << "Enter prioritet:";
//                    cin >> prioritet;
//                    one.en_queue(value, prioritet);
//                    break;
//                }
//                case 'b': {
//                    cout<<one.de_queue();
//                    break;
//                }
//                case 'c': {
//                    one.clear();
//                    break;
//                }
//                case 'd': {
//                    cout << one.is_empty() << endl;
//                    break;
//                }
//                case 'e': {
//                    cout << one.is_full() << endl;
//                    break;
//                }
//                case 'g': {
//                    cout << one.get_count() << endl;
//                    break;
//                }
//                case 'f': {
//                    one.show();
//                    break;
//                }
//                default:
//                    cout << "Something go wrong" << endl;
//            }
//            cout << "Do you want do something more? yes/no\nEnter:";
//            cin >> yesno;
//        } while (yesno != "no");
//    return 0;
//}
////////////////////2////////////////////
#include <iostream>
using namespace std;
struct Node{
    int prioritet;
    int value;
    friend ostream& operator<<(ostream& os, const Node& one);
};
ostream& operator<<(ostream& os, const Node& one){
    os<<"Value: "<<one.value<<" Prioritet: "<<one.prioritet<<"\n";
    return os;
}
class PriorityQueue{
public:
    PriorityQueue() : _count(0){
        
    }

    bool is_full() {
        return _count == 10;
    }

    bool is_empty() {
        return _count == 0;
    }

    void en_queue(int value,int prioritet){
        if (!is_full()) {
        _arr[_count].value = value;
        _arr[_count].prioritet = prioritet;
        _count++;
        }
    }
    Node de_queue(){
        if (!is_empty()) {
            int tmp_index = 0;
            int max_prioritet = _arr[tmp_index].prioritet;
            for (auto i = 0; i<_count; i++) {
                if(max_prioritet<_arr[i].prioritet){
                    max_prioritet =_arr[i].prioritet;
                    tmp_index = i;
                }
            }
            int tmp_value = _arr[tmp_index].value;
            for (auto i = tmp_index+1; i<_count; i++) {
                _arr[i-1].prioritet=_arr[i].prioritet;
                _arr[i-1].value=_arr[i].value;
            }
            _count--;

            return { tmp_value, max_prioritet};
        }
        return {-1,-1};
    }
    int get_count() {
        return _count;
    }
        void clear() {
            _count = 0;
        }
    
        void show() {
            for (int i = 0; i < _count; i++) {
                cout << _arr[i].prioritet << "\t"<< _arr[i].value<<"\n";
            }
        }
private:
    Node _arr[10];
    int _count;
};
int main(int argc, const char * argv[]) {
    PriorityQueue one;
        string yesno;
        do {
            cout << "\ta)Добавить запрос на печать \n";
            cout << "\tb)Запуск печати\n";
            cout << "\tc)Очистить все запросы на печать\n";
            cout << "\td)Получить количество запросов\n";
            cout << "\te)Показать запросы\n";
            char answer;
            cout << "Enter:";
            cin >> answer;
            switch (answer) {
                case 'a': {
                    int value;
                    int prioritet;
                    cout << "Введите количество листов:";
                    cin >> value;
                    cout << "Введите приоритет:";
                    cin >> prioritet;
                    one.en_queue(value, prioritet);
                    break;
                }
                case 'b': {
                   while(one.get_count()!=0)
                        cout<<one.de_queue();
                    
                    break;
                }
                case 'c': {
                    one.clear();
                    break;
                }
                case 'd': {
                    cout <<"Запросов: "<<one.get_count() << endl;
                    break;
                }
                case 'e': {
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
