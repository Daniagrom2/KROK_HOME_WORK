//
// Created by Kolodii Daniil on 14.05.2021.
//
#pragma once
#ifndef DZ_AUTOSALON_HEADER_H
#define DZ_AUTOSALON_HEADER_H
#include <iostream>
#include <cstring>
using namespace std;

struct Automobile{
    char marka[20];
    char color[20];
    int year_of_birth;
    int ID;
    int price;
    bool nalichie;
    int postavka;
    int age ;
};
int curent_year = 2021;
int size = 4;
struct Autosalon{
    Automobile *arr = new Automobile[size];
};
void searching_marka(Autosalon &m, char in_marka[20]);
void sorting_by_price_up(Autosalon &m);
void sorting_by_price_down(Autosalon &m);
void show_by_age(Autosalon m,int count);
void show_by_nalichie(Autosalon &m);
void vivod(Automobile &m);
void sorting_by_alphabet(Autosalon &m,int num);

//void searching_marka(Autosalon &m, char in_marka[20]) {
//    int index = 0;
//    int counter = 0;
//    for (int i = 0; i < size; i++) {
//        if (strcmp(m.arr[i].marka , in_marka) == 0) {
//            index = i;
//            counter++;
//        }
//    }
//    if (counter == 1)
//        vivod(m.arr[index]);
//    else if (counter == 0)
//        cout << "We have not this mark of car, sorry(";
//    else
//        for (int j = 0; j < size; j++) {
//            if (strcmp(m.arr[j].marka , in_marka) == 0)
//                vivod(m.arr[j]);
//        }
//
//}
void searching_marka(Autosalon &m, char in_marka[20]) {
        int mid = (size-1)/2;
       int counter = 0;
            for (int i = 0, j = mid; i < mid; i++,j++) {
                if(strcmp(m.arr[i].marka , in_marka) == 0){
                    vivod(m.arr[i]);
                    counter++;
                }
                if(strcmp(m.arr[j].marka , in_marka) == 0){
                    vivod(m.arr[j]);
                    counter++;
                }

        }
            if (counter == 0)
                cout << "We have not this mark of car, sorry(";
    }

void sorting_by_alphabet(Autosalon &m,int num){
    Automobile tmp;
    for(int i=0;i<num-1;i++)
        for(int j=i+1;j<num;j++)
            if(strcmp(m.arr[i].marka,m.arr[j].marka)>0)
           {
                tmp = m.arr[i];
                m.arr[i] = m.arr[j];
                m.arr[j] = tmp;
            }
}
void sorting_by_price_up(Autosalon &m) {
    Automobile tmp;
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (m.arr[j].price > m.arr[j + 1].price)
            {
                tmp = m.arr[j];
                m.arr[j] = m.arr[j + 1];
                m.arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        vivod(m.arr[i]);
    }
}


void sorting_by_price_down(Autosalon &m) {
    Automobile tmp;
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (m.arr[j].price < m.arr[j + 1].price)
            {
                tmp = m.arr[j];
                m.arr[j] = m.arr[j + 1];
                m.arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        vivod(m.arr[i]);
    }
}

void show_by_age(Autosalon m, int count) {
    Automobile tmp;
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (m.arr[j].age > m.arr[j + 1].age)
            {
                tmp = m.arr[j];
                m.arr[j] = m.arr[j + 1];
                m.arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        vivod(m.arr[i]);
    }
}

void show_by_nalichie(Autosalon &m) {
    for (int i = 0; i < size; i++) {
        if(m.arr[i].nalichie == 1)
            vivod(m.arr[i]);
    }
}
void vivod(Automobile &m) {
    cout << "/////////////////////\n";
    cout << "Marka: " << m.marka << "\n";
    cout << "Color: " << m.color << "\n";
    cout << "Year of birth: " << m.year_of_birth << "\n";
    cout << "ID: " << m.ID << "\n";
    cout << "Price: " << m.price << "\n";
    cout << "Nalichie: " << (m.nalichie ? "True" : "False") << "\n";
    cout << "Postavka: " << m.postavka << "\n";
    cout << "Age: " << m.age << "\n";
    cout << "/////////////////////\n";
}
#endif //DZ_AUTOSALON_HEADER_H
