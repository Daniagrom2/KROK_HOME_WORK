#pragma once
#include "Header.h"

int main() {
    Autosalon *one = new Autosalon;
    ///////////////////////////////////
    strcpy(one->arr[0].marka, "Renault");
    strcpy(one->arr[0].color, "Red");
    one->arr[0].year_of_birth = 2015;
    one->arr[0].ID = 1000;
    one->arr[0].price = 11000;
    one->arr[0].nalichie = 1;
    one->arr[0].postavka = 0;
    one->arr[0].age = curent_year - one->arr[0].year_of_birth ;
///////////////////////////////////
    strcpy(one->arr[1].marka, "Nissan");
    strcpy(one->arr[1].color, "White");
    one->arr[1].year_of_birth = 2012;
    one->arr[1].ID = 1001;
    one->arr[1].price = 8000;
    one->arr[1].nalichie = 1;
    one->arr[1].postavka = 0;
    one->arr[1].age = curent_year - one->arr[1].year_of_birth ;
///////////////////////////////////
    strcpy(one->arr[2].marka, "Audi");
    strcpy(one->arr[2].color, "DarkBlue");
    one->arr[2].year_of_birth = 2016;
    one->arr[2].ID = 1002;
    one->arr[2].price = 17000;
    one->arr[2].nalichie = 0;
    one->arr[2].postavka = 12;
    one->arr[2].age = curent_year - one->arr[2].year_of_birth ;
///////////////////////////////////
    strcpy(one->arr[3].marka, "BMW");
    strcpy(one->arr[3].color, "Yellow");
    one->arr[3].year_of_birth = 2017;
    one->arr[3].ID = 1003;
    one->arr[3].price = 20000;
    one->arr[3].nalichie = 1;
    one->arr[3].postavka = 0;
    one->arr[3].age = curent_year - one->arr[3].year_of_birth ;
///////////////////////////////////
char name[] = "Renault";
searching_marka(*one,name);
//show_by_age(*one,4);
//    sorting_by_price_down(*one);
//    sorting_by_price_up(*one);
//    show_by_nalichie(*one);
//    sorting_by_alphabet(*one,4);
//    for (int i = 0; i < 4; i++) {
//        cout<<one->arr[i].marka<<"\t"<<one->arr[i].color<<endl;
//
//    }
    delete [] one->arr;
    delete one;
    return 0;
}
