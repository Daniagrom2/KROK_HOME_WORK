#pragma once
#define _CRT_SECURE_NO_WARNING
#include <list>
#include <algorithm>
#include <memory>
using namespace std;
#include "Detail.h"
#include "Spag_part.h"
#include "Spag_part.cpp"
#include "Extensions.h"
#include "Extensions.cpp"
#include "Car.h"
#include "Car.cpp"
#include "Autopark.h"
#include "Autopark.cpp"
#include "Pinter.h"
#include "Pinter.cpp"
#include "Order.h"
#include "Order.cpp"
#include "Menu.h"
#include "Menu.cpp"

int main() {
    Menu m;
    Autopark a;
    Extensions e;
    m.testdata(a,e);
    m.menu(a,e);

    return 0;
}
