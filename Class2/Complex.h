//
// Created by Kolodii Daniil on 16.06.2021.
//

#ifndef CLASS2_COMPLEX_H
#define CLASS2_COMPLEX_H
#pragma once

#include <iostream>

using namespace std;

class Complex {
public:
    Complex();

    ~Complex();

    Complex(int, int);

    int get_a();

    int get_b();

    void set_a(int);

    void set_b(int);

    void add(Complex &a, int c, int d);

    void sub(Complex &a, int c, int d);

    void mul(Complex &a, int c, int d);

    void div(Complex &a, int c, int d);

    bool equ(Complex &a, int c, int d);

    void conj(Complex &a);

private:
    int *_a;
    int *_b;
};

Complex::Complex() {
    _a = new int(1);
    _b = new int(1);
}

Complex::Complex(int a, int b) : _a(new int(a)), _b(new int(b)) {
}

Complex::~Complex() {
    delete _a;
    delete _b;
}

void Complex::add(Complex &a, int c, int d) {
    *a._a += c;
    *a._b += d;
}

int Complex::get_b() {
    return *_b;
}

int Complex::get_a() {
    return *_a;
}

void Complex::sub(Complex &a, int c, int d) {
    *a._a -= c;
    *a._b -= d;
}

void Complex::div(Complex &a, int c, int d) {
    *a._a = (*_a * c + *_b * d) / (c * c + d * d);
    *a._b = (*_b * c - *_a * d) / (c * c + d * d);
}

void Complex::mul(Complex &a, int c, int d) {
    *a._a = *_a * c - *_b * d;
    *a._b = *_a * d + *_b * c;
}

bool Complex::equ(Complex &a, int c, int d) {
    if (*a._a == c && *a._b == d)
        return true;
    return false;
}

void Complex::conj(Complex &a) {
    *a._b *= -1;
}

void Complex::set_b(int b) {
    *_b = b;
}

void Complex::set_a(int a) {
    *_a = a;
}

class Read {
public:
    void read_complex(Complex &a);
};

void Read::read_complex(Complex &a) {
    int ans_a;
    int ans_b;
    cout << "Enter a:";
    cin >> ans_a;
    a.set_a(ans_a);
    cout << "Enter b:";
    cin >> ans_b;
    a.set_b(ans_b);
}

class Printer {
public:
     void info_to_cmd(Complex &);
};

void Printer::info_to_cmd(Complex &a) {
    cout << "a: " << a.get_a() << endl << "b: " << a.get_b() << endl;
}

#endif //CLASS2_COMPLEX_H
