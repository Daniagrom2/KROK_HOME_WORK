//
// Created by Kolodii Daniil on 30.08.2021.
//

#ifndef INC_011_EXAMPROJECT_KOLODII_AUTOPARK_H
#define INC_011_EXAMPROJECT_KOLODII_AUTOPARK_H
#pragma once
#include "Car.h"
//класс автопарк
class Autopark {
public:
    //перегрузка оператора <<
    friend ostream &operator<<(ostream &os, Autopark &a);
    //добавляет машину в автопарк ,данные вводятся с рук
    void add_car_hand();
    //добавляет машину в автопарк ,данные вводятся с помощью параметров
    void add_car_auto(string car_name,string color,int year,string vin_code,int price,double square);
    //удаляет машину по винкоду
    void remove_car(int);
    //поиск машины по имени
    Car* search_by_car_name(string);
    //поиск машины по цвету
    Car* search_by_color(string);
    //поиск машины по цене
    Car* search_by_price(int);
    //поиск машины по году выпуска
    Car* search_by_year(int);
    //поиск машины по вин коду
    Car* search_by_vin_code(string);
    //поиск машины по обьему двигателя
    Car* search_by_square(double);
    //геттер для списка автопарк
    list<Car> const &get_autopark() const;

protected:
    //список машин
    list<Car> autopark;
};


#endif //INC_011_EXAMPROJECT_KOLODII_AUTOPARK_H
