//
// Created by Kolodii Daniil on 31.05.2021.
//

#ifndef INC_012_____READER_H
#define INC_012_____READER_H
#pragma once

#include "Book.h"

//Структура читатель
struct Reader {
    char second_name[30];
    char name[30];
    char third_name[30];
    char birth_date[30];
    int pasport_number;
    int ID;
    int readed_books_number;
};
//структура масив читателей
struct Group {
    int *size = new int(5);
    Reader *arr = new Reader[*size];

};

//добавляет читателя
void add_reader(Group *&one);

//выделяет место и копирует читателей
Group *add_rader_boof(Group *&one);

//удаляет читателя по id
void delete_reader(Group *&one, int ID, int num);

//позволяет отредактировать читателя
void edit_reader(Group *&current, int ID);

//сортирует по фамилии
void sorting_by_second_name(Reader *&arr, int num);

//сортирует по имени
void sorting_by_name(Reader *&arr, int num);

//сортирует по отчеству
void sorting_by_third_name(Reader *&arr, int num);

//поиск по ФИО
void searching_by_FIO(Reader *&arr, int num, char name[30], char second_name[30], char third_name[30]);

//сортирует по количеству прочитаных книг
void sorting_by_raded_bnum(Reader *&arr, int num);

//поиск по количеству прочитаных книг
void searching_by_raded_bnum(Reader *&arr, int num, int readed_num);

//сортировка по ID читателя
void sorting_by_ID(Reader *&arr, int num);

//поиск по ID читателя
int searching_by_readerID(Reader *&arr, int num, int ID);

//сортировка по номеру паспорта
void sorting_by_pas_num(Reader *&arr, int num);

//поиск по номеру паспорта
void searching_by_pas_num(Reader *&arr, int num, int pasp_num);

//показывает топ активных читателей
void show_by_reader_activity(Reader *&arr, int num, int count);

//выводит елемент
void show_element(Reader arr);

//Создает динамический масив Архив указаного размера
Group *creatdar(int new_size);

//Чистит память
void delda(Group *&arr);

//Записывает данные в файл тхт
void write_dater(const char *way, const char *mode, const Group &one, int size);

//Считывает данные с файла тхт
void read_datar(const char *way, const char *mode, const Group &one, int size);

#endif //INC_012_____READER_H
