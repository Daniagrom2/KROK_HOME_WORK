//
// Created by Kolodii Daniil on 28.06.2021.
//

#ifndef CLASS6_STRING_H
#define CLASS6_STRING_H
#pragma once

#include <iostream>

using namespace std;

class String {
public:
    string operator*(String tmp);

    String(string a) : str(a) {

    };

    string get_str();

private:
    string str;
};

string String::operator*(String tmp) {

    {
        string answ;
        bool flag = false;
        for (int i = 0; i < str.length(); i++) {
            for (int j = 0; j < tmp.get_str().length(); j++) {
                if (str[i] == tmp.get_str()[j]) {
                    answ += tmp.get_str()[i];
                    flag = true;
                }
            }
        }
        if (flag == 1) {
            return answ;
        } else {
            return "-1";
        }
    }
}

string String::get_str() {
    return str;
}

#endif //CLASS6_STRING_H
