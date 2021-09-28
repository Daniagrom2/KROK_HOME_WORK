//
// Created by Kolodii Daniil on 27.09.2021.
//

#ifndef OOP_3_FISH_H
#define OOP_3_FISH_H
#include "Pet.h"
#include "Swimming.h"

class Fish: public Pet,public Swimming{
public:
    Fish();

    Fish(string, int );

    void swim() override;

    void voice() override;
};


#endif //OOP_3_FISH_H
