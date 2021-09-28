//
// Created by Kolodii Daniil on 27.09.2021.
//

#ifndef OOP_3_DUCK_H
#define OOP_3_DUCK_H
#include "Pet.h"
#include "Walking.h"
#include "Swimming.h"
#include "Flying.h"
class Duck: public Pet,public Walking,public Swimming,public Flying{
public:
    Duck();

    Duck(string , int);

    void walk() override;
    void swim() override;
    void fly() override;

    void voice() override;
};


#endif //OOP_3_DUCK_H
