//
// Created by Kolodii Daniil on 31.05.2021.
//

#ifndef INC_012_____BOOK_H
#define INC_012_____BOOK_H
#pragma once

#include <iostream>
#include "Reader.h"

using namespace std;
//Структура книги
struct Book {
    char dataOfBirth[30];
    char name[30];
    char author[30];
    char genre[30];
    int price;
    float reting;
    int ID;
    bool on_hand;
    char dataOfPass[30];
};
//Структура для работы с данными
struct Archiv {
    int *size = new int(20);
    Book *arr = new Book[*size];
};
//Структура с датой
struct Data {
    int day;
    int month;
    int year;
};
//Структура с данными о книге на руках у пользователя
struct Hand {
    Data *get = new Data;
    int ID_of_Book;
    int reader_ID;
};
//масив структур Hand
struct ARR_ofHand {
    int *size = new int(1);
    Hand *arr = new Hand[*size];
};

//Добавление новой книги
void add_book(Archiv *&one);

//Удаление книги
void delete_book(Archiv *&one, int ID, int num);

//Редактирование книги
void edit_book(Archiv *&one, int ID, int num);

//Поиск по автору
void search_by_author(Book *&arr, int num, char author[30]);

//Сортировка по автору
void sorting_by_author(Book *&arr, int num);

//Поиск по имени
void search_by_name(Book *&arr, int num, char name[30]);

//Сортировка по имени
void sorting_by_name(Book *&arr, int num);

//Поиск по жанру
void search_by_genre(Book *&arr, int num, char genre[30]);

//Сортировка по жанру
void sorting_by_genre(Book *&arr, int num);

//Поиск по ретингу
void search_by_reting(int num, Book *&arr, float reting);

//Сортировка по ретингу
void sorting_by_reting(Book *&arr, int num);

//Поиск по ID
int search_by_ID(int num, Book *&arr, int ID);

//Сортировка по ID
void sorting_by_ID(Book *&arr, int num);

//Выдача книг
void vidacha_book(Archiv *&one, ARR_ofHand *&book_on_hands);

//Возврат книг
void vozvrat_book(Archiv *&one, int book_id, ARR_ofHand *&book_on_hands, Data Today);

//Выводит информацию о популярных книгах
void showInformationAboutPopular(Book *&arr, int num, int count);

//Выводит информацию о книгах на руках у людей
void showInformationAboutBooksOnHand(Book *&arr, int num);


//Выводит елемент
void show_element(Book arr);

//Выводит все елементы
void show_all_elements(Archiv one);

//Записывает данные в файл тхт
void write_date(const char *way, const char *mode, const Archiv &one, int size);

//Считывает данные с файла тхт
void read_data(const char *way, const char *mode, const Archiv &one, int size);

//Создает динамический масив Архив указаного размера
Archiv *creatda(int new_size);

//Чистит память
void delda(Archiv *&arr);

//Копирует уже очищенный старый масив в новый и удаляет старый
Archiv *del_book_boof(Archiv *&one);

//выделяет память и копирует книги
Archiv *add_book_boof(Archiv *&one);

//Очищает тхт файлик
void clearFile(const char way[255]);

//Сортировка по ID
int search_by_ID(int num, Hand *&arr, int ID);

//Сортировка по ID
void sorting_by_ID(Hand *&arr, int num);

#endif //INC_012_____BOOK_H
