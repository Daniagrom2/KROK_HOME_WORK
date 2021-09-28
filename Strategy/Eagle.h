//
// Created by Kolodii Daniil on 27.09.2021.
//

#ifndef OOP_3_EAGLE_H
#define OOP_3_EAGLE_H
#include "Pet.h"
#include "Walking.h"
#include "Flying.h"
class Eagle : public Pet,public Walking,public Flying{
public:
    Eagle();

    Eagle(string , int);

    void walk() override;
    void fly() override;

    void voice() override;
};


#endif //OOP_3_EAGLE_H
