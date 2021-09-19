//
// Created by Kolodii Daniil on 23.06.2021.
//

#ifndef CLASS4_DYNAMICARRAY_H
#define CLASS4_DYNAMICARRAY_H
#pragma once
#include <iostream>

using namespace std;

class DynamicArray;

class Number {
private:
    int *_x;
public:
    friend DynamicArray;

    Number &operator=(const Number &a) {
        if (_x)
            delete _x;
        _x = new int;
        _x = a._x;
        return *this;
    }

    Number &operator=(int i) {
        if (_x)
            delete _x;
        _x = new int;
        *_x = i;
        return *this;
    }

    Number();

    Number(int);

    ~Number();

    Number(const Number &a);

    int get_x();

    void set_x(int);

};

Number::Number() : _x(new int(0)) {
}

Number::Number(int x) : _x(new int(x)) {
}

Number::~Number() {
    delete _x;
}

Number::Number(const Number &a) : _x(new int(*a._x)) {
}

int Number::get_x() {
    return *_x;
}

void Number::set_x(int x) {
    *_x = x;
}


class DynamicArray {
    int *size;
    Number *arr;
public:

    DynamicArray();

    ~DynamicArray();

    DynamicArray(int);

    DynamicArray(const DynamicArray &a);

    void set_arr_element(int i);

    void print();

    void add_element();

    void arr_sorting();

    void delete_element(int);
    void combo_two_arr(DynamicArray &a);

    int serching_element(int elem);

    DynamicArray &operator=(DynamicArray &a) {
        if (arr)
            delete[] arr;
        *size = *a.size;
        arr = new Number[*size];
        for (int i = 0; i < *size; i++) {
            arr[i].set_x(a.arr[i].get_x());
        }
        return *this;
    }

    Number &operator[](int i) {
        if (i < *size)
            return arr[i];
    }

    DynamicArray &operator++() {
        Number *tmp = new Number[*this->size + 1];
        for (int i = 0; i < *this->size; i++) {
            tmp[i].set_x(arr[i].get_x());
        }
        (*this->size)++;
        delete[] arr;
        arr = tmp;
        arr[*this->size - 1] = NULL;
        return *this;
    }


    DynamicArray &operator+(int i) {
        arr[*size - 1].set_x(i);
        return *this;
    }

    DynamicArray &operator-(int i) {
        delete_element(i);
        return *this;
    }

    DynamicArray &operator--() {
        Number *tmp = new Number[*this->size - 1];
        (*this->size)--;
        for (int i = 0; i < *this->size; i++) {
            tmp[i].set_x(arr[i].get_x());
        }
        for (int i = *this->size + 1; i < *this->size; i++) {
            tmp[i].set_x(arr[i].get_x());
        }
        delete[] arr;
        arr = tmp;
        return *this;
    }
};

DynamicArray::DynamicArray() {
    size = new int(1);
    arr = new Number[*size];
}

DynamicArray::DynamicArray(int size) {
    this->size = new int(size);
    arr = new Number[*this->size];
}

DynamicArray::~DynamicArray() {
    delete size;
    delete[] arr;
}


DynamicArray::DynamicArray(const DynamicArray &a) {
    arr = new Number[*a.size];
    size = new int(*a.size);
    for (int i = 0; i < *size; i++) {
        arr[i].set_x(a.arr->get_x());
    }
}


void DynamicArray::set_arr_element(int i) {
    int num;
    cout << "Enter element:";
    cin >> num;
    arr[i].set_x(num);

}

void DynamicArray::print() {
    for (int i = 0; i < *size; i++) {
        cout << "Arr[" << i << "] = " << arr[i].get_x() << endl;
    }
}

void DynamicArray::delete_element(int index) {
    Number *tmp = new Number[*this->size - 1];

    for (int i = 0; i < index; i++) {
        tmp[i].set_x(arr[i].get_x());
    }
    for (int i = index; i < *this->size - 1; i++) {
        tmp[i].set_x(arr[i + 1].get_x());
    }
    (*this->size)--;
    delete[] arr;
    arr = tmp;
}

void DynamicArray::add_element() {
    this->operator++();
    this->set_arr_element(*this->size - 1);
}

void DynamicArray::arr_sorting() {
    Number tmp;
    for (int i = *size - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j].get_x() > arr[j + 1].get_x()) {
                tmp.set_x(arr[j].get_x());
                arr[j].set_x(arr[j + 1].get_x());
                arr[j + 1].set_x(tmp.get_x());
            }
        }
    }

}
void DynamicArray::combo_two_arr(DynamicArray &a) {
    Number *tmp = new Number[*this->size + *a.size];
    for (int i = 0; i < *this->size; i++) {
        tmp[i].set_x(arr[i].get_x());
    }
    for (int i = *this->size, j = 0; j < *a.size; i++, j++) {
        tmp[i].set_x(a.arr[j].get_x());
    }
    *this->size += *a.size;
    delete[] arr;

    arr = tmp;
}
int DynamicArray::serching_element(int elem) {
    for (int i = 0; i < *size; i++) {
        if (arr[i].get_x() == elem)
            return i;
    }
    return -1;


}


#endif //CLASS4_DYNAMICARRAY_H
