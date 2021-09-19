#include <iostream>
#include <fstream>


using namespace std;

class Base {
protected:
    ifstream file;
public:


    Base(string path) {
        file.open(path);
    }

    virtual void read_show() {
        string text;
        while (getline(file, text)) {
            cout << text << endl;;
        }
        file.seekg(0);
    }

    ~Base() {
        file.close();
    }

};

class Base2_ASCII : public Base {
public:
    Base2_ASCII(string path) :
            Base(path) {};

    void read_show() override {
        int x;
        string line;
        while (getline(file, line)) {
            for (int i = 0; i < line.length(); i++) {
                x = line.at(i);
                cout << x << " ";
            }
            cout << endl;
        }
        file.seekg(0);
    }
};

class Binary : public Base {
private:
    int *int_in_binary(int value) {
        int *binary = new int[9];
        int index = 0;
        while (value > 0) {
            binary[index] = value % 2;
            value = value / 2;
            index++;
        }
        return binary;
    }

public:
    Binary(string path) :
            Base{path} {};

    void read_show() override {
        bool flag = false;
        int x;

        string line;
        while (getline(file, line)) {
            for (int i = 0; i < line.length(); i++) {
                int *binary;
                x = line.at(i);
                binary = int_in_binary(x);
                for (int j = 9 - 1; j >= 0; j--) {
                    if (binary[j] == 1 || flag == true) {
                        cout << binary[j];
                        flag = true;
                    }

                }
                flag = false;
                cout << " ";
                delete[]binary;
            }
            cout << endl;
        }
        file.seekg(0);
    }
};


int main() {
    Base three("path.txt");
    three.read_show();
    Base2_ASCII one("path.txt");
    one.read_show();
    Binary two("path.txt");
    two.read_show();

}