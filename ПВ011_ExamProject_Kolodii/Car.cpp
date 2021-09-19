//
// Created by Kolodii Daniil on 30.08.2021.
//

#include "Car.h"

//сеттер для цвета
void Car::set_color(string color) {
    _color = color;
}

//сеттер для года
void Car::set_year(int year) {
    *_year = year;
}

//сеттер для имени машины
void Car::set_car_name(string car_name) {
    _car_name = car_name;
}

//сеттер для обьема двигателя
void Car::set_square(double square) {
    *_square = square;

}

//сеттер для цены
void Car::set_price(int price) {
    *_price = price;
}

//геттер для цвета
string Car::get_color() {
    return _color;
}

//геттер для года
int Car::get_year() {
    return *_year;
}

//геттер для имени машины
string Car::get_car_name() {
    return _car_name;
}

//геттер для обьема двигателя
double Car::get_square() {
    return *_square;
}

//геттер для цены
int Car::get_price() {
    return *_price;
}

//геттер для списка разширений
list<Spag_part> const Car::get_extention(int index) const {
    return extensions[index]->get_tuning();
}
Extensions* Car::get_extention2() const {
    return *extensions;
}

//сеттер для списка разширений
void Car::set_extention(string name, int price, int index) {
    auto a =  extensions[index];
    a->add_tuning_auto(name, price);
}



//конструктор с одним аргументом
Car::Car(int count) : count(new int(count)) {
    _year = new int(0);
    _price = new int(0);
    _square = new double(0);
    _vin_code = new int(0);
    extensions = new Extensions *[count];
    for (int i = 0; i < *this->count; i++) {
        extensions[i] = new Extensions;
    }


}

//деструктор
Car::~Car() {
    delete _vin_code;
    delete _square;
    delete _price;
    delete _year;
    for (int i = 0; i < *count; i++) {
        delete extensions[i];
    }
    delete[] extensions;
}

//конструктор копирования
Car::Car(const Car &a) : _year(new int(*a._year)),
                         _color(a._color),
                         _price(new int(*a._price)),
                         _car_name(a._car_name),
                         _square(new double(*a._square)),
                         count(new int(*a.count)), _vin_code(new int(*a._vin_code)),
                         extensions(new Extensions *(*a.extensions)) {
}

Car::Car(Car &&a) {
    _year = a._year;
    _color = a._color;
    _price = a._price;
    _car_name = a._car_name;
    _square = a._square;
    count = a.count;
    _vin_code = a._vin_code;
    extensions = a.extensions;

    a._year = nullptr;
    a._vin_code = nullptr;
    a._price = nullptr;
    a._square = nullptr;
    a.count = nullptr;
    a.extensions = nullptr;
}

//сеттер для вин кода
void Car::set_vin_code(int vin_code) {
    *this->_vin_code = vin_code;
}

//геттер для вин кода
int Car::get_vin_code() {
    return *_vin_code;
}

ostream &operator<<(ostream &os, Car &a) {
    os << "Name: " << a.get_car_name() << "\nColor: " << a.get_color() << "\nSquare: " << a.get_square() << "\nYear: "
       << a.get_year()
       << "\nVin code: " << a.get_vin_code() << "\nPrice: " << a.get_price();
    return os;
}

