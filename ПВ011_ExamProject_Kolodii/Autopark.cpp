//
// Created by Kolodii Daniil on 30.08.2021.
//

#include "Autopark.h"

//переггрузка метода фаинд из библиотеки алгоритм
list<Car>::iterator &find(list<Car> &ls, int vin) {
    for (auto itr = ls.begin();
         itr != ls.end(); itr++) {
            return itr;
    }
}

//удаляет машину по винкоду
void Autopark::remove_car(int vin) {
    auto remove_it = find(autopark, vin);
    autopark.erase(remove_it);
}

//добавляет машину в автопарк ,данные вводятся с помощью параметров
void
Autopark::add_car_auto(string car_name, string color, int year, int vin_code, int price, double square, int count) {
    Car one(count);
    one.set_color(color);
    one.set_car_name(car_name);
    one.set_price(price);
    one.set_square(square);
    one.set_vin_code(vin_code);
    one.set_year(year);

////    if (count != 0) {
////        string exten;
////        int price2;
////        for (int i = 0; i < count; i++) {
////            cout << "Enter " << i << " extension name:";
////            getline(cin, exten);
////            cout << "Enter " << i << " extension price:";
////            cin >> price2;
////            one.set_extention(exten, price2, i);
////        }
////
////    }
    autopark.emplace(autopark.end(),one);
//    static_cast<Car>(color,year,car_name,square,price,vin_code,count)
}

//добавляет машину в автопарк ,данные вводятся с рук
void Autopark::add_car_hand() {
    string name;
    string color;
    int price;
    int count;
    int vin;
    int year;
    double square;
    cout << "Enter extensions count:";
    cin >> count;
    cin.ignore();
    Car one(count);
    cout << "Enter car name:";
    getline(cin, name);
    cout << "Enter car color:";
    getline(cin, color);
    cout << "Enter price:";
    cin >> price;
    cout << "Enter vin code:";
    cin >> vin;
    cout << "Enter square:";
    cin >> square;
    cout << "Enter year:";
    cin >> year;
    one.set_color(color);
    one.set_car_name(name);
    one.set_price(price);
    one.set_square(square);
    one.set_vin_code(vin);
    one.set_year(year);
    cin.ignore();
    for (int i = 0; i < count; i++) {
        cout << "Enter " << i << " extension name:";
        getline(cin, name);
        cout << "Enter " << i << " extension price:";
        cin >> price;
        one.set_extention(name, price, i);
    }


}

//геттер для списка автопарк
list<Car> const &Autopark::get_autopark() const {
    return autopark;
}

//поиск машины по имени
Car *Autopark::search_by_car_name(string name) {
    for (auto i = autopark.begin(); i != autopark.end() ; ++i) {
        if (i->get_car_name() == name) {
            return &(*i);
        }
    }
}

//поиск машины по цвету
Car *Autopark::search_by_color(string color) {
    for (auto i = autopark.begin(); i != autopark.end() ; ++i) {
        if (i->get_color()== color) {
            return &(*i);
        }
    }
}

//поиск машины по цене
Car *Autopark::search_by_price(int price) {
    for (auto i = autopark.begin(); i != autopark.end() ; ++i) {
        if (i->get_price() == price) {
            return &(*i);
        }
    }
}

//поиск машины по году выпуска
Car *Autopark::search_by_year(int year) {
    for (auto i = autopark.begin(); i != autopark.end() ; ++i) {
        if (i->get_year() == year) {
            return &(*i);
        }
    }
}

//поиск машины по вин коду
Car *Autopark::search_by_vin_code(int vin) {
    for (auto i = autopark.begin(); i != autopark.end() ; ++i) {
        if (i->get_vin_code() == vin) {
            return &(*i);
        }
    }
}

//поиск машины по обьему двигателя
Car *Autopark::search_by_square(double square) {
    for (auto i = autopark.begin(); i != autopark.end() ; ++i) {
        if (i->get_square() == square) {
            return &(*i);
        }
    }
}

ostream &operator<<(ostream &os, Autopark &a) {
    for (auto x:a.get_autopark()) {
        os << "Name: " << x.get_car_name() << "\nColor: " << x.get_color() << "\nSquare: " << x.get_square()
           << "\nYear: " << x.get_year()
           << "\nVin code: " << x.get_vin_code() << "\nPrice: " << x.get_price() << "\n\n";
    }
    return os;
}
