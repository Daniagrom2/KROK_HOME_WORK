//
// Created by Kolodii Daniil on 30.08.2021.
//

#include "Extensions.h"

//добавить разширение в список ,вводя данные с консоли
void Extensions::add_tuning_hand() {
    string name;
    int price;
    cout << "Enter name of part: ";
    getline(cin, name);
    cout << "Enter price of part:";
    cin >> price;
    cin.ignore();
    Spag_part one ;
    one.set_part_name(name);
    one.set_part_price(price);
    tuning.push_front(one);

}

//перегруженый метод поиска из библиоеки алгоритм
list<Spag_part>::iterator &find(list<Spag_part> &ls, string name) {
    for (auto itr = ls.begin();
         itr != ls.end(); itr++) {
        return itr;
    }
}

//удаляет разшиерние из списка по названию
void Extensions::remove_tuning(string name) {
    tuning.erase(find(tuning, name));
}

//поиск по цене
Spag_part *Extensions::search_tuning_by_price(int price) {
    for (auto i = tuning.begin(); i != tuning.end() ; ++i) {
        if (i->get_part_price() == price) {
            return &(*i);
        }
    }

}

//поиск по названию детали
Spag_part *Extensions::search_tuning_by_partname(string name) {
    for (auto i = tuning.begin(); i != tuning.end() ; ++i) {
        if (i->get_part_name() == name) {
            return &(*i);
        }
    }
}



//геттер разширений
list<Spag_part> const &Extensions::get_tuning() const {
    return tuning;
}

//добавить разширение в список ,данные вводятся как параметры
void Extensions::add_tuning_auto(string name, int price) {
    Spag_part one(name, price);
    tuning.push_back(one);


}

ostream &operator<<(ostream &os, Extensions &a) {
    for (auto x: a.get_tuning()) {
        cout<<"Name: "<<x.get_part_name()<<"\nPrice: "<<x.get_part_price()<<endl;
    }
    return os;
}


