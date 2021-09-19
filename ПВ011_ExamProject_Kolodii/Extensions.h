//
// Created by Kolodii Daniil on 30.08.2021.
//

#ifndef INC_011_EXAMPROJECT_KOLODII_EXTENSIONS_H
#define INC_011_EXAMPROJECT_KOLODII_EXTENSIONS_H
#pragma once

#include "Spag_part.h"
#include <list>
//класс разширений
class Extensions {
public:
    //перегрузка оператора <<
    friend ostream &operator<<(ostream &os, Extensions &a);
//добавить разширение в список ,вводя данные с консоли
    void add_tuning_hand();
//добавить разширение в список ,данные вводятся как параметры
    void add_tuning_auto(string, int);
//удаляет разшиерние из списка по названию
    void remove_tuning(string);
//поиск по цене
    Spag_part *search_tuning_by_price(int);
//поиск по названию детали
    Spag_part *search_tuning_by_partname(string);

//геттер разширений
    list<Spag_part> const &get_tuning() const;

protected:
    //список разширений
    list<Spag_part> tuning;
};


#endif //INC_011_EXAMPROJECT_KOLODII_EXTENSIONS_H
