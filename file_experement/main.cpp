#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
struct Book{
    char dataOfBirth[30];
    char name[30];
    char author[30];
    char genre[30];
    int price;
    float reting;
    int ID;
    bool nalichie;
};
struct Archiv{
    Book *arr = new Book[20];
};

int main() {
    Archiv *one = new Archiv;
    FILE* file = fopen("Books.txt","r");
//    char ch[30];
//
//    for (int i = 0; i < 20; i++) {
//        fgets(ch,30,file);
//        strcpy(one->arr[i].dataOfBirth,ch);
//        fgets(ch,30,file);
//        strcpy(one->arr[i].name,ch);
//        fgets(ch,30,file);
//        strcpy(one->arr[i].author,ch);
//        fgets(ch,30,file);
//        strcpy(one->arr[i].genre,ch);
//        fgets(ch,30,file);
//        one->arr[i].price = atoi(ch);
//        fgets(ch,30,file);
//        one->arr[i].reting = atof(ch);
//        fgets(ch,30,file);
//        one->arr[i].ID = atoi(ch);
//        fgets(ch,30,file);
//        one->arr[i].nalichie = atoi(ch);
//    }
    fclose(file);
    for (int i = 0; i < 20 ; i++) {

        cout << one->arr[i].dataOfBirth;
        cout << one->arr[i].name;
        cout << one->arr[i].author;
        cout << one->arr[i].genre;
        cout << one->arr[i].price << endl;
        cout << one->arr[i].reting << endl;
        cout << one->arr[i].ID << endl;
        cout << one->arr[i].nalichie << endl;
    }

    delete [] one->arr;
    delete one;
    return 0;
}
