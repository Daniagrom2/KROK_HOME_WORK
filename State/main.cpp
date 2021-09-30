#include <iostream>
#include <functional>

using namespace std;

class downloading;

class download_state {
public:
    virtual void update_status(downloading *) = 0;
};

class downloading {
public:
    downloading(shared_ptr<download_state> ws) {
        state = ws;
    }

    void update_status() {
        state->update_status(this);
    }


    shared_ptr<download_state> state;
};

class start : public download_state {
public:
    void update_status(downloading *) override;
};

class half : public download_state {
public:
    void update_status(downloading *) override;

};

class end_of_dwn : public download_state {
public:
    void update_status(downloading *) override;

};


int main() {
    downloading w(make_shared<start>());
    w.update_status();
    w.update_status();
    w.update_status();
    return 0;
}

void start::update_status(downloading *value) {
    cout << "start -> half" << endl;
    value->state = make_shared<half>();
}

void half::update_status(downloading *value) {
    cout << "half -> end_of_dwn" << endl;
    value->state = make_shared<end_of_dwn>();
}

void end_of_dwn::update_status(downloading *value) {
    cout << "update_status the stream" << endl;
}







