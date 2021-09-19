//
// Created by Kolodii Daniil on 30.08.2021.
//

#include "Order.h"

string Order::get_path() {
    return _path;
}

int Order::get_order_sum() {
    return *_order_sum;
}

void Order::set_path(string path) {
    _path = path;
}

void Order::set_order_sum(int order_sum) {
    *_order_sum = order_sum;
}

void Order::add_car_to_order(Car car) {
    {

        *_order_sum += car.get_price();
        ofstream fout;
        fout.open(_path, ostream::app);

        if (fout.is_open()) {
            fout <<"Name: "<<car.get_car_name() << "\nYear: " << car.get_year() << "\nSquare: "
                 << car.get_square() << "\nVin code: " << car.get_vin_code() << "\nColor: "
                 << car.get_color() << "\nPrice: " << car.get_price() << "\n\n";
        } else {
            std::cout << "Can't open file: " << _path << std::endl;
        }

        fout.close();

    }
}

void Order::add_extention_to_order(Spag_part part) {
    *_order_sum += part.get_part_price();
    ofstream fout;
    fout.open(_path, ostream::app);

    if (fout.is_open()) {
        fout << "Name of extention: " << part.get_part_name() << "\nPrice: " << part.get_part_price() << "\n\n";
    } else {
        std::cout << "Can't open file: " << _path << std::endl;
    }

    fout.close();

}

void Order::add_to_order_result_sum() {
    ofstream fout;
    fout.open(_path, ostream::app);

    if (fout.is_open()) {
        fout << "Full price: " << *_order_sum << "\n\n";
    } else {
        std::cout << "Can't open file: " << _path << std::endl;
    }

    fout.close();

}

void Order::clear_order_file() {

    ofstream fout;
    fout.open(_path);
    fout.close();

}

void Order::head_of_order(int a) {
    ofstream fout;
    fout.open(_path, ostream::app);

    if (fout.is_open()) {
        fout << "ORDER №" <<  a << "\n\n";
    } else {
        std::cout << "Can't open file: " << _path << std::endl;
    }

    fout.close();
}



