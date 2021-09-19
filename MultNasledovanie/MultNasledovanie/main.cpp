//
//  main.cpp
//  MultNasledovanie
//
//  Created by Kolodii Daniil on 18.08.2021.
//

#include <iostream>
using namespace std;
////////1/////////////
//class Pasanger{
//public:
//   int count_vantage;
//    int distance;
//    Pasanger(bool vantage,int distance):count_vantage(vantage),distance(distance){
//    }
//};
//class Transport{
//protected:
//    int speed;
//    int pasanger_price;
//    int vantage_price;
//    Transport(){
//    }
//    Transport(int speed,int psg_price,int vnt_price):
//    speed(speed),
//    pasanger_price(psg_price),
//    vantage_price(vnt_price){
//    }
//};
//class Car:public Transport{
//public:
//    Car(){
//    Transport::speed = 5;
//    Transport::pasanger_price = 20;
//        Transport::vantage_price = 10;
//    }
//    Car(int speed,int psg_price,int vnt_price):Transport(speed,psg_price,vnt_price){
//
//    }
//
//};
//class Bicycle:public Transport{
//public:
//    Bicycle(){
//    Transport::speed = 2;
//    Transport::pasanger_price = 10;
//        Transport::vantage_price = 15;
//    }
//    Bicycle(int speed,int psg_price,int vnt_price):Transport(speed,psg_price,vnt_price){
//
//    }
//};
//class Cart:public Transport{
//public:
//    Cart(){
//    Transport::speed = 1;
//    Transport::pasanger_price = 5;
//        Transport::vantage_price = 5;
//    }
//    Cart(int speed,int psg_price,int vnt_price):Transport(speed,psg_price,vnt_price){
//
//    }
//};
//class Info:public Car,public Bicycle,public Cart{
//private:
//    int price;
//public:
//
//    Info(Pasanger one){
//        cout<<"On car:\n";
//        cout<<"Time:"<<one.distance/Car::speed<<" minutes\n";
//        price = one.count_vantage*Car::vantage_price+Car::pasanger_price;
//        cout<<"Price:"<<price<<endl;
//        cout<<"------------"<<endl;
//        cout<<"On bicycle:\n";
//        cout<<"Time:"<<one.distance/Bicycle::speed<<" minutes\n";
//        price = one.count_vantage*Bicycle::vantage_price+Bicycle::pasanger_price;
//        cout<<"Price:"<<price<<endl;
//        cout<<"------------"<<endl;
//        cout<<"On cart:\n";
//        cout<<"Time:"<<one.distance/Cart::speed<<" minutes\n";
//        price = one.count_vantage*Cart::vantage_price+Cart::pasanger_price;
//        cout<<"Price:"<<price<<endl;
//        cout<<"------------"<<endl;
//    }
//};
///////2////////
class Weels{
public:
    string type;

    Weels(){}
    Weels(string type):type(type){
    }
};
class Motor{
public:
    double volume;

    Motor(){ }
    Motor(double volume):volume(volume){
    }
};
class Doors{
public:
    int count;

    Doors(){}
    Doors(int count):count(count){
    }
};
class Color{
public:
    string color;

    Color(){}
    Color(string color):color(color){
    }
};
class Mark{
public:
    string mark;
    Mark(){}
    Mark(string mark):mark(mark){
        
    }
};
class Automobile:public Weels,public Motor,public Doors,public Color,public Mark{
public:
    Automobile(){
        cout<<"Enter car mark:";
        cin>>mark;
        cout<<"Enter weels type:";
        cin>>type;
        cout<<"Enter motor volume:";
        cin>>volume;
        cout<<"Enter doors count:";
        cin>>count;
        cout<<"Enter car color:";
        cin>>color;
        
    }
    Automobile(string type,string manufactured,double volume,int doors_count,string color):Weels(type),Motor(volume),Doors(doors_count),Color(color){
    }
};
class Printer{
public:
    Printer(Automobile a){
        cout<<"Car mark:"<<a.mark<<endl;
        cout<<"Motor volume:"<<a.volume<<endl;
        cout<<"Doors count:"<<a.count<<endl;
        cout<<"Weels type:"<<a.type<<endl;
        cout<<"Car color:"<<a.color<<endl;
    }
};
int main(int argc, const char * argv[]) {
    //////1//////
//    Pasanger one(2,30);
//    Info vivod(one);
    ///////2/////
    Automobile a;
    Printer o(a);
    return 0;
}
