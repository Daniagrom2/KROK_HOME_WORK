//
// Created by Kolodii Daniil on 17.06.2021.
//

#ifndef CLASS2_VECTOR3D_H
#define CLASS2_VECTOR3D_H
#pragma once

#include <iostream>

using namespace std;

class Vector3D {
    int *_x;
    int *_y;
    int *_z;

public:
    Vector3D();

    ~Vector3D();

    int get_x();

    int get_y();

    int get_z();

    void set_x(int);

    void set_y(int);

    void set_z(int);

    void add_vectors(Vector3D &vector);

    void sub_vectors(Vector3D &vector);

    int scalar_vectors(Vector3D &vector);

    void mul_on_scalar_vectors(Vector3D &vector);

    bool equ_vectors(Vector3D &vector);

    int lenth_vector();

    bool equ_lenth_vector(Vector3D &vector);
};

Vector3D::~Vector3D() {
    delete _x;
    delete _y;
    delete _z;
}

Vector3D::Vector3D() {
    _x = new int(0);
    _y = new int(0);
    _z = new int(0);
}

int Vector3D::get_x() {
    return *_x;
}

int Vector3D::get_y() {
    return *_y;
}

int Vector3D::get_z() {
    return *_z;
}

void Vector3D::set_x(int x) {
    *_x = x;
}

void Vector3D::set_y(int y) {
    *_y = y;
}

void Vector3D::set_z(int z) {
    *_z = z;
}

void Vector3D::add_vectors(Vector3D &vector) {
    *_x += *vector._x;
    *_y += *vector._y;
    *_z += *vector._z;
}

void Vector3D::sub_vectors(Vector3D &vector) {
    *_x -= *vector._x;
    *_y -= *vector._y;
    *_z -= *vector._z;
}

int Vector3D::scalar_vectors(Vector3D &vector) {
    return *_x * *vector._x + *_y * *vector._y + *_z * *vector._z;
}

void Vector3D::mul_on_scalar_vectors(Vector3D &vector) {
    *_x *= scalar_vectors(vector);
    *_y *= scalar_vectors(vector);
    *_z *= scalar_vectors(vector);
}

bool Vector3D::equ_vectors(Vector3D &vector) {
    if (*_x == *vector._x && *_y == *vector._y && *_z == *vector._z)
        return true;
    return false;
}

int Vector3D::lenth_vector() {
    return sqrt((*_x * *_x + *_y * *_y + *_z * *_z));
}

bool Vector3D::equ_lenth_vector(Vector3D &vector) {
    if (lenth_vector() == vector.lenth_vector())
        return true;
    return false;
}

class Read2 {
public:
    static void read_vector(Vector3D &a);
};

void Read2::read_vector(Vector3D &a) {
    int ans_x;
    int ans_y;
    int ans_z;
    cout << "Enter x:";
    cin >> ans_x;
    a.set_x(ans_x);
    cout << "Enter y:";
    cin >> ans_y;
    a.set_y(ans_y);
    cout << "Enter z:";
    cin >> ans_z;
    a.set_z(ans_z);
}

class Printer2 {
public:
   static void info_to_cmd(Vector3D &);
};

void Printer2::info_to_cmd(Vector3D &a) {
    cout << "X: " << a.get_x() << endl
         << "Y: " << a.get_y() << endl
         << "Z: " << a.get_z() << endl;
}

#endif //CLASS2_VECTOR3D_H
