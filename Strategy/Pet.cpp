//
// Created by Kolodii Daniil on 27.09.2021.
//

#include "Pet.h"
void Pet::set_name(string name) {
    this->name = name;
}

void Pet::set_age(int age) {
    this->age = age;
}

string Pet::get_name() {
    return this->name;
}

int Pet::get_age() {
    return this->age;
}