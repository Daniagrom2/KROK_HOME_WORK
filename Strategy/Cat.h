//
// Created by Kolodii Daniil on 27.09.2021.
//

#ifndef OOP_3_CAT_H
#define OOP_3_CAT_H
#include "Pet.h"
#include "Walking.h"

class Cat : public Pet, public Walking {
public:

    Cat();

    Cat(string , int );

    void walk() override;

    void voice() override;
};


#endif //OOP_3_CAT_H
