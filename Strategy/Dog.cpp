//
// Created by Kolodii Daniil on 20.09.2021.
//

#include "Dog.h"



Dog::Dog() {
    name = "Незнайомець";
    age = 0;

}

Dog::Dog(string name, int age) : Pet(name, age) {

}

void Dog::voice() {
    if (age == 0) {
        cout << "Gav" << endl;
    } else {
        for (int i = 0; i < age; i++) {
            cout << "Gav" << "\t";
        }
    }
    cout << "\n";
}

void Dog::walk() {
    cout << "Walking...\n";
}

