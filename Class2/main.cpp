#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <iostream>
#include "Complex.h"
#include "Vector3D.h"
#include "ModelWindow .h"
using namespace std;

int main() {
    /////////1/////////
//    Complex a;
//    Read r;
//    Printer p;
//    r.read_complex(a);
//    a.add(a, 2, 2);
//    p.info_to_cmd(a);
//    a.div(a, 2, 2);
//    p.info_to_cmd(a);
//    a.mul(a, 2, 2);
//    p.info_to_cmd(a);
//    a.sub(a, 2, 2);
//    p.info_to_cmd(a);
//    a.equ(a, 2, 2);
//    p.info_to_cmd(a);
//    a.conj(a);
//    p.info_to_cmd(a);
    /////////2/////////
//    Vector3D a;
//    Vector3D b;
//    Printer2 p;
//    Read2::read_vector(a);
//    Read2::read_vector(b);
//    a.add_vectors(b);
//    Printer2::info_to_cmd(a);
//    a.sub_vectors(b);
//    Printer2::info_to_cmd(a);
//    cout << a.equ_vectors(b) << endl;
//    a.scalar_vectors(b);
//    Printer2::info_to_cmd(a);
//    a.mul_on_scalar_vectors(b);
//    Printer2::info_to_cmd(a);
//    cout << a.equ_lenth_vector(b) << endl;
    /////////3/////////
ModelWindow a;
Read3::read_ModelW(a);
Printer3::info_to_cmd(a);
cout<<"\n\n";
a.ask_state();
    a.change_state();
    a.ask_state();
    a.change_color();
    a.change_hor_size(10);
    a.change_ver_size(10);
    a.move_by_horizontal(2);
    a.move_by_vertical(2);
    Printer3::info_to_cmd(a);
    return 0;
}
