//
// Created by Kolodii Daniil on 27.09.2021.
//

#ifndef OOP_3_DEMONSTRATION_H
#define OOP_3_DEMONSTRATION_H
#include "Pet.h"
#include "Pet.cpp"
#include "Dog.h"
#include "Dog.cpp"
#include "Fish.h"
#include "Fish.cpp"
#include "Duck.h"
#include "Duck.cpp"
#include "Eagle.h"
#include "Eagle.cpp"
#include "Turtle.h"
#include "Turtle.cpp"
#include "PetOwner.h"
#include "PetOwner.cpp"

class Demonstration {
public:
    static void show_PetOwner(){
        Pet *dog = new Dog("Boby",3);
        PetOwner a("Steve");
        a.add_pet(dog);
        a.comand_voice(a.get_vector()[0]);
    }

};


#endif //OOP_3_DEMONSTRATION_H
