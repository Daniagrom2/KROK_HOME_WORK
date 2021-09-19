//
// Created by Kolodii Daniil on 28.06.2021.
//

#ifndef CLASS6_DATE_H
#define CLASS6_DATE_H
#pragma once
#include <iostream>
using namespace std;
class Date{
private:
    int _year;
    int _month;
    int _day;
public:
    Date(int,int,int);
    int operator -(Date &a);
    Date& operator+=(int days) {
       _day+=days;
       if(_day > 30){
           _month+=_day / 30;
       _day%=30;
       }
       if(_month>12){
       _year+=_month /12;
       _month%=12;
       }
        return *this;
    }
};

int Date::operator-(Date &a) {
    int answer = (_year * 365 + _month * 30 +_day) - (a._year * 365 + a._month * 30 + a._day);
    if (answer<0)
        return answer * -1;
    return answer;
}

Date::Date(int a, int b, int c):_year(a),_month(b),_day(c) {

}

#endif //CLASS6_DATE_H
