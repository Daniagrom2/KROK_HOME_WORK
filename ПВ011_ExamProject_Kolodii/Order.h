//
// Created by Kolodii Daniil on 30.08.2021.
//

#ifndef INC_011_EXAMPROJECT_KOLODII_ORDER_H
#define INC_011_EXAMPROJECT_KOLODII_ORDER_H
#pragma once
#include <fstream>
#include "Autopark.h"
#include "Extensions.h"

class Order {
public:
    Order(string path):_path(path){
        _order_sum = make_shared<int>();
    }

    string get_path();
    int get_order_sum();
    void set_path(string);
    void set_order_sum(int);
    void head_of_order(int);
    void clear_order_file();
    void add_car_to_order( Car );
    void add_extention_to_order(Spag_part);
    void add_to_order_result_sum();
private:
    string _path;
    shared_ptr<int> _order_sum;

};


#endif //INC_011_EXAMPROJECT_KOLODII_ORDER_H
