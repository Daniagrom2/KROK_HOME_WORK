//
// Created by Kolodii Daniil on 30.08.2021.
//

#include "Menu.h"
#include"Order.h"


void Menu::menu(Autopark &autop,Extensions& ext) {
    char regim;
    char yesno;
    do {
        cout << "Choose mode:\na)Customer\nb)Administrator\nEnter:";
cin>>regim;
        switch (regim) {
            case 'a': {
                char answ;
                do {
                    cout << "Please choose what you want to do:\n\ta)See all cars\n\tb)Search car\n\tc)Buy car\nEnter:";
                    cin >> answ;
                    switch (answ) {
                        case 'a':
                            Pinter::print_Autopark_to_cmd(autop);
                            break;
                        case 'b':
                            cout
                                    << "Please choose which search you want to do:\n\ta)By name\n\tb)By color\n\tc)By vin code\n\td)By year\n\t"
                                    <<
                                    "e)By price\n\tg)By square\nEnter:";
                            cin >> answ;
                            switch (answ) {
                                case 'a': {
                                    string name;
                                    cout << "Enter name of car:";
                                    cin.ignore();
                                    getline(cin, name);
                                    auto car = *autop.search_by_car_name(name);
                                    if(autop.search_by_car_name(name) == nullptr)
                                        cout<<"Sorry we haven't this car("<<endl;

                                    else{
                                        cout << car<<endl;
                                    }
                                    break;
                                }
                                case 'b': {
                                    string color;
                                    cout << "Enter color of car:";
                                    cin.ignore();
                                    getline(cin, color);
                                    cout << *autop.search_by_color(color)<<endl;
                                    break;
                                }
                                case 'c': {
                                    string vin;
                                    cout << "Enter vin code of car:";
                                    cin.ignore();
                                    getline(cin,vin);
                                    cout << *autop.search_by_vin_code(vin)<<endl;
                                    break;
                                }
                                case 'd': {
                                    int year;
                                    cout << "Enter year of car:";
                                    cin >> year;
                                    cout << *autop.search_by_year(year)<<endl;
                                    break;
                                }
                                case 'e': {
                                    int price;
                                    cout << "Enter price of car:";
                                    cin >> price;
                                    cout << *autop.search_by_price(price)<<endl;
                                    break;
                                }
                                case 'g': {
                                    int square;
                                    cout << "Enter square of car:";
                                    cin >> square;
                                    cout << *autop.search_by_square(square)<<endl;
                                    break;
                                }

                            }
                            break;
                        case 'c': {
                            string vin;
                            cout << "Enter vin code of car you wat to buy:";
                            getline(cin,vin);
                            Order ord("order.txt");
                            Car tmp(*autop.search_by_vin_code(vin));
                            ord.add_car_to_order(tmp);
                            cout << "Do you want buy extebsions?y/n\n Enter:";
                            cin.ignore();
                            cin>>yesno;
                            if (yesno == 'y' || yesno == 'Y') {
                                Pinter::print_Extentions_to_cmd(ext);
                                string name_ex;
                                do {
                                    cout << "Enter name of extension that you want to add:";
                                    cin.ignore();
                                    getline(cin, name_ex);
                                    auto a = *ext.search_tuning_by_partname(name_ex);
                                    ord.add_extention_to_order(a);
                                    cout << "Do you want to add one mpore?y/n\nEnter:";
                                    cin>>yesno;
                                } while (yesno == 'y' || yesno == 'Y');

                            }
                            ord.add_to_order_result_sum();

                            break;
                        }
                    }
                    cout << "Do you want do something again?y/n\nEnter:";
                    cin.ignore();
                    cin>>yesno;
                } while (yesno == 'y' || yesno == 'Y');
                break;
            }
            case 'b':
                char answ;
                do {
                cout<< "Please choose what you want to do:\na) Add car\nb)Remove car\nc)Add tuning\nd)Remove tuning\nEnter:";
                cin >> answ;

                switch (answ) {
                    case 'a':
                        autop.add_car_hand();
                        break;
                    case 'b':
                        int vin;
                        cout << "Enter vin code of car you want to remove:";
                        cin >> vin;
                        autop.remove_car(vin);
                        break;
                    case 'c':{
                        int price;
                        string name;
                        cout << "Enter name and price of tuning you want to add:\n\tEnter name:";
                       cin.ignore();
                       getline(cin,name);
                       cout<<"\tEnter price:";
                       cin>>price;
                        ext.add_tuning_auto(name,price);
                        break;}
                    case 'd':
                        cin.ignore();
                        string name2;
                        cout<<"Enter name of tuning that you want to remove:";
                        getline(cin,name2);
                       ext.remove_tuning(name2);
                       break;
                }


                    cout << "Do you want do something again?y/n\nEnter:";
                    cin.ignore();
                   cin>>yesno;
        }while (yesno == 'y' || yesno == 'Y');
                break;
        }

        cout << "Do you want to change mode?y/n";
        cin.ignore();
      cin>>yesno;
    } while (yesno == 'y' || yesno == 'Y');

}

void Menu::testdata(Autopark &a, Extensions &e) {
    a.add_car_auto("Porshe Cayen", "Gold", 2020, "1111", 32000, 3.0);
    a.add_car_auto("Porshe Taycan Turbo S", "White", 2020, "1112", 100000, 0.0);
    a.add_car_auto("Porshe 911", "Black", 1964, "1113", 500000, 5.1);
    a.add_car_auto("Porshe 911 Carera", "Dark Blue", 2021, "1114", 200000, 5.2);
    e.add_tuning_auto("Standart salon", 0);
    e.add_tuning_auto("Alkantara salon", 1000);
    e.add_tuning_auto("Standart tire", 0);
    e.add_tuning_auto("Low profile tire", 1000);
    e.add_tuning_auto("Standart bumper", 0);
    e.add_tuning_auto("Carbon bumper", 1000);
    e.add_tuning_auto("Standart disks", 0);
    e.add_tuning_auto("Lux disks", 3000);
    e.add_tuning_auto("Standart without spoiler", 0);
    e.add_tuning_auto("Lux spoiler", 3000);
}
