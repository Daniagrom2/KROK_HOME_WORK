#include <iostream>

using namespace std;

class Shape {
public:
    virtual void Show() = 0;

    virtual void Save() = 0;

    virtual void Load() = 0;

    virtual ~Shape() {
    }
};

class Circle : public Shape {
public:
    Circle() : _x(0), _y(0), _radius(0) {}

    Circle(int x, int y, int radius) {
        _x = x;
        _y = y;
        _radius = radius;
    }

    ~Circle() override {
    }

    void Show() override {
        cout << "Circle:" << endl;
        cout << "X:" << _x << endl;
        cout << "Y:" << _y << endl;
        cout << "Radius:" << _radius << endl;
    }

    void Save() override {
        FILE *f = fopen("circle.txt", "w");
        fwrite(&_x, sizeof(_x), 1, f);
        fwrite(&_y, sizeof(_y), 1, f);
        fwrite(&_radius, sizeof(_radius), 1, f);
        fclose(f);
    }

    void Load() override {
        FILE *f = fopen("circle.txt", "r");
        fread(&_x, sizeof(_x), 1, f);
        fread(&_y, sizeof(_y), 1, f);
        fread(&_radius, sizeof(_radius), 1, f);
        fclose(f);
    }

private:
    int _x;
    int _y;
    int _radius;
};

class Square : public Shape {
public:
    Square() : _x(0), _y(0), _side(0) {}

    Square(int x, int y, int side) {
        _x = x;
        _y = y;
        _side = side;
    }

    ~Square() override {
    }

    void Show() override {
        cout << "Square:" << endl;
        cout << "X:" << _x << endl;
        cout << "Y:" << _y << endl;
        cout << "Side:" << _side << endl;
    }

    void Save() override {
        FILE *f = fopen("square.txt", "w");
        fwrite(&_x, sizeof(_x), 1, f);
        fwrite(&_y, sizeof(_y), 1, f);
        fwrite(&_side, sizeof(_side), 1, f);
        fclose(f);
    }

    void Load() override {
        FILE *f = fopen("square.txt", "r");
        fread(&_x, sizeof(_x), 1, f);
        fread(&_y, sizeof(_y), 1, f);
        fread(&_side, sizeof(_side), 1, f);
        fclose(f);
    }

private:
    int _x;
    int _y;
    int _side;
};

class Rectangle : public Shape {
public:
    Rectangle() : _x(0), _y(0), _side_one(0), _side_two(0) {}

    Rectangle(int x, int y, int side_one, int side_two) {
        _x = x;
        _y = y;
        _side_one = side_one;
        _side_two = side_two;
    }

    ~Rectangle() override {
    }

    void Show() override {
        cout << "Rectangle:" << endl;
        cout << "X:" << _x << endl;
        cout << "Y:" << _y << endl;
        cout << "Side one:" << _side_one << endl;
        cout << "Side two:" << _side_two << endl;
    }

    void Save() override {
        FILE *f = fopen("rectangle.txt", "w");
        fwrite(&_x, sizeof(_x), 1, f);
        fwrite(&_y, sizeof(_y), 1, f);
        fwrite(&_side_one, sizeof(_side_one), 1, f);
        fwrite(&_side_two, sizeof(_side_two), 1, f);
        fclose(f);
    }

    void Load() override {
        FILE *f = fopen("rectangle.txt", "r");
        fread(&_x, sizeof(_x), 1, f);
        fread(&_y, sizeof(_y), 1, f);
        fread(&_side_one, sizeof(_side_one), 1, f);
        fread(&_side_two, sizeof(_side_two), 1, f);
        fclose(f);
    }

private:
    int _x;
    int _y;
    int _side_one;
    int _side_two;
};

class Elips : public Shape {
public:
    Elips() : _x(0), _y(0), _side_one(0), _side_two(0) {}

    Elips(int x, int y, int side_one, int side_two) {
        _x = x;
        _y = y;
        _side_one = side_one;
        _side_two = side_two;
    }

    ~Elips() override {
    }

    void Show() override {
        cout << "Elips:" << endl;
        cout << "X:" << _x << endl;
        cout << "Y:" << _y << endl;
        cout << "Side one:" << _side_one << endl;
        cout << "Side two:" << _side_two << endl;
    }

    void Save() override {
        FILE *f = fopen("elips.txt", "w");
        fwrite(&_x, sizeof(_x), 1, f);
        fwrite(&_y, sizeof(_y), 1, f);
        fwrite(&_side_one, sizeof(_side_one), 1, f);
        fwrite(&_side_two, sizeof(_side_two), 1, f);
        fclose(f);
    }

    void Load() override {
        FILE *f = fopen("elips.txt", "r");
        fread(&_x, sizeof(_x), 1, f);
        fread(&_y, sizeof(_y), 1, f);
        fread(&_side_one, sizeof(_side_one), 1, f);
        fread(&_side_two, sizeof(_side_two), 1, f);
        fclose(f);
    }

private:
    int _x;
    int _y;
    int _side_one;
    int _side_two;
};

int main() {
Shape **shapes = new Shape*[4]{
    new Circle(1,2,5),
    new Square(1,4,3),
    new Rectangle(1,1,5,8),
    new Elips(0,0,3,8)
};
    for (int i = 0; i < 4; i++) {
        shapes[i]->Save();
    }
    for (int i = 0; i < 4; i++) {
        shapes[i]->Show();
    }
    cout<<"\n\n\n";
    Shape **shapes2 = new Shape*[4]{
            new Circle(),
            new Square(),
             new Rectangle(),
            new Elips()
    };
    for (int i = 0; i < 4; i++) {
        shapes2[i]->Show();
    }
    for (int i = 0; i < 4; i++) {
        shapes2[i]->Load();
    }
    for (int i = 0; i < 4; i++) {
        shapes2[i]->Show();
    }
    for (int i = 0; i < 4; i++) {
        delete shapes[i];
    }
    delete [] shapes;
    for (int i = 0; i < 4; i++) {
        delete shapes2[i];
    }
    delete [] shapes2;
    return 0;
}
