//
// Created by Kolodii Daniil on 27.09.2021.
//

#include "Cat.h"
Cat::Cat() {
    name = "Незнайомець";
    age = 0;

}

Cat::Cat(string name, int age) : Pet(name, age) {

}

void Cat::voice() {
    if (age == 0) {
        cout << "Myau" << endl;
    } else {
        for (int i = 0; i < age; i++) {
            cout << "Myau" << "\t";
        }
    }
    cout << "\n";
}

void Cat::walk() {
    cout << "Walking...\n";
}
