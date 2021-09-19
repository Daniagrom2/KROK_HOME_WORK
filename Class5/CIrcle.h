//
// Created by Kolodii Daniil on 24.06.2021.
//

#ifndef CLASS5_CIRCLE_H
#define CLASS5_CIRCLE_H
#pragma once
#define PI 3.14
#include <iostream>
using namespace std;
class Point{
public:
        Point();
    Point(int,int);
        int get_x() const;
    int get_y() const;
    void set_x(int);
    void set_y(int);
private:
    int _x;
    int _y;
};

Point::Point() {
cout<<"Enter x:";
cin>>_x;
    cout<<"Enter y:";
    cin>>_y;
}

Point::Point(int x, int y):_x(x),_y(y) {

}


int Point::get_x() const {
    return _x;
}

int Point::get_y() const {
    return _y;
}

void Point::set_x(int x) {
_x = x;
}

void Point::set_y(int y) {
_y = y;
}
class Circle{
public:
    Circle();
   Circle(double);
   double circle_area();
    int distance_between_two_centers(const Point &a) const;
    bool circle_tauch(const Circle &b) const;
    bool circle_inside_circle(const Circle &b) const;
private:
    double radius;
    Point circle_centr;
};

Circle::Circle() {
    cout<<"Enter circle radiuus:";
    cin>>radius;
}

Circle::Circle(double radius) {
this->radius = radius;
}

double Circle::circle_area() {
    return pow(radius,2)*PI;
}

int Circle::distance_between_two_centers(const Point &a) const {
    return sqrt((a.get_x() - circle_centr.get_x()) * (a.get_x() - circle_centr.get_x()) + (a.get_y()- circle_centr.get_y()) * (a.get_y()- circle_centr.get_x()));
}

bool Circle::circle_tauch(const Circle &b) const {
    if (radius+b.radius<distance_between_two_centers(b.circle_centr))
    return false;
    else if (radius+b.radius>distance_between_two_centers(b.circle_centr)|| radius+b.radius==distance_between_two_centers(b.circle_centr))
        return true;
}

bool Circle::circle_inside_circle(const Circle &b) const {
    if(circle_tauch(b) == 0)
    return false;
    else if(radius>distance_between_two_centers(b.circle_centr) && radius>b.radius)
        return true;
}


#endif //CLASS5_CIRCLE_H
