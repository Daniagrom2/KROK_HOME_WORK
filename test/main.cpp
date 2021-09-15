#pragma once
#include "Something.h"

int main() {
char name[20];
char second[20];
cin.getline(name,20);
cin.getline(second,20);
strcat(second,"hrllo");
    cout<<second;
    cout<<name<<endl;
    return 0;
}
