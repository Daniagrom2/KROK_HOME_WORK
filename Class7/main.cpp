#include <iostream>

using namespace std;
template <class T>
class Number {
private:
    T *_x;
public:

    Number &operator=(const Number &a) {
        if (_x)
            delete _x;
        _x = new int;
        _x = a._x;
        return *this;
    }

    Number &operator=(T i) {
        if (_x)
            delete _x;
        _x = new T;
        *_x = i;
        return *this;
    }

    Number();

    Number(T);

    ~Number();

    Number(const Number &a);

    T get_x();

    void set_x(T);

};

template<typename T>
Number<T>::Number() : _x(new T(0)) {
}
template<typename T>
Number<T>::Number(T x) : _x(new T(x)) {
}
template<typename T>
Number<T>::~Number() {
    delete _x;
}
template<typename T>
Number<T>::Number(const Number &a) : _x(new T(*a._x)) {
}
template<typename T>
T Number<T>::get_x() {
    return *_x;
}
template<typename T>
void Number<T>::set_x(T x) {
    *_x = x;
}

template<class A>
class DynamicArray {
    int *size;
    Number<A> *arr;
public:

    DynamicArray();

    ~DynamicArray();

    DynamicArray(int);

    DynamicArray(const DynamicArray &a);

    void set_arr_element(int i);

    void print();

    void add_element();

    void arr_sorting();

    void delete_element(int);
    void combo_two_arr(DynamicArray &a);

    int serching_element(int elem);
    int serching_element(double elem);
    int serching_element(float elem);

    DynamicArray &operator=(DynamicArray &a) {
        if (arr)
            delete[] arr;
        *size = *a.size;
        arr = new Number<A>[*size];
        for (int i = 0; i < *size; i++) {
            arr[i].set_x(a.arr[i].get_x());
        }
        return *this;
    }

    Number<A> &operator[](int i) {
        if (i < *size)
            return arr[i];
    }

    DynamicArray &operator++() {
        Number<A> *tmp = new Number<A>[*this->size + 1];
        for (int i = 0; i < *this->size; i++) {
            tmp[i].set_x(arr[i].get_x());
        }
        (*this->size)++;
        delete[] arr;
        arr = tmp;
        arr[*this->size - 1] = NULL;
        return *this;
    }


    DynamicArray &operator+(int i) {
        arr[*size - 1].set_x(i);
        return *this;
    }

    DynamicArray &operator-(int i) {
        delete_element(i);
        return *this;
    }

    DynamicArray &operator--() {
        Number<A> *tmp = new Number<A>[*this->size - 1];
        (*this->size)--;
        for (int i = 0; i < *this->size; i++) {
            tmp[i].set_x(arr[i].get_x());
        }
        for (int i = *this->size + 1; i < *this->size; i++) {
            tmp[i].set_x(arr[i].get_x());
        }
        delete[] arr;
        arr = tmp;
        return *this;
    }
};

template<>
DynamicArray<int>::DynamicArray() {
    size = new int(1);
    arr = new Number<int>[*size];
}
template<>
DynamicArray<int>::DynamicArray(int size) {
    this->size = new int(size);
    arr = new Number<int>[*this->size];
}
template<>
DynamicArray<int>::~DynamicArray() {
    delete size;
    delete[] arr;
}
template<>
DynamicArray<double>::DynamicArray() {
    size = new int(1);
    arr = new Number<double>[*size];
}
template<>
DynamicArray<double>::DynamicArray(int size) {
    this->size = new int(size);
    arr = new Number<double>[*this->size];
}
template<>
DynamicArray<double>::~DynamicArray() {
    delete size;
    delete[] arr;
}
template<>
DynamicArray<float>::DynamicArray() {
    size = new int(1);
    arr = new Number<float>[*size];
}
template<>
DynamicArray<float>::DynamicArray(int size) {
    this->size = new int(size);
    arr = new Number<float>[*this->size];
}
template<>
DynamicArray<float>::~DynamicArray() {
    delete size;
    delete[] arr;
}
template<>
DynamicArray<int>::DynamicArray(const DynamicArray &a) {
    arr = new Number<int>[*a.size];
    size = new int(*a.size);
    for (int i = 0; i < *size; i++) {
        arr[i].set_x(a.arr->get_x());
    }
}

template<>
void DynamicArray<int>::set_arr_element(int i) {
    int num;
    cout << "Enter element:";
    cin >> num;
    arr[i].set_x(num);

}
template<>
DynamicArray<double>::DynamicArray(const DynamicArray &a) {
    arr = new Number<double>[*a.size];
    size = new int(*a.size);
    for (int i = 0; i < *size; i++) {
        arr[i].set_x(a.arr->get_x());
    }
}

template<>
void DynamicArray<double>::set_arr_element(int i) {
    double num;
    cout << "Enter element:";
    cin >> num;
    arr[i].set_x(num);

}
template<>
DynamicArray<float>::DynamicArray(const DynamicArray &a) {
    arr = new Number<float>[*a.size];
    size = new int(*a.size);
    for (int i = 0; i < *size; i++) {
        arr[i].set_x(a.arr->get_x());
    }
}

template<>
void DynamicArray<float>::set_arr_element(int i) {
   float num;
    cout << "Enter element:";
    cin >> num;
    arr[i].set_x(num);

}
template<>
void DynamicArray<int>::print() {
    for (int i = 0; i < *size; i++) {
        cout << "Arr[" << i << "] = " << arr[i].get_x() << endl;
    }
}
template<>
void DynamicArray<double>::print() {
    for (int i = 0; i < *size; i++) {
        cout << "Arr[" << i << "] = " << arr[i].get_x() << endl;
    }
}
template<>
void DynamicArray<float>::print() {
    for (int i = 0; i < *size; i++) {
        cout << "Arr[" << i << "] = " << arr[i].get_x() << endl;
    }
}

