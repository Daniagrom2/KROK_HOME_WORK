//
// Created by Kolodii Daniil on 27.09.2021.
//

#include "Turtle.h"
Turtle::Turtle() {
    name = "Незнайомець";
    age = 0;

}

Turtle::Turtle(string name, int age) : Pet(name, age) {

}

void Turtle::voice() {
    if (age == 0) {
        cout << "..." << endl;
    } else {
        for (int i = 0; i < age; i++) {
            cout << "..." << "\t";
        }
    }
    cout << "\n";
}

void Turtle::walk() {
    cout << "Walking...\n";
}
void Turtle::swim() {
    cout << "Swimming...\n";
}
