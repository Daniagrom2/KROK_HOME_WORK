//
// Created by Kolodii Daniil on 30.08.2021.
//

#ifndef INC_011_EXAMPROJECT_KOLODII_CAR_H
#define INC_011_EXAMPROJECT_KOLODII_CAR_H
#pragma once

#include "Spag_part.h"

class Car {
public:
    Car(string color, int year, string car_name, double square, int price, int vin_code,
    int count):_color(color),_year(new int(year)),_car_name(car_name),_square(new double(square)),
    _price(new int(price)),_vin_code(new int(vin_code)),count(new int(count)) {
        extensions = new Extensions *[count];
        for (int i = 0; i < *this->count; i++) {
            extensions[i] = new Extensions;
        }
    }


    friend ostream &operator<<(ostream &os, Car &a);
    //конструктор с одним аргументом
    Car(int count = 0);

    //деструктор
    ~Car();

    //конструктор копирования
    Car(const Car &a);
    Car(Car &&a);

    //сеттер для цвета
    void set_color(string);

    //сеттер для года
    void set_year(int);

    //сеттер для имени машины
    void set_car_name(string);

    //сеттер для обьема двигателя
    void set_square(double);

    //сеттер для цены
    void set_price(int);

    //сеттер для вин кода
    void set_vin_code(int);

    //геттер для цвета
    string get_color();

    //геттер для года
    int get_year();

    //геттер для имени машины
    string get_car_name();

    //геттер для обьема двигателя
    double get_square();

    //геттер для цены
    int get_price();

    //геттер для вин кода
    int get_vin_code();
    //геттер для списка разширений
    list<Spag_part> const get_extention(int index) const;
    //сеттер для списка разширений
    void set_extention(string, int, int);
int get_count(){
    return *count;
}
void set_count(int count){
    *this->count = count;
}
    Extensions* get_extention2() const;
protected:
    //поля класа
    string _color;
    int *_year;
    string _car_name;
    double *_square;
    int *_price;
    int *_vin_code;
    int *count;
    Extensions **extensions;


};


#endif //INC_011_EXAMPROJECT_KOLODII_CAR_H
