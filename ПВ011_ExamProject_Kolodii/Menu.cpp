//
// Created by Kolodii Daniil on 30.08.2021.
//

#include "Menu.h"
#include"Order.h"


void Menu::menu(Autopark &autop) {
    char regim;
    string yesno;
    do {
        yesno ="";
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
                                    cout << *autop.search_by_car_name(name);
                                    break;
                                }
                                case 'b': {
                                    string color;
                                    cout << "Enter color of car:";
                                    cin.ignore();
                                    getline(cin, color);
                                    cout << *autop.search_by_color(color);
                                    break;
                                }
                                case 'c': {
                                    int vin;
                                    cout << "Enter vin code of car:";
                                    cin >> vin;
                                    cout << *autop.search_by_vin_code(vin);
                                    break;
                                }
                                case 'd': {
                                    int year;
                                    cout << "Enter year of car:";
                                    cin >> year;
                                    cout << *autop.search_by_year(year);
                                    break;
                                }
                                case 'e': {
                                    int price;
                                    cout << "Enter price of car:";
                                    cin >> price;
                                    cout << *autop.search_by_price(price);
                                    break;
                                }
                                case 'g': {
                                    int square;
                                    cout << "Enter square of car:";
                                    cin >> square;
                                    cout << *autop.search_by_square(square);
                                    break;
                                }

                            }
                            break;
                        case 'c': {
                            int vin;
                            cout << "Enter vin code of car you wat to buy:";
                            cin >> vin;
                            Order ord("order.txt");
                            Car tmp(*autop.search_by_vin_code(vin));
                            ord.add_car_to_order(tmp);
                            cout << "Do you want buy extebsions?y/n\n Enter:";
                            cin.ignore();
                            getline(cin, yesno);
                            if (yesno == "yes" || yesno == "y" || yesno == "Yes") {
                                Pinter::print_Extentions_to_cmd(*tmp.get_extention2());
                                string name_ex;
                                do {
                                    cout << "Enter name of extension that you want to add:";
                                    getline(cin, name_ex);
                                    ord.add_extention_to_order(
                                            *tmp.get_extention2()->search_tuning_by_partname(name_ex));
                                    cout << "Do you want to add one mpore?y/n\nEnter:";
                                    getline(cin, yesno);
                                } while (yesno == "yes" || yesno == "y" || yesno == "Yes");

                            }
                            ord.add_to_order_result_sum();

                            break;
                        }

                        default:
                            cout << "Wrong mode!" << endl;
                    }
                    cout << "Do you want do something again?y/n\nEnter:";
                    cin.ignore();
                    getline(cin, yesno);
                } while (yesno != "no" || yesno != "n" || yesno != "No");
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
                    case 'c':
                        int vin2;
                        cout << "Enter vin code of car you want to add tuning:";
                        cin >> vin2;
                        autop.search_by_vin_code(vin2)->set_count(autop.search_by_vin_code(vin2)->get_count()+1);
                        autop.search_by_vin_code(vin2)->get_extention2()->add_tuning_hand();
                        break;
                    case 'd':
                        int vin3;
                        cout << "Enter vin code of car you want to add tuning:";
                        cin >> vin3;
                        cin.ignore();
                        string name;
                        cout<<"Enter name of tuning that you want to remove:";
                        getline(cin,name);
                        autop.search_by_vin_code(vin3)->get_extention2()->remove_tuning(name);
                }
                    cout << "Do you want do something again?y/n";
                    cin.ignore();
                    getline(cin, yesno);
                }while (yesno != "no" || yesno != "n" || yesno != "No");
                break;
            default:
                cout << "Wrong mode!" << endl;
        }
        cout << "Do you want do something again?y/n";
//        cin.ignore();
        getline(cin, yesno);
    } while (yesno != "no" || yesno != "n" || yesno != "No");

}
