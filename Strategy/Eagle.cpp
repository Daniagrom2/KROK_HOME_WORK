//
// Created by Kolodii Daniil on 27.09.2021.
//

#include "Eagle.h"
Eagle::Eagle() {
    name = "Незнайомець";
    age = 0;

}

Eagle::Eagle(string name, int age) : Pet(name, age) {

}

void Eagle::voice() {
    if (age == 0) {
        cout << "Iu" << endl;
    } else {
        for (int i = 0; i < age; i++) {
            cout << "Iu" << "\t";
        }
    }
    cout << "\n";
}

void Eagle::walk() {
    cout << "Walking...\n";
}
void Eagle::fly() {
    cout << "Flying...\n";
}