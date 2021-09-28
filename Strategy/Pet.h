//
// Created by Kolodii Daniil on 27.09.2021.
//

#ifndef OOP_3_PET_H
#define OOP_3_PET_H



class Pet {
public:

    Pet(){}

    Pet(string name, int age){
        this->name = name;
        this->age = age;
    }

    virtual void set_name(string);

    virtual void set_age(int);

    virtual string get_name();

  virtual int get_age();
  virtual void voice() = 0;


    virtual ~Pet(){}

protected:
    string name;
    int age;
};


#endif //OOP_3_PET_H
