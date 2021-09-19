//
// Created by Kolodii Daniil on 30.08.2021.
//

#include "Spag_part.h"

//геттер названия детали
string Spag_part::get_part_name() const {
    return _name;
}

//геттер цены детали
int Spag_part::get_part_price() {
    return _price;
}

//сеттер имени детали
void Spag_part::set_part_name(string name) {
    _name = name;
}

//сеттер цены детали
void Spag_part::set_part_price(int price) {
    _price = price;
}


