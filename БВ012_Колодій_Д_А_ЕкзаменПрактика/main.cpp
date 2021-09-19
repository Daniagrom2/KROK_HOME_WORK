
#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include "Book.h"
#include "Reader.h"

//Показывает читателей с просроченой сдачей и штраф за это
//тут находится потому что в файликах конфликтует
void show_by_pass_end(ARR_ofHand *&book_on_hands, Group *&current, Data today);

int main() {
    Data *Today = new Data;
    Today->day = 1;
    Today->month = 1;
    Today->year = 2021;
    ARR_ofHand *book_on_hands = new ARR_ofHand;
    Archiv *first = new Archiv;
    Group *current = new Group;
    read_data("Books.txt", "r", *first, *first->size);
    read_datar("Readers.txt", "r", *current, *current->size);

    char yesno;
    do {
        char regim;
        cout << "Выбирите режим:\n";
        cout << "\ta)Книги\n\tb)Читатели\n";
        cout << "Ввод:";
        cin >> regim;
        switch (regim) {
            case 'a': {
                char yesnob;
                do {

                    char answer_a;
                    cout << "Выберете действие:\n";
                    cout << "\ta)Добавление книги\n";
                    cout << "\tb)Уадление книги\n";
                    cout << "\tc)Редактирование книги\n";
                    cout << "\td)Поиск книги\n";
                    cout << "\te)Сортировка книг\n";
                    cout << "\tf)Выдача книги\n";
                    cout << "\tg)Возврат книги\n";
                    cout << "\tj)Вывод самых популярных книг\n";
                    cout << "\tk)Вывод книг находящихся у читателей\n";
                    cout << "Ввод:";
                    cin >> answer_a;
                    switch (answer_a) {
                        case 'a': {
                            add_book(first);
                            break;
                        }
                        case 'b': {
                            int id;
                            cout << "Введите ID книги которую хотите удалить:";
                            cin >> id;
                            delete_book(first, id, *first->size);
                            break;
                        }
                        case 'c': {
                            int enter_ID;
                            cout << "Введите ID книги которую хотите редактировать:";
                            cin >> enter_ID;
                            edit_book(first, enter_ID, *first->size);
                            break;
                        }
                        case 'd': {
                            char answer_a_d;
                            cout << "Выберете по какому признакоку совершить поиск:\n";
                            cout << "\ta)Поиск по автору\n";
                            cout << "\tb)Поиск по названию\n";
                            cout << "\tc)Поиск по жанру\n";
                            cout << "\td)Поиск по рейтингу\n";
                            cout << "\te)Поиск по ID\n";
                            cout << "Ввод:";
                            cin >> answer_a_d;
                            switch (answer_a_d) {
                                case 'a': {
                                    char *author;
                                    author = new char[30];
                                    cout << "Введите автора:";
                                    cin.ignore();
                                    cin.getline(author, 30);
                                    search_by_author(first->arr, *first->size, author);
                                    delete author;
                                    break;
                                }
                                case 'b': {
                                    char *name;
                                    name = new char[30];
                                    cout << "Введите название:";
                                    cin.ignore();
                                    cin.getline(name, 30);
                                    search_by_name(first->arr, *first->size, name);
                                    delete name;
                                    break;
                                }
                                case 'c': {
                                    char *genre;
                                    genre = new char[30];
                                    cout << "Введите жанр:";
                                    cin >> genre;
                                    search_by_genre(first->arr, *first->size, genre);
                                    delete genre;
                                    break;

                                }
                                case 'd': {
                                    float *reting = new float;
                                    cout << "Введите рейтинг:";
                                    cin >> *reting;
                                    search_by_reting(*first->size, first->arr, *reting);
                                    delete reting;
                                    break;
                                }
                                case 'e': {
                                    int *ID = new int;
                                    cout << "Введите ID:";
                                    cin >> *ID;
                                    show_element(first->arr[search_by_ID(*first->size, first->arr, *ID)]);
                                    delete ID;
                                    break;
                                }
                                default:
                                    cout << "Такого режима нету(";
                            }
                            break;
                        }
                        case 'e': {
                            char answer_a_e;
                            cout << "Выберете по какому признакоку совершить сортировку:\n";
                            cout << "\ta)Сортировка по автору\n";
                            cout << "\tb)Сортировка по названию\n";
                            cout << "\tc)Сортировка по жанру\n";
                            cout << "\td)Сортировка по рейтингу\n";
                            cout << "\te)Сортировка по ID\n";
                            cout << "Ввод:";
                            cin >> answer_a_e;
                            switch (answer_a_e) {
                                case 'a': {
                                    sorting_by_author(first->arr, *first->size);
                                    break;
                                }
                                case 'b': {
                                    sorting_by_name(first->arr, *first->size);
                                    break;
                                }
                                case 'c': {
                                    sorting_by_genre(first->arr, *first->size);
                                    break;

                                }
                                case 'd': {
                                    sorting_by_reting(first->arr, *first->size);
                                    break;
                                }
                                case 'e': {
                                    sorting_by_ID(first->arr, *first->size);
                                    break;
                                }
                                default:
                                    cout << "Такого режима нету(";
                            }
                            break;
                        }
                        case 'f': {
                            vidacha_book(first, book_on_hands);
                            break;
                        }
                        case 'g': {
                            int book_id;
                            cout << "Введите ID книги которую возвращают:";
                            cin >> book_id;
                            vozvrat_book(first, book_id, book_on_hands, *Today);
                            for (int i = 0; i < *book_on_hands->size; i++) {
                                if (book_on_hands->arr[i].ID_of_Book = book_id)
                                    current->arr[searching_by_readerID(current->arr, *current->size,
                                                                       book_on_hands->arr[i].reader_ID)].readed_books_number += 1;
                                clearFile("Readers.txt");
                                write_dater("Readers.txt", "w", *current, *current->size);

                            }
                            break;
                        }
                        case 'j': {
                            int *count = new int;
                            cout << "Ведите количество топ книг:";
                            cin >> *count;
                            showInformationAboutPopular(first->arr, *first->size, *count);
                            delete count;
                            break;
                        }
                        case 'k': {
                            showInformationAboutBooksOnHand(first->arr, *first->size);
                            break;
                        }
                        default:
                            cout << "Такого режима нету(";

                    }
                    cout << "Хотите сделать чтото еще?(y/n)\n";
                    cout << "Ввод:";
                    cin >> yesnob;
                } while (yesnob == 'Y' || yesnob == 'y');
                break;
            }
            case 'b': {
                char yesnoc;

                do {

                    char answer_b;
                    cout << "Выберете действие:\n";
                    cout << "\ta)Добавление читателя\n";
                    cout << "\tb)Уадление читателя\n";
                    cout << "\tc)Редактирование читателя\n";
                    cout << "\td)Поиск читателя\n";
                    cout << "\te)Сортировка читателей\n";
                    cout << "\tf)Вывод информации о самых активных читателях\n";
                    cout << "\tg)Вывод информации о читателях с просроченым возвратом\n";
                    cout << "Ввод:";
                    cin >> answer_b;
                    switch (answer_b) {
                        case 'a': {
                            add_reader(current);
                            break;
                        }
                        case 'b': {
                            int id;
                            cout << "Введите ID книги которую хотите удалить:";
                            cin >> id;
                            delete_reader(current, id, *current->size);
                            break;
                        }
                        case 'c': {
                            int enter_ID;
                            cout << "Введите ID читателя которого хотите редактировать:";
                            cin >> enter_ID;
                            edit_reader(current, enter_ID);
                            break;
                        }
                        case 'd': {
                            char *answer_b_d = new char;
                            cout << "Выберете по какому признакоку совершить поиск:\n";
                            cout << "\ta)Поиск по ФИО\n";
                            cout << "\tb)Поиск по количеству прочитаных книг\n";
                            cout << "\tc)Поиск по ID\n";
                            cout << "\td)Поиск по номеру паспорта\n";
                            cout << "Ввод:";
                            cin >> answer_b_d;
                            switch (*answer_b_d) {
                                case 'a': {
                                    char *second_name;
                                    second_name = new char[30];
                                    char *name;
                                    name = new char[30];
                                    char *third_name;
                                    third_name = new char[30];
                                    cout << "Введите  фамилию:";
                                    cin.ignore();
                                    cin.getline(second_name, 30);
                                    cout << "Введите имя:";
                                    cin.getline(name, 30);
                                    cout << "Введите отчество:";
                                    cin.getline(third_name, 30);
                                    searching_by_FIO(current->arr, *current->size, name, second_name, third_name);
                                    delete name;
                                    delete second_name;
                                    delete third_name;
                                    break;
                                }
                                case 'b': {
                                    int *readed_num;
                                    readed_num = new int;
                                    cout << "Введите количество прочитаных книг:";
                                    cin >> *readed_num;
                                    searching_by_raded_bnum(current->arr, *current->size, *readed_num);
                                    delete readed_num;
                                    break;
                                }
                                case 'c': {
                                    int *ID = new int;
                                    cout << "Введите ID:";
                                    cin >> *ID;
                                    show_element(
                                            current->arr[searching_by_readerID(current->arr, *current->size, *ID)]);
                                    delete ID;
                                    break;

                                }
                                case 'd': {
                                    int *pasp_num = new int;
                                    cout << "Введите номер паспорта:";
                                    cin >> *pasp_num;
                                    searching_by_pas_num(current->arr, *current->size, *pasp_num);
                                    delete pasp_num;
                                    break;
                                }
                                default:
                                    cout << "Такого режима нету(";
                            }
                            break;
                        }
                        case 'e': {
                            char *answer_a_e = new char;
                            cout << "Выберете по какому признакоку совершить сортировку:\n";
                            cout << "\ta)Сортировка по фамилии\n";
                            cout << "\tb)Сортировка по имени\n";
                            cout << "\tc)Сортировка по отчеству\n";
                            cout << "\td)Сортировка по номеру паспорта\n";
                            cout << "\te)Сортировка по ID\n";
                            cout << "\tf)Сортировка по количеству прочитаных книг\n";
                            cout << "Ввод:";
                            cin >> answer_a_e;
                            switch (*answer_a_e) {
                                case 'a': {
                                    sorting_by_second_name(current->arr, *current->size);
                                    break;
                                }
                                case 'b': {
                                    sorting_by_name(current->arr, *current->size);
                                    break;
                                }
                                case 'c': {
                                    sorting_by_third_name(current->arr, *current->size);
                                    break;

                                }
                                case 'd': {
                                    sorting_by_pas_num(current->arr, *current->size);
                                    break;
                                }
                                case 'e': {
                                    sorting_by_ID(current->arr, *current->size);
                                    break;
                                }
                                case 'f': {
                                    sorting_by_raded_bnum(current->arr, *current->size);
                                    break;
                                }
                                default:
                                    cout << "Такого режима нету(";
                            }
                            delete answer_a_e;
                            break;
                        }
                        case 'f': {
                            int *count = new int;
                            cout << "Введите количество топ читателей:";
                            cin >> *count;
                            show_by_reader_activity(current->arr, *current->size, *count);
                            delete count;
                            break;
                        }
                        case 'g': {
                            show_by_pass_end(book_on_hands, current, *Today);
                            break;
                        }
                        default:
                            cout << "Такого режима нету(";

                    }
                    cout << "Хотите сделать чтото еще?(y/n)\n";
                    cout << "Ввод:";
                    cin >> yesnoc;
                } while (yesnoc == 'Y' || yesnoc == 'y');

                break;
            }
            default:
                cout << "Такого режима нету(\n";

        }
        cout << "Хотите выбрать другой режим?(y/n)\n";
        cout << "Ввод:";
        cin >> yesno;
    } while (yesno == 'y' || yesno == 'Y');


    delete[] book_on_hands->arr;
    delete book_on_hands;
    delete Today;
    delete[] current->arr;
    delete current->size;
    delete current;
    delete[] first->arr;
    delete first->size;
    delete first;
    return 0;
}

