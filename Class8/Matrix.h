//
// Created by Kolodii Daniil on 01.07.2021.
//

#ifndef CLASS8_MATRIX_H
#define CLASS8_MATRIX_H
#pragma once

#include <iostream>

using namespace std;

class Vector;

class Matrix {
private:
    int **arr;
public:


    Matrix();

    ~Matrix();

    void transpose();

    friend class Vector;

    Matrix &operator=(const Matrix &a);

    Matrix &operator+(const Matrix &a);

    Matrix &operator-(const Matrix &a);

    Matrix &operator*(const Matrix &a);

    int get_i_element(int, int);

    void set_i_element(int, int, int);
    friend ostream& operator<< (ostream &out,Matrix &m);
    friend istream& operator>> (istream &in, Matrix &m);
};

Matrix::Matrix() {
    arr = new int *[3];
    for (int i = 0; i < 3; i++) {
        arr[i] = new int[3];
    }
}

Matrix::~Matrix() {
    for (int count = 0; count < 3; count++)
        delete[]arr[count];
}

Matrix &Matrix::operator+(const Matrix &a) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] += a.arr[i][j];
        }
    }
    return *this;
}

Matrix &Matrix::operator-(const Matrix &a) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] -= a.arr[i][j];
        }
    }
    return *this;
}

Matrix &Matrix::operator=(const Matrix &a) {
    if (arr) {
        for (int count = 0; count < 3; count++)
            delete[]arr[count];
    }

    arr = new int *[3];
    for (int i = 0; i < 3; i++) {
        arr[i] = new int[3];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = a.arr[i][j];
        }
    }
    return *this;
}

Matrix &Matrix::operator*(const Matrix &a) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++)
                arr[i][j] += arr[i][k] * a.arr[k][j];
        }
    }
    return *this;
}

int Matrix::get_i_element(int row, int column) {
    return arr[row][column];
}

void Matrix::set_i_element(int row, int column, int value) {
    arr[row][column] = value;
}

void Matrix::transpose() {
    int t;
    for (int i = 0; i < 3; ++i) {
        for (int j = i; j < 3; ++j) {
            t = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = t;
        }
    }
}
ostream &operator<<(ostream &out, Matrix &m) {
    cout<<"Matrix: \n";
    for (int i = 0; i < 3; i++) {
        cout<<"\n";
        for (int j = 0; j < 3; j++) {
            cout<< m.get_i_element(i,j)<<"\t";
        }
    }
    return out;
}
class Vector {
private:
    int _x;
    int _y;
    int _z;
public:
    friend class Matrix;

    int get_x();

    int get_y();

    int get_z();

    void set_x(int);

    void set_y(int);

    void set_z(int);

    Vector operator=(const Vector &a);

    friend Vector multiply(Vector &b, Matrix &a);
    friend ostream& operator<< (ostream &out,Vector &v);
    friend istream& operator>> (istream &in, Vector &v);
};

istream &operator>>(istream &in, Matrix &m) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"Enter arr["<<i<<"]["<< j<<"]:";
            in>>m.arr[i][j];
        }
    }

    return in;
}


int Vector::get_x() {
    return _x;
}

int Vector::get_y() {
    return _y;
}

int Vector::get_z() {
    return _z;
}

void Vector::set_x(int x) {
    _x = x;
}

void Vector::set_y(int y) {
    _y = y;
}

void Vector::set_z(int z) {
    _z = z;
}

Vector multiply(Vector &b, Matrix &a) {
    Vector tmp;
    tmp.set_x(
            a.get_i_element(0, 0) * b.get_x() + a.get_i_element(0, 1) * b.get_y() + a.get_i_element(0, 2) * b.get_z());
    tmp.set_y(
            a.get_i_element(1, 0) * b.get_x() + a.get_i_element(1, 1) * b.get_y() + a.get_i_element(1, 2) * b.get_z());
    tmp.set_z(
            a.get_i_element(2, 0) * b.get_x() + a.get_i_element(2, 1) * b.get_y() + a.get_i_element(2, 2) * b.get_z());
    return tmp;
}

Vector Vector::operator=(const Vector &a) {
    _x = a._x;
    _y = a._y;
    _z = a._z;

    return *this;
}

ostream &operator<<(ostream &out, Vector &v) {
    cout<<"Vector: \n x: "<<v.get_x()<<"\ty: "<<v.get_y()<<"\tz: "<<v.get_z()<<endl;
    return out;
}

istream &operator>>(istream &in, Vector &v) {
    cout<<"Enter x:";
    in>>v._x;
    cout<<"Enter y:";
    in>>v._y;
    cout<<"Enter y:";
    in>>v._z;
    return in;
}

#endif //CLASS8_MATRIX_H
