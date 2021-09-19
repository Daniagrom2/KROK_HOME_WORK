//
//  main.cpp
//  Nasledovanie
//
//  Created by Kolodii Daniil on 17.08.2021.
//

#include <iostream>
using namespace std;
class Student{
protected:
    string _name;
    string _lastname;
    int _age;
public:
    Student(string name,string lastname,int age):_name(name),_lastname(lastname),_age(age){
    }
    Student():_name("Nobody"),_lastname("Nobody"),_age(NULL){
        
    }
    void set_name(string name){
        _name = name;
    }
    void set_lastname(string lastname){
        _lastname = lastname;
    }
    void set_age(int age){
        _age = age;
    }
    void show(){
        cout<<"Name:"<<_name
        <<"\nLastname:"<<_lastname
        <<"\nAge:"<<_age<<endl;
    }
};
class Aspirant:public Student{
private:
    string _topic;
public:
    Aspirant(string name,string lastname,int age,string topic):Student(name,lastname,age),_topic(topic){
    }
    Aspirant():_topic("Unknown"){
    }
    void show(){
    Student::show();
        cout<<"Topic:"<<_topic<<endl;
    }
};
//////////////////////////////////////
class Pasport{
protected:
    string _name;
    string _lastname;
    string _country;
    int _id;
public:
    Pasport(string name,string lastname,string country, int id):_name(name),_lastname(lastname),_country(country),_id(id){
    }
    void show(){
        cout<<_name<<"\t"<<_lastname<<"\t"<<_country<<"\t"<<_id<<endl;
    }
};
class ForeignPassport:public Pasport{
public:
    ForeignPassport(string name,string lastname,string country, int id,int size,string *arr,int id2):Pasport(name,lastname,country,id),_visa_count(size),_id(id2),_visas(arr){
    }
    void show(){
        Pasport::show();
        cout<<_visa_count<<"\t"<<_id<<endl;
        for (int i = 0  ; i<_visa_count; i++) {
            cout<<_visas[i]<<"\t";
        }
    }
private:
    int _id;
    const int _visa_count;
    string *_visas;
};
class Group:public Student{
private:
    int *size;
    Student *group;
public:
    Group(int size1){
        size = new int(size1);
        group = new Student[*size];
        string name;
                string lastname;
                int age;
                for (auto i = 0; i<*size; i++) {
                    cout<<"Enter student#"<<i+1<<endl;
                    cout<<"Enter name:";
                    cin>>name;
                    cout<<"Enter lastname:";
                    cin>>lastname;
                    cout<<"Enter age:";
                    cin>>age;
                    group[i].set_age(age);
                    group[i].set_name(name);
                    group[i].set_lastname(lastname);
                }
    }
    ~Group(){
        delete size;
        delete [] group;
    }
    void set_students(){
        string name;
        string lastname;
        int age;
        for (auto i = 0; i<*size; i++) {
            cout<<"Enter student#"<<i+1<<endl;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter lastname:";
            cin>>lastname;
            cout<<"Enter age:";
            cin>>age;
            group[i].set_age(age);
            group[i].set_name(name);
            group[i].set_lastname(lastname);
            
        }
    }
    void show(){
        for (auto i = 0; i<*size; i++) {
            group[i].show();
        }
    }
};
int main(int argc, const char * argv[]) {
    /////////1/////////////
//    Student Alex("Alex","Min",21);
//    Alex.show();
//    cout<<"---------------\n";
//    Aspirant one("Alex","Min",21,"Chemistry");
//    one.show();
    /////////2///////////
//    string arr[2];
//    arr[0]  = "Canada";
//    arr[1]  = "Astralya";
//    ForeignPassport one("Nick","Lock","USA",12123,2,arr,1223123);
//    one.show();
    ///////////3/////////////
    Group one(2);
    one.show();
    return 0;
}
