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

//конструктор с одним аргументом

//деструктор
Car::~Car() {
    delete _square;
    delete _price;
    delete _year;}

//конструктор копирования
Car::Car(const Car &a) : _year(new int(*a._year)),
                         _color(a._color),
                         _price(new int(*a._price)),
                         _car_name(a._car_name),
                         _square(new double(*a._square)),
                         _vin_code(a._vin_code) {
}

Car::Car(Car &&a) {
    _year = a._year;
    _color = a._color;
    _price = a._price;
    _car_name = a._car_name;
    _square = a._square;
    _vin_code = a._vin_code;

    a._year = nullptr;
    a._price = nullptr;
    a._square = nullptr;

}

//сеттер для вин кода
void Car::set_vin_code(string vin_code) {
    this->_vin_code = vin_code;
}

//геттер для вин кода
string Car::get_vin_code() {
    return _vin_code;
}

ostream &operator<<(ostream &os, Car &a) {
    os << "Name: " << a.get_car_name() << "\nColor: " << a.get_color() << "\nSquare: " << a.get_square() << "\nYear: "
       << a.get_year()
       << "\nVin code: " << a.get_vin_code() << "\nPrice: " << a.get_price();
    return os;
}

