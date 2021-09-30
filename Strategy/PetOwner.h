//
// Created by Kolodii Daniil on 27.09.2021.
//

#ifndef OOP_3_PETOWNER_H
#define OOP_3_PETOWNER_H

#include "Pet.h"
#include <vector>

class PetOwner {
public:
PetOwner(){}
    PetOwner(string name){
        this->name = name;
    }
    void add_pet(Pet *pet) {
        pets.push_back(pet);
    }

    vector<Pet *> get_vector() {
        return pets;
    }

   vector<Pet*>::iterator &find(vector<Pet*> &ls, string name) {
        for (auto itr = ls.begin();
             itr != ls.end(); itr++) {
            return itr;
        }
    }

    void remove_pet(string name) {
    auto it = pets.begin();
        for (int i = 0; i < pets.size(); i++) {
            if(pets[i]->get_name() == name){
                break;
            }else{
                it++;
            }
        }
        pets.erase(it);
    }

    string get_name() {
        return name;
    }

    void set_name(string name) {
        this->name = name;
    }
    void show_all_pets(){
        for (auto i:pets) {
            cout<<i->get_name()<<"\n";
        }
}

    void comand_voice(Pet* a){
a->voice();
    }
private:
    string name;
    vector<Pet *> pets;
};


#endif //OOP_3_PETOWNER_H