//Показывает читателей с просроченой сдачей и штраф за это
void show_by_pass_end(ARR_ofHand *&book_on_hands, Group *&current, Data today) {
    int counter = 0;
    for (int i = 0; i < *book_on_hands->size; i++) {
        if ((book_on_hands->arr[i].get->year * 365 +
             book_on_hands->arr[i].get->month * 30 +
             book_on_hands->arr[i].get->day + 14) - (today.year * 365 + today.month * 30 + today.day) < 0) {

            for (int j = 0; j < *current->size; j++) {
                if (current->arr[j].ID == book_on_hands->arr[i].reader_ID) {
                    show_element(current->arr[j]);
                    cout << "Просроченых дней:" << ((book_on_hands->arr[i].get->year * 365 +
                                                     book_on_hands->arr[i].get->month * 30 +
                                                     book_on_hands->arr[i].get->day + 14) -
                                                    (today.year * 365 + today.month * 30 + today.day)) * (-1)
                         << endl;
                    cout << "Cумма к оплате:" << ((book_on_hands->arr[i].get->year * 365 +
                                                   book_on_hands->arr[i].get->month * 30 +
                                                   book_on_hands->arr[i].get->day + 14) -
                                                  (today.year * 365 + today.month * 30 + today.day)) * (-10) << endl;
                    counter++;
                }
            }

        }
    }
    if (counter == 0)
        cout << "Нет просроченых.\n\n";
}