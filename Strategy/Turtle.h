//
// Created by Kolodii Daniil on 27.09.2021.
//

#ifndef OOP_3_TURTLE_H
#define OOP_3_TURTLE_H


class Turtle:public Pet,public Walking,public Swimming {
public:
    Turtle();

    Turtle(string , int);

    void walk() override;
    void swim() override;

    void voice() override;
};


#endif //OOP_3_TURTLE_H
