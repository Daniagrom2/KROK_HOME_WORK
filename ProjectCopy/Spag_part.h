//
// Created by Kolodii Daniil on 30.08.2021.
//

#ifndef INC_011_EXAMPROJECT_KOLODII_SPAG_PART_H
#define INC_011_EXAMPROJECT_KOLODII_SPAG_PART_H
#pragma once

#include "Detail.h"


class Spag_part : public Detail {
public:
    Spag_part(string name, int price) : _name(name), _price(price) {}

    //переруска оператора ==
    bool operator==(Spag_part &a) {
        return this->_name == a._name && this->_price - a._price;
    }

    //перерузка оператора !=
    bool operator!=(Spag_part &a) {
        return !operator==(a);
    }

    //перегрузка оператора <<
    friend ostream &operator<<(ostream &os, Spag_part &a);

    //базовый конструктор
    Spag_part() {
        _name = "";
        _price = 0;
    }

    //переопределенный деструктор
    ~Spag_part() override {
    }

    //конструктор копирования
    Spag_part(const Spag_part &a) : _name(a._name), _price(a._price) {
    }

    Spag_part(Spag_part &&a) {
        _name = a._name;
        _price = a._price;
    }

    //геттер названия детали
    string get_part_name() const;

    //геттер цены детали
    int get_part_price();

    //сеттер имени детали
    void set_part_name(string name);

    //сеттер цены детали
    void set_part_price(int price);


protected:
    //поля класа
    int _price;
    string _name;
};

//перегрузка оператора <<
ostream &operator<<(ostream &os, Spag_part &a) {
    os << a.get_part_name() << " " << a.get_part_price();
    return os;
}


#endif //INC_011_EXAMPROJECT_KOLODII_SPAG_PART_H
