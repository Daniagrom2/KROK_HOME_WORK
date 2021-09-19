//
// Created by Kolodii Daniil on 21.06.2021.
//

#ifndef CLASS3_POINT_H
#define CLASS3_POINT_H
#pragma once

#include <iostream>

using namespace std;

class Point {
    int *_x;
    int *_y;
public:
    Point();

    ~Point();

    Point(int,int);

    int get_x();

    int get_y();

    void set_x(int);

    void set_y(int);

    void move_by_horizontal(int x);

    void move_by_vertical(int y);

    int distance_between_two(Point &a);

    int distance_to_begin();

    bool sravnenie(Point &a);
};

int Point::get_x() {
    return *_x;
}

int Point::get_y() {
    return *_y;
}

void Point::set_x(int x) {
    *this->_x = x;
}

void Point::set_y(int y) {
    *this->_y = y;
}

void Point::move_by_horizontal(int x) {
    *this->_x += x;
}

void Point::move_by_vertical(int y) {
    *this->_y += y;
}

Point::Point() : _x(new int(0)), _y(new int(0)) {
}

Point::~Point() {
    delete _x;
    delete _y;
}

int Point::distance_between_two(Point &a) {
    return sqrt((*a._x - *_x) * (*a._x - *_x) + (*a._y - *_y) * (*a._y - *_y));
}

int Point::distance_to_begin() {
    return sqrt((0 - *_x) * (0 - *_x) + (0 - *_y) * (0 - *_y));
}

bool Point::sravnenie(Point &a){
    if(*_x == *a._x && *_y == *a._y)
        return 1;
    return 0;
}

Point::Point(int x, int y) {
set_x(x);
set_y(y);
}

#endif //CLASS3_POINT_H