#include <iostream>
#include <vector>

using namespace std;
class Student{
public:
    friend std::ostream &operator<<(std::ostream &out, const Student &student);
    string get_name();
    string get_second_name();
    int get_course();
    void set_name(string name);
    void set_second_name(string s_n);
    void set_course(int course);
    Student():name("Vasya"),second_name("Lock")
            {
        course = 1;
            }
    Student(string name,string s_n,int course):name(name),second_name(s_n)
    {
        this->course = course;
    }
    Student(const Student& a){
        this->course = a.course;
        this->second_name = a.second_name;
        this->name = a.name;
    }
    static void zapolnit(vector<Student> &a){
        Student st ("Vasya","Lock",1);
        a.reserve(10);
        for (int i = 0; i < 5; i++) {
a.push_back(st);
        }
    }
    static void show( vector<Student> &a){
        for (int i = 0; i < a.size(); i++) {
            cout<<a[i]<<endl;
        }
    }

protected:
    string name;
string second_name;
int course;
};

std::ostream &operator<<(ostream &out, const Student &student) {
    out<<"Name: "<<student.name<<"\nSecond name: "<<student.second_name<<"\nCourse: "<<student.course;
    return out;
}

string Student::get_name() {
    return name;
}

string Student::get_second_name() {
    return second_name;
}

int Student::get_course() {
    return course;
}

void Student::set_name(string name) {
this->name = name;
}

void Student::set_second_name(string s_n) {
this->second_name = s_n;
}

void Student::set_course(int course) {
this->course = course;
}

//////1////
int main() {

//    vector<int> one(10);
//    one.reserve(16);
//    for (int i = 0; i < one.size(); i++) {
//        one[i] = i * i;
//    }
//    for (auto data: one) {
//        cout << data << " ";
//    }
//    cout << endl;
//    //////2/////
//
//    const int n = 10;
//    vector<vector<int> > a(n);
//    for (auto i = 0; i < a.size(); i++)
//        a[i].reserve(n);
//
//    for (auto i = 1; i < a.size(); i++)
//        for (auto j = 1; j < a.size(); j++)
//            a[i][j] = i * j;
//
//    for (auto i = 1; i < a.size(); i++) {
//        for (auto j = 1; j < a.size(); j++)
//            cout << a[i][j] << "\t";
//
//        cout << endl;
//    }
    vector<Student>c;
    Student abc;
abc.zapolnit(c);
abc.show(c);
    return 0;
}
