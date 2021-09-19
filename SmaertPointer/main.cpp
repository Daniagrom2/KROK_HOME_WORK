#include <iostream>

using namespace std;
template<class T>
class Shared_pointer {
public:
    Shared_pointer(const Shared_pointer<T>&a){
        this->value_ = a.value_;
    }
    Shared_pointer& operator = (const Shared_pointer<T>&a)
    {
     this->value_ = a.value_;
        return *this;
    }
    Shared_pointer operator+(const Shared_pointer &a) {
        return value_ + a.value_;
    }

    Shared_pointer operator+(int a) {
        return value_ + a;
    }

    Shared_pointer operator-(const Shared_pointer &a) {
        return value_ - a.value_;
    }

    Shared_pointer operator-(int a) {
        return value_ - a;
    }

    Shared_pointer operator*(const Shared_pointer &a) {
        return value_ * a.value_;
    }

    Shared_pointer operator*(int a) {
        return value_ * a;
    }

    Shared_pointer operator/(const Shared_pointer &a) {
        return value_ / a.value_;
    }

    Shared_pointer operator/(int a) {
        return value_ / a;
    }

    T *operator->() { return value_; }

    T &operator*() { return *value_; }

    bool operator>(const Shared_pointer &a) {
        return value_ > a.value_;
    }

    bool operator<(const Shared_pointer &a) {
        return value_ < a.value_;
    }

    bool operator==(const Shared_pointer &a) {
        return value_ == a.value_;
    }

    bool operator!=(const Shared_pointer &a) {
        return !operator==(a);
    }
    T& operator[] (const int index)
    {
     return *this[index];
    }
    void swap(Shared_pointer<T> &a){
        std::__1::swap(*this->value_  , *a.value_);
    }
    Shared_pointer(T *value) {
        this->value_ = value;

    }

    T *get_value() {
        return value_;
    }

    ~Shared_pointer() {
        delete value_;

    }

private:
    T *value_;
};

template<class T>
class Unique_pointer {
public:
    Unique_pointer operator+(const Unique_pointer &a) {
        return value_ + a.value_;
    }

    Unique_pointer operator+(int a) {
        return value_ + a;
    }

    Unique_pointer operator-(const Unique_pointer &a) {
        return value_ - a.value_;
    }

    Unique_pointer operator-(int a) {
        return value_ - a;
    }

    Unique_pointer operator*(const Unique_pointer &a) {
        return value_ * a.value_;
    }

    Unique_pointer operator*(int a) {
        return value_ * a;
    }

    Unique_pointer operator/(const Unique_pointer &a) {
        return value_ / a.value_;
    }

    Unique_pointer operator/(int a) {
        return value_ / a;
    }

    T *operator->() { return value_; }

    T &operator*() { return *value_; }

    bool operator>(const Unique_pointer &a) {
        return value_ > a.value_;
    }

    bool operator<(const Unique_pointer &a) {
        return value_ < a.value_;
    }

    bool operator==(const Unique_pointer &a) {
        return value_ == a.value_;
    }

    bool operator!=(const Unique_pointer &a) {
        return !operator==(a);
    }
    T& operator[] (const int index)
    {

        return *this[index];
    }
    T& make_unique(T value){
        return new T(value);
    }
void move(Unique_pointer<T> &a){
       *this->value_  = *a;
        a = nullptr;
    }
    Unique_pointer(T *value) {
        this->value_ = value;

    }

    T *get_value() {
        return value_;
    }

    ~Unique_pointer() {
        delete value_;

    }

private:
    T *value_;
};

int main() {
   Unique_pointer<int> ptr(new int(10));
    Unique_pointer<int> ptr2(new int(2));
    ptr2.move(ptr);
    ptr2[10] = 1;
    cout<<ptr2[10];
    Shared_pointer<int> ptr3(new int(11));
    Shared_pointer<int> ptr4(new int(3));
    ptr3.swap(ptr4);

    return 0;
}
