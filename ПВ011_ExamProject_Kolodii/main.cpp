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
    a.add_car_auto("Porshe Cayen", "Gold", 2020, 1111, 32000, 3.0, 3);

//    auto b = a.search_by_vin_code(1111);
//    b->set_extention("Standart salon", 0, 0);
//    a.search_by_vin_code(1111)->set_extention("Alkantara salon", 1000, 0);
//    a.search_by_vin_code(1111)->set_extention("Standart tire", 0, 1);
//    a.search_by_vin_code(1111)->set_extention("Low profile tire", 1000, 1);
//    a.search_by_vin_code(1111)->set_extention("Standart bumper", 0, 2);
//    a.search_by_vin_code(1111)->set_extention("Carbon bumper", 1000, 2);
//    a.add_car_auto("Porshe Taycan Turbo S", "White", 2020, 1112, 100000, 0.0, 2);
//    a.search_by_vin_code(1112)->set_extention("Standart salon", 0, 0);
//    a.search_by_vin_code(1112)->set_extention("Alkantara salon", 1000, 0);
//    a.search_by_vin_code(1112)->set_extention("Standart disks", 0, 1);
//    a.search_by_vin_code(1112)->set_extention("Lux disks", 3000, 1);
//    a.add_car_auto("Porshe 911", "Black", 2020, 1113, 100000, 5.1, 3);
//    a.search_by_vin_code(1113)->set_extention("Standart salon", 0, 0);
//    a.search_by_vin_code(1113)->set_extention("Alkantara salon", 1000, 0);
//    a.search_by_vin_code(1113)->set_extention("Standart disks", 0, 1);
//    a.search_by_vin_code(1113)->set_extention("Lux disks", 3000, 1);
//    a.search_by_vin_code(1113)->set_extention("Standart without poiler", 0, 2);
//    a.search_by_vin_code(1113)->set_extention("Lux spoiler", 3000, 2);
    m.menu(a);
//Extensions one;
//    one.add_tuning_auto("BMW",200);

//Autopark a;
//a.add_car_auto("Pushka","Blue",2015,123123,10000,2.5,0);
//    a.add_car_auto("Pushka","Blue",2016,6666,10000,2.5,0);
//Order order("order.txt");
//Car fd(0);
//fd.set_car_name("BMW");
//fd.set_color("green");
//fd.set_price(5000);
//order.clear_order_file();
//order.add_car_to_order(fd);
//order.add_extention_to_order(one.get_tuning().front());
//order.add_to_order_result_sum();
//Pinter::print_Car_to_cmd(a.get_autopark().front());

    return 0;
}
