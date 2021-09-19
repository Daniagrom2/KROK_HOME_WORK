//
// Created by Kolodii Daniil on 15.06.2021.
//

#ifndef CLASS_COUNTER_H
#define CLASS_COUNTER_H
#pragma once;

#include <iostream>

using namespace std;
class Counter {

public:
    Counter(int max_val, int min_val);

    void add_one();

    void info_to_cmd();

    ~Counter();

    Counter();

private:
    int *_counter;
    int *_max_value;
    int *_min_value;
};
Counter::Counter() {
    _counter = new int(0);
    _max_value = new int(100);
    _min_value = new int(0);
}

Counter::Counter(int max_val, int min_val) {
    _max_value = new int(max_val);
    _min_value = new int(min_val);
    _counter = new int(*_min_value);
}

Counter::~Counter() {
    delete _counter;
    delete _max_value;
    delete _min_value;
}

void Counter::add_one() {
    if (*_counter < *_max_value) {
        *_counter+=1;
    } else if (*_counter >= *_max_value) {
        *_counter = *_min_value;
    }
}

void Counter::info_to_cmd() {
    cout << "Current num: " << *_counter << endl;
}
#endif //CLASS_COUNTER_H
