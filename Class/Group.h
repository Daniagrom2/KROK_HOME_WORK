//
// Created by Kolodii Daniil on 15.06.2021.
//

#ifndef CLASS_GROUP_H
#define CLASS_GROUP_H
#pragma once;

#include <iostream>

using namespace std;

class Student {
public:
    char *get_name();

    char *get_second_name();

    int get_age();

    void set_name(char *name);

    void set_age(int);

    void set_second_name(char *);

    ~Student();

private:
    char *name = new char[20];
    char *second_name = new char[20];
    int age;
};

char *Student::get_name() {
    return name;
}

char *Student::get_second_name() {
    return second_name;
}

int Student::get_age() {
    return age;
}

void Student::set_name(char *name1) {
    strcpy(name, name1);
}

void Student::set_second_name(char *second_name1) {
    strcpy(second_name, second_name1);
}

void Student::set_age(int age1) {
    age = age1;
}

Student::~Student() {
    delete name;
    delete second_name;
}

class Group {
public:
    Group();

    Group(int);
    Group(int,int);

    void setArr(Student *arr);

    ~Group();

    void info_to_cmd();

    void set_student(int);

    void add_student();

private:
    int count;
    Student *arr;
};

Group::Group() {
    count = 1;
    arr = new Student[count];
}

Group::Group(int num) {
    count = num;
    arr = new Student[count];
}

Group::~Group() {
    delete[] arr;

}

void Group::info_to_cmd() {
    for (int i = 0; i < count; i++) {
        cout << arr[i].get_name() << endl;
        cout << arr[i].get_second_name() << endl;
        cout << arr[i].get_age() << endl;
    }
}

void Group::set_student(int i) {
    char name[20];
    cout << "Enter name :";
    cin.getline(name, 20);
    arr[i].set_name(name);
    char second_name[20];
    cout << "Enter second name :";
    cin.getline(second_name, 20);
    arr[i].set_second_name(second_name);
    int age;
    cout << "Enter age :";
    cin >> age;
    arr[i].set_age(age);
    cin.ignore();
}

void Group::add_student() {
    Student *tmp = new Student[count + 1];
    count++;
    for (int i = 0; i < count - 1; i++) {
        tmp[i] = arr[i];
    }
    arr = nullptr;
    arr = tmp;
    set_student(count - 1);

}


#endif //CLASS_GROUP_H
