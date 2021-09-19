//
//  main.cpp
//  Namespace
//
//  Created by Kolodii Daniil on 31.08.2021.
//

#include <iostream>
using namespace std;
namespace p2D{
class Point {
public:
    Point(int, int);
    Point sum(const Point&);
    int get_x();
    int get_y();
    Point operator+(const Point&);
    Point operator+(int);
    Point& operator++();
    Point& operator++(int);
    int dist() const;
    bool operator>(const Point&);
    bool operator<(const Point&);
    bool operator==(const Point&);
    bool operator!=(const Point&);
private:
    int _x;
    int _y;
};
Point::Point(int x, int y) : _x(x), _y(y) {}

Point Point::sum(const Point& point) {
    
    return { _x + point._x, _y + point._y };
}

int Point::get_x() { return _x; }

int Point::get_y() { return _y; }

Point Point::operator+(const Point& point) {
    return { _x + point._x, _y + point._y };
}

Point Point::operator+(int value) {
    return { _x + value, _y + value };
}

Point& Point::operator++() {
    _x++;
    _y++;
    return *this;
}

Point& Point::operator++(int n) {
    Point tmp(_x, _y);
    _x++;
    _y++;
    return tmp;
}

int Point::dist() const {
    return sqrt(pow(_x, 2) + pow(_y, 2));
}

bool Point::operator>(const Point& point)
{
    return dist() > point.dist();
}

bool Point::operator<(const Point& point) {
    //return !(*this > point);
    return dist() < point.dist();
}

bool Point::operator==(const Point& point) {
    return _x == point._x && _y == point._y;
}

bool Point::operator!=(const Point& point) {
    return !(*this == point);
}
}
namespace p3D{
class Point {
public:
    Point(int, int,int);
    Point sum(const Point&);
    int get_x();
    int get_y();
    int get_z();
    Point operator+(const Point&);
    Point operator+(int);
    Point& operator++();
    Point& operator++(int);
    int dist() const;
    bool operator>(const Point&);
    bool operator<(const Point&);
    bool operator==(const Point&);
    bool operator!=(const Point&);
private:
    int _x;
    int _y;
    int _z;
};
Point::Point(int x, int y,int z) : _x(x), _y(y), _z(z) {}

Point Point::sum(const Point& point) {
    
    return { _x + point._x, _y + point._y ,_z + point._z};
}

int Point::get_x() { return _x; }

int Point::get_y() { return _y; }
int Point::get_z() { return _z; }

Point Point::operator+(const Point& point) {
    return { _x + point._x, _y + point._y ,_z+point._z};
}

Point Point::operator+(int value) {
    return { _x + value, _y + value,_z + value };
}

Point& Point::operator++() {
    _x++;
    _y++;
    _z++;
    return *this;
}

Point& Point::operator++(int n) {
    Point tmp(_x, _y,_z);
    _x++;
    _y++;
    _z++;
    return tmp;
}

int Point::dist() const {
    return sqrt(pow(_x, 2) + pow(_y, 2)+ pow(_z, 2));
}

bool Point::operator>(const Point& point)
{
    return dist() > point.dist();
}

bool Point::operator<(const Point& point) {
    //return !(*this > point);
    return dist() < point.dist();
}

bool Point::operator==(const Point& point) {
    return _x == point._x && _y == point._y && _z== point._z;
}

bool Point::operator!=(const Point& point) {
    return !(*this == point);
}
}

int main(int argc, const char * argv[]) {
    p2D::Point a(1, 2);
    p2D::Point b(4, 5);
    p2D::Point c = a.sum(b);
    cout << "X: " << c.get_x() << " Y: " << c.get_y() << endl;

    p2D::Point d = a + b;
    cout << "X: " << d.get_x() << " Y: " << d.get_y() << endl;

    p2D::Point w = a + 10;
    cout << "X: " << w.get_x() << " Y: " << w.get_y() << endl;

    p2D::Point x = ++a;
    cout << "X: " << x.get_x() << " Y: " << x.get_y() << endl;
    cout << "X: " << a.get_x() << " Y: " << a.get_y() << endl;

    p2D::Point y = a++;
    cout << "X: " << y.get_x() << " Y: " << y.get_y() << endl;
    cout << "X: " << a.get_x() << " Y: " << a.get_y() << endl;

    cout << (a > b) << endl;
    cout << (x == y) << endl;
    cout<<"\n\n\n\n\n";
    p3D::Point a2(1, 2,3);
    p3D::Point b2(4, 5,6);
    p3D::Point c2 = a2.sum(b2);
    cout << "X: " << c2.get_x() << " Y: " << c2.get_y()<< " Z: " << c2.get_z()  << endl;

    p3D::Point d2 = a2 + b2;
    cout << "X: " << d2.get_x() << " Y: " << d2.get_y()<< " Z: " << d2.get_z() << endl;

    p3D::Point w2 = a2 + 10;
    cout << "X: " << w2.get_x() << " Y: " << w2.get_y() << " Z: " << w2.get_z()<< endl;

    p3D::Point x2 = ++a2;
    cout << "X: " << x2.get_x() << " Y: " << x2.get_y() << " Z: " << x2.get_z()<< endl;
    cout << "X: " << a2.get_x() << " Y: " << a2.get_y() << " Z: " << a2.get_z()<< endl;

    p3D::Point y2 = a2++;
    cout << "X: " << y2.get_x() << " Y: " << y2.get_y() << " Z: " << y2.get_z()<< endl;
    cout << "X: " << a2.get_x() << " Y: " << a2.get_y() << " Z: " << a2.get_z()<< endl;

    cout << (a2 > b2) << endl;
    cout << (x2 == y2) << endl;

    return 0;
}




