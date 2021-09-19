//
// Created by Kolodii Daniil on 17.06.2021.
//

#ifndef CLASS2_MODELWINDOW_H
#define CLASS2_MODELWINDOW_H
#pragma once

#include <iostream>

using namespace std;

class ModelWindow {
    char *_mainName;
    int *_x;
    int *_y;
    int *_verical_size;
    int *_horizontal_size;
    char *_color;
    bool *_state_vizibl;
    bool *_state_frame;
public:
    ModelWindow();

    ~ModelWindow();

    char *get_mainName();

    char *get_color();

    int get_x();

    int get_y();

    int get_vertical_size();

    int get_horizontal_size();

    bool get_state_vizibl();

    bool get_state_frame();

    void set_mainName(char *);

    void set_color(char *);

    void set_x(int);

    void set_y(int);

    void set_vertical_size(int);

    void set_horizontal_size(int);

    void set_state_vizibl(bool);

    void set_state_frame(bool);


    void move_by_horizontal(int);

    void move_by_vertical(int);

    void change_ver_size(int);

    void change_hor_size(int);

    void change_color();

    void change_state();

    void ask_state();

};

ModelWindow::ModelWindow() {
    _mainName = new char[20]{
            "MainW"
    };
    _x = new int(0);
    _y = new int(0);
    _verical_size = new int(0);
    _horizontal_size = new int(0);
    _color = new char[20]{
            "White"
    };
    _state_vizibl = new bool(1);
    _state_frame = new bool(1);


}

ModelWindow::~ModelWindow() {
    delete[] _mainName;
    delete[] _color;
    delete _x;
    delete _y;
    delete _state_frame;
    delete _state_vizibl;
    delete _horizontal_size;
    delete _verical_size;
}

char *ModelWindow::get_color() {
    return _color;
}

char *ModelWindow::get_mainName() {
    return _mainName;
}

int ModelWindow::get_x() {
    return *_x;
}

int ModelWindow::get_y() {
    return *_y;
}

int ModelWindow::get_vertical_size() {
    return *_verical_size;
}

int ModelWindow::get_horizontal_size() {
    return *_horizontal_size;
}

bool ModelWindow::get_state_vizibl() {
    return _state_vizibl;
}

bool ModelWindow::get_state_frame() {
    return _state_frame;
}

void ModelWindow::set_mainName(char *name) {
    strcpy(_mainName, name);
}

void ModelWindow::set_color(char *color) {
    strcpy(_color, color);
}

void ModelWindow::set_x(int x) {
    *_x = x;
}

void ModelWindow::set_y(int y) {
    *_y = y;
}

void ModelWindow::set_vertical_size(int ver_s) {
    *_verical_size = ver_s;
}

void ModelWindow::set_horizontal_size(int hor_s) {
    *_horizontal_size = hor_s;
}

void ModelWindow::set_state_vizibl(bool state_v) {
    *_state_vizibl = state_v;
}

void ModelWindow::set_state_frame(bool state_f) {
    *_state_frame = state_f;
}



void ModelWindow::change_ver_size(int size) {
    *_verical_size += size;
}

void ModelWindow::change_hor_size(int size) {
    *_horizontal_size += size;
}

void ModelWindow::change_color() {
    char color[20];
    cout << "Введите цвет:";
    cin.ignore();
    cin.getline(color,20);
    set_color(color);
}

void ModelWindow::change_state() {
    bool answ;
    bool answ2;
    cout << "Введите статус видимости: ";
    cin >> answ;
    set_state_vizibl(answ);
    cout << "Введите статус рамки: ";
    cin >> answ2;
    set_state_frame(answ2);
}

void ModelWindow::ask_state() {
    cout << "Статус видимости: " << get_state_vizibl() << endl;
    cout << "Статус рамки: " << get_state_frame() << endl;
}

class Read3 {
public:
   static void read_ModelW(ModelWindow &a);
};

void Read3::read_ModelW(ModelWindow &a) {
    char mainName[20];
    cout << "Enter mainWindow: ";
    cin.getline(mainName,20);
    a.set_mainName(mainName);
    char color[20];
    cout << "Enter color: ";
    cin.getline(color,20);
    a.set_color(color);
    int x;
    int y;
    cout << "Enter X: ";
    cin >> x;
    a.set_x(x);
    cout << "Enter Y: ";
    cin >> y;
    a.set_y(y);
    int ver_s;
    int hor_s;
    cout << "Enter vertical size: ";
    cin >> ver_s;
    a.set_vertical_size(ver_s);
    cout << "Enter horizontal size: ";
    cin >> hor_s;
    a.set_horizontal_size(hor_s);
    bool state_f;
    bool state_v;
    cout << "Enter vizibl status(1/0): ";
    cin >> state_v;
    a.set_state_vizibl(state_v);
    cout << "Enter frame status(1/0): ";
    cin >> state_f;
    a.set_state_frame(state_f);
}

class Printer3 {
public:
   static void info_to_cmd(ModelWindow &);
};

void Printer3::info_to_cmd(ModelWindow &a) {
    cout << "Wimdow name: " << a.get_mainName() << endl;
    cout << "Color: " << a.get_color() << endl;
    cout << "X: " << a.get_x() << endl;
    cout << "Y: " << a.get_y() << endl;
    cout << "Horizontal size: " << a.get_horizontal_size() << "px" << endl;
    cout << "Vertical size: " << a.get_vertical_size() << "px" << endl;
    cout << "Frame status: " << a.get_state_frame() << endl;
    cout << "Vizibl status: " << a.get_state_vizibl() << endl;
}

#endif //CLASS2_MODELWINDOW_H
