#pragma once
#include "DynamicArray.h"
int main() {
    int size;
    cout << "Enter arr size:";
    cin >> size;
    DynamicArray x(size);
    DynamicArray z(size);
    for (int i = 0; i < size; i++) {
        x.set_arr_element(i);
    }
    for (int i = 0; i < size; i++) {
        z.set_arr_element(i);
    }
    x.add_element();
    x.arr_sorting();
    x.combo_two_arr(z);
    x.print();
    cout<<x.serching_element(2);

//    ++x;
//    --x;
//x+1;
//    x-1;
//x.get_arr()[1] = 1;
//    x.print();
//    z = x;
//    z.print();


    return 0;
}
