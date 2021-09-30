#include <iostream>
#include <functional>

using namespace std;

class command {
public:
    virtual void execute(string) = 0;
    virtual void set_command(function<void(string)>) = 0;
};


class real_command: public command {
public:
    real_command(function<void(string)>func) {
        _func = func;
    }

    void set_command(function<void(string)> func) override {
        _func = func;
    }

    void execute(string value) override {
        _func(value);
    }
private:
    function<void(string)>_func;
};

int main() {
auto a = [](string a){
    cout << a << endl;
};
    auto b = [](string a){
        cout << a.size() << endl;
    };
    real_command rc(a);
    rc.set_command(b);
    rc.execute("Hello world!");

    return 0;
}