template<>
void DynamicArray<int>::delete_element(int index) {
    Number<int> *tmp = new Number<int>[*this->size - 1];

    for (int i = 0; i < index; i++) {
        tmp[i].set_x(arr[i].get_x());
    }
    for (int i = index; i < *this->size - 1; i++) {
        tmp[i].set_x(arr[i + 1].get_x());
    }
    (*this->size)--;
    delete[] arr;
    arr = tmp;
}
template<>
void DynamicArray<double>::delete_element(int index) {
    Number<double> *tmp = new Number<double>[*this->size - 1];

    for (int i = 0; i < index; i++) {
        tmp[i].set_x(arr[i].get_x());
    }
    for (int i = index; i < *this->size - 1; i++) {
        tmp[i].set_x(arr[i + 1].get_x());
    }
    (*this->size)--;
    delete[] arr;
    arr = tmp;
}
template<>
void DynamicArray<float>::delete_element(int index) {
    Number<float> *tmp = new Number<float>[*this->size - 1];

    for (int i = 0; i < index; i++) {
        tmp[i].set_x(arr[i].get_x());
    }
    for (int i = index; i < *this->size - 1; i++) {
        tmp[i].set_x(arr[i + 1].get_x());
    }
    (*this->size)--;
    delete[] arr;
    arr = tmp;
}

template<>
void DynamicArray<int>::add_element() {
    this->operator++();
    this->set_arr_element(*this->size - 1);
}
template<>
void DynamicArray<double>::add_element() {
    this->operator++();
    this->set_arr_element(*this->size - 1);
}
template<>
void DynamicArray<float>::add_element() {
    this->operator++();
    this->set_arr_element(*this->size - 1);
}

template<>
void DynamicArray<int>::arr_sorting() {
        Number<int> tmp;
        for (int i = *size - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                if (arr[j].get_x() > arr[j + 1].get_x()) {
                    tmp.set_x(arr[j].get_x());
                    arr[j].set_x(arr[j + 1].get_x());
                    arr[j + 1].set_x(tmp.get_x());
                }
            }
        }

}
template<>
void DynamicArray<double>::arr_sorting() {
    Number<double> tmp;
    for (int i = *size - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j].get_x() > arr[j + 1].get_x()) {
                tmp.set_x(arr[j].get_x());
                arr[j].set_x(arr[j + 1].get_x());
                arr[j + 1].set_x(tmp.get_x());
            }
        }
    }

}
template<>
void DynamicArray<float>::arr_sorting() {
    Number<float> tmp;
    for (int i = *size - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j].get_x() > arr[j + 1].get_x()) {
                tmp.set_x(arr[j].get_x());
                arr[j].set_x(arr[j + 1].get_x());
                arr[j + 1].set_x(tmp.get_x());
            }
        }
    }

}

template<>
void DynamicArray<int>::combo_two_arr(DynamicArray &a) {
    Number<int> *tmp = new Number<int>[*this->size + *a.size];
    for (int i = 0; i < *this->size; i++) {
        tmp[i].set_x(arr[i].get_x());
    }
    for (int i = *this->size, j = 0; j < *a.size; i++, j++) {
        tmp[i].set_x(a.arr[j].get_x());
    }
    *this->size += *a.size;
    delete[] arr;

    arr = tmp;
}
template<>
void DynamicArray<double>::combo_two_arr(DynamicArray &a) {
    Number<double> *tmp = new Number<double>[*this->size + *a.size];
    for (int i = 0; i < *this->size; i++) {
        tmp[i].set_x(arr[i].get_x());
    }
    for (int i = *this->size, j = 0; j < *a.size; i++, j++) {
        tmp[i].set_x(a.arr[j].get_x());
    }
    *this->size += *a.size;
    delete[] arr;

    arr = tmp;
}
template<>
void DynamicArray<float>::combo_two_arr(DynamicArray &a) {
    Number<float> *tmp = new Number<float>[*this->size + *a.size];
    for (int i = 0; i < *this->size; i++) {
        tmp[i].set_x(arr[i].get_x());
    }
    for (int i = *this->size, j = 0; j < *a.size; i++, j++) {
        tmp[i].set_x(a.arr[j].get_x());
    }
    *this->size += *a.size;
    delete[] arr;

    arr = tmp;
}

template<>
int DynamicArray<int>::serching_element(int elem) {
    for (int i = 0; i < *size; i++) {
        if (arr[i].get_x() == elem)
            return i;
    }
    return -1;


}
template<>
int DynamicArray<double>::serching_element(double elem) {
    for (int i = 0; i < *size; i++) {
        if (arr[i].get_x() == elem)
            return i;
    }
    return -1;


}
template<>
int DynamicArray<float>::serching_element(float elem) {
    for (int i = 0; i < *size; i++) {
        if (arr[i].get_x() == elem)
            return i;
    }
    return -1;


}
int main() {
    int size;
    cout << "Enter arr size:";
    cin >> size;
    DynamicArray<int> x(size);
    DynamicArray<int> z(size);
    for (int i = 0; i < size; i++) {
        x.set_arr_element(i);
    }
    for (int i = 0; i < size; i++) {
        z.set_arr_element(i);
    }
    x.add_element();
    x.arr_sorting();
    x.combo_two_arr(z);
    x.print();
    cout<<x.serching_element(2);

//    ++x;
//    --x;
//x+1;
//    x-1;
//x.get_arr()[1] = 1;
//    x.print();
//    z = x;
//    z.print();


    return 0;
}
