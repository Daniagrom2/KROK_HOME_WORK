#pragma once
#include "Date.h"
#include "String.h"
int main() {
//Date one(10,2,15);
//Date two(8,3,12);
//cout<<one-two;
//one += 30;
String one("kolodii");
String two("dolk");
String three = one*two;
cout<< three.get_str();
    return 0;
}
