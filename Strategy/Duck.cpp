//
// Created by Kolodii Daniil on 27.09.2021.
//

#include "Duck.h"
Duck::Duck() {
    name = "Незнайомець";
    age = 0;

}

Duck::Duck(string name, int age) : Pet(name, age) {

}

void Duck::voice() {
    if (age == 0) {
        cout << "GA" << endl;
    } else {
        for (int i = 0; i < age; i++) {
            cout << "GA" << "\t";
        }
    }
    cout << "\n";
}

void Duck::walk() {
    cout << "Walking...\n";
}
void Duck::swim() {
    cout << "Swimming...\n";
}
void Duck::fly() {
    cout << "Flying...\n";
}