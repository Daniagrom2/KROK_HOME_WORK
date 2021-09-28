//
// Created by Kolodii Daniil on 20.09.2021.
//Task 2,3,4
//

#ifndef OOP2_DOG_H
#define OOP2_DOG_H
#pragma once;

#include "Pet.h"
#include "Walking.h"


using namespace std;

class Dog : public Pet, public Walking {
public:

    Dog();

    Dog(string a, int b);

    void walk() override;

    void voice() override;


};


#endif //OOP2_DOG_H
