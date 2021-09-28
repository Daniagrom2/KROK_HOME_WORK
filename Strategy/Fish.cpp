//
// Created by Kolodii Daniil on 27.09.2021.
//

#include "Fish.h"
Fish::Fish() {
    name = "Незнайомець";
    age = 0;

}

Fish::Fish(string name, int age) : Pet(name, age) {

}

void Fish::voice() {
    if (age == 0) {
        cout << "Bool" << endl;
    } else {
        for (int i = 0; i < age; i++) {
            cout << "Bool" << "\t";
        }
    }
    cout << "\n";
}

void Fish::swim() {
    cout << "Swimming...\n";
}
