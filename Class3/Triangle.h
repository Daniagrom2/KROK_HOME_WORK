//
// Created by Kolodii Daniil on 22.06.2021.
//


#define CLASS3_TRIANGLE_H
#pragma once

#include <iostream>

using namespace std;

class Triangle {
    int *_a;
    int *_b;
    int *_c;
    int *_alpha;
    int *_beta;
    int *_gama;
public:
    Triangle();

    ~Triangle();

    int get_a();

    int get_b();

    int get_c();

    int get_alpha();

    int get_beta();

    int get_gama();

    void set_a(int);

    void set_b(int);

    void set_c(int);

    void set_alpha(int);

    void set_beta(int);

    void set_gama(int);

    int square();
    int perimetr();

    int type_of_triengle();
    int visota();

};

Triangle::Triangle() {
    _a = new int(0);
    _b = new int(0);
    _c = new int(0);
    _alpha = new int(0);
    _beta = new int(0);
    _gama = new int(0);

}

Triangle::~Triangle() {
    delete _a;
    delete _alpha;
    delete _b;
    delete _beta;
    delete _c;
    delete _gama;

}

int Triangle::get_a() {
    return *_a;
}

int Triangle::get_b() {
    return *_b;
}

int Triangle::get_c() {
    return *_c;
}

int Triangle::get_alpha() {
    return *_alpha;
}

int Triangle::get_beta() {
    return *_beta;
}

int Triangle::get_gama() {
    return *_gama;
}

void Triangle::set_a(int a) {
    *this->_a = a;
}

void Triangle::set_b(int b) {
    *this->_b = b;
}

void Triangle::set_c(int c) {
    *this->_c = c;
}

void Triangle::set_alpha(int alpha) {
    *this->_alpha = alpha;
}

void Triangle::set_beta(int beta) {
    *this->_beta = beta;
}

void Triangle::set_gama(int gama) {
    *this->_gama = gama;
}

int Triangle::square(){
    int p = (*this->_a + *this->_b + *this->_c)/2;
return sqrt(p*(p-*this->_a)*(p-*this->_b)*(p-*this->_c));
}

int Triangle::perimetr() {
    return (*this->_a+*this->_b+*this->_c);
}

int Triangle::type_of_triengle() {
    if(*_a == *_b && *_a== *_c )
    return 1;
    else if(*_a == *_b && *_a!= *_c || *_a == *_c && *_a!= *_b || *_c == *_b && *_a!= *_c  )
        return 2;
    else if((pow(*_a,2) + pow(*_b,2)) == pow(*_c,2) ||
    (pow(*_a,2) + pow(*_c,2)) == pow(*_b,2) ||
            (pow(*_c,2) + pow(*_b,2)) == pow(*_a,2))
        return 3;
    return 0;
}

int Triangle::visota() {
    int type = type_of_triengle();
    if (type == 1){
        return (*_a*sqrt(3))/2;
    }else if (type == 2){
return sqrt(pow(*_b,2)-(pow(*_b,2)/4));
    }else if(type == 3)
return (*_a * *_b )/ *_c;
}


