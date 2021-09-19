//
// Created by Kolodii Daniil on 31.05.2021.
//
#pragma once
#include "Book.h"
#include "Reader.h"
//добавляет читателя
void add_reader(Group *&one) {
    one = add_rader_boof(one);
    cout << "\tВведите фамилию:";
    cin.ignore();
    cin.getline(one->arr[*one->size - 1].second_name, 30);
    cout << "\tВведите имя:";
    cin.getline(one->arr[*one->size - 1].name, 30);
    cout << "\tВведите отчество:";
    cin.getline(one->arr[*one->size - 1].third_name, 30);
    cout << "\tВведите дату рождения:";
    cin.getline(one->arr[*one->size - 1].birth_date, 30);
    cout << "\tВведите номер паспорта:";
    cin >> one->arr[*one->size - 1].pasport_number;
    one->arr[*one->size - 1].ID = *one->size;
    cout << "\tВведите количество прочитаных книг:";
    cin >> one->arr[*one->size - 1].readed_books_number;
    clearFile("Readers.txt");
    write_dater("Readers.txt", "w", *one, *one->size);
}
//выделяет место и копирует читателей
Group *add_rader_boof(Group *&one) {
    Group *temp = nullptr;
    *one->size += 1;
    temp = creatdar(*one->size);
    *temp->size = *one->size;

    for (int i = 0; i < *one->size; i++) {
        temp->arr[i].pasport_number = one->arr[i].pasport_number;
        strcpy(temp->arr[i].second_name, one->arr[i].second_name);
        strcpy(temp->arr[i].name, one->arr[i].name);
        strcpy(temp->arr[i].birth_date, one->arr[i].birth_date);
        strcpy(temp->arr[i].third_name, one->arr[i].third_name);
        temp->arr[i].readed_books_number = one->arr[i].readed_books_number;
        temp->arr[i].ID = one->arr[i].ID;
    }
    delda(one);
    return temp;
}
//удаляет читателя по id
void delete_reader(Group *&one, int ID, int num) {
    int *index = new int;
    *index = searching_by_readerID(one->arr, ID, num);
    for (int i = *index; i < *one->size - 1; i++) {
        one->arr[i + 1].ID--;
        one->arr[i] = one->arr[i + 1];
    }
    *one->size -= 1;
    one->arr[*one->size].ID = *one->size;

    Group *temp;
    temp = nullptr;
    temp = creatdar(*one->size);
    *temp->size = *one->size;

    for (int i = 0; i < *one->size; i++) {
        temp->arr[i] = one->arr[i];
    }
    delda(one);

    one = temp;
    clearFile("Readers.txt");
    write_dater("Readers.txt", "w", *one, *one->size);
    delete index;
}
//позволяет отредактировать читателя
void edit_reader(Group*& current, int ID) {
    int *index = new int;
    *index = searching_by_readerID(current->arr,*current->size,ID);
    cout << "Что вы хотите поменять?\n";
    cout << "\t\ta)Все\n";
    cout << "\t\tb)Фамилию\n";
    cout << "\t\tc)Имя\n";
    cout << "\t\td)Отчество\n";
    cout << "\t\te)Дата рождения\n";
    cout << "\t\tf)Номер паспорта\n";
    cout << "\t\tg)Количество прочитаных книг\n";
    char answer;
    cout << "Введите:";
    cin >> answer;
    switch (answer){
        case 'a': {
            cout << "\tВведите фамилию:";
            cin.ignore();
            cin.getline(current->arr[*index].second_name, 30);
            cout << "\tВведите имя:";
            cin.getline(current->arr[*index].name, 30);
            cout << "\tВведите отчество:";
            cin.getline(current->arr[*index].third_name, 30);
            cout << "\tВведите дату рождения:";
            cin.getline(current->arr[*index].birth_date, 30);
            cout << "\tВведите номер паспорта:";
            cin >> current->arr[*index].pasport_number;
            cout << "\tВведите количество прочитаных книг:";
            cin >> current->arr[*index].readed_books_number;
            clearFile("Readers.txt");
            write_dater("Readers.txt", "w", *current, *current->size);
            break;
        }
        case 'b': {
            cout << "\tВведите фамилию:";
            cin.ignore();
            cin.getline(current->arr[*index].second_name, 30);
            clearFile("Readers.txt");
            write_dater("Readers.txt", "w", *current, *current->size);
            break;
        }
        case 'c':
            cout << "\tВведите имя:";
            cin.ignore();
            cin.getline(current->arr[*index].name, 30);
            clearFile("Readers.txt");
            write_dater("Readers.txt", "w", *current, *current->size);
            break;
        case 'd': {
            cout << "\tВведите отчество:";
            cin.ignore();
            cin.getline(current->arr[*index].third_name, 30);
            clearFile("Readers.txt");
            write_dater("Readers.txt", "w", *current, *current->size);
            break;
        }
        case 'e': {
            cout << "\tВведите дату рождения:";
            cin.ignore();
            cin.getline(current->arr[*index].birth_date, 30);
            clearFile("Readers.txt");
            write_dater("Readers.txt", "w", *current, *current->size);
            break;
        }
        case 'f':
            cout << "\tВведите номер паспорта:";
            cin >> current->arr[*index].pasport_number;
            clearFile("Readers.txt");
            write_dater("Readers.txt", "w", *current, *current->size);
            break;
        case 'g':
            cout << "\tВведите количество прочитаных книг:";
            cin >> current->arr[*index].readed_books_number;
            clearFile("Readers.txt");
            write_dater("Readers.txt", "w", *current, *current->size);
            break;
        default:
            printf("Чтото пошло не так!\n");
    }
    delete index;
}
//сортирует по фамилии
void sorting_by_second_name(Reader *&arr, int num) {
    Reader tmp;
    for (int i = 0; i < num - 1; i++)
        for (int j = i + 1; j < num; j++)
            if (strcmp(arr[i].second_name, arr[j].second_name) > 0) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}
//сортирует по имени
void sorting_by_name(Reader *&arr, int num) {
    Reader tmp;
    for (int i = 0; i < num - 1; i++)
        for (int j = i + 1; j < num; j++)
            if (strcmp(arr[i].name, arr[j].name) > 0) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}
//сортирует по отчеству
void sorting_by_third_name(Reader *&arr, int num) {
    Reader tmp;
    for (int i = 0; i < num - 1; i++)
        for (int j = i + 1; j < num; j++)
            if (strcmp(arr[i].third_name, arr[j].third_name) > 0) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}
//поиск по ФИО
void searching_by_FIO(Reader *&arr, int num, char name[30], char second_name[30], char third_name[30]) {
    int mid = (num - 1) / 2;
    int counter = 0;
    for (int i = 0, j = mid; i < mid; i++, j++) {
        if (strcmp(arr[i].second_name, second_name) == 0) {
            if (strcmp(arr[i].name, name) == 0 && strcmp(arr[i].third_name, third_name) == 0) {
                show_element(arr[i]);
                counter++;
            }
        }
        if (strcmp(arr[j].second_name, second_name) == 0) {
            if (strcmp(arr[j].name, name) == 0 && strcmp(arr[j].third_name, third_name) == 0) {
                show_element(arr[j]);
                counter++;
            }
        }
    }
    if (counter == 0)
        cout << "We have not this reader, sorry(";
}
//сортирует по количеству прочитаных книг
void sorting_by_raded_bnum(Reader *&arr, int num) {
    Reader tmp;
    for (int i = num - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j].readed_books_number < arr[j + 1].readed_books_number) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
//поиск по количеству прочитаных книг
void searching_by_raded_bnum(Reader *&arr, int num, int readed_num) {
    int low = 0;
    int high = num - 1;
    sorting_by_raded_bnum(arr, num);
    int mid = (low + high) / 2;
    if (readed_num == arr[mid].readed_books_number) {
        show_element(arr[mid]);
    } else if (readed_num > arr[mid].readed_books_number) {
        low = mid + 1;
        for (int i = low; i < high; i++) {
            if (arr[i].readed_books_number == readed_num) {
                show_element(arr[i]);
            }
        }
    } else {
        high = mid - 1;
        for (int i = low; i < high; i++) {
            if (arr[i].readed_books_number == readed_num) {
                show_element(arr[i]);
            }
        }
    }
}
//сортировка по ID читателя
void sorting_by_ID(Reader *&arr, int num) {
    Reader tmp;
    for (int i = num - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j].ID > arr[j + 1].ID) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
//поиск по ID читателя
int searching_by_readerID(Reader *&arr, int num, int ID) {
    int low = 0;
    int high = num - 1;
    sorting_by_ID(arr, num);
    int mid = (low + high) / 2;
    if (ID == arr[mid].ID) {
        return mid;
    } else if (ID > arr[mid].ID) {
        low = mid + 1;
        for (int i = low; i <= high; i++) {
            if (arr[i].ID == ID) {
                return i;
            }
        }
    } else {
        high = mid - 1;
        for (int i = low; i <= high; i++) {
            if (arr[i].ID == ID) {
                return i;
            }
        }
    }
}
//сортировка по номеру паспорта
void sorting_by_pas_num(Reader *&arr, int num) {
    Reader tmp;
    for (int i = num - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j].pasport_number > arr[j + 1].pasport_number) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
//поиск по номеру паспорта
void searching_by_pas_num(Reader *&arr, int num, int pasp_num) {
    int low = 0;
    int high = num - 1;
    sorting_by_raded_bnum(arr, num);
    int mid = (low + high) / 2;
    if (pasp_num == arr[mid].pasport_number) {
        show_element(arr[mid]);
    } else if (pasp_num > arr[mid].pasport_number) {
        low = mid + 1;
        for (int i = low; i <= high; i++) {
            if (arr[i].pasport_number == pasp_num) {
                show_element(arr[i]);
            }
        }
    } else {
        high = mid - 1;
        for (int i = low; i <= high; i++) {
            if (arr[i].pasport_number == pasp_num) {
                show_element(arr[i]);
            }
        }
    }
}
//показывает топ активных читателей
void show_by_reader_activity(Reader *&arr, int num, int count) {
    sorting_by_raded_bnum(arr, num);
    for (int i = 0; i < count; i++) {
        show_element(arr[i]);
    }


}
//выводит елемент
void show_element(Reader arr) {
    cout << "\tФамилия: " << arr.second_name << endl;
    cout << "\tИмя: " << arr.name << endl;
    cout << "\tОтчество: " << arr.third_name << endl;
    cout << "\tДата рождения: " << arr.birth_date << endl;
    cout << "\tНомер паспорта " << arr.pasport_number << endl;
    cout << "\tКоличество прочитаных книг: " << arr.readed_books_number << endl;
    cout << "\tID: " << arr.ID << endl;
    cout << "\t////////////////////\n";
}

//Записывает данные в файл тхт
void write_dater(const char *way, const char *mode, const Group &one, int size) {
    FILE *file = fopen(way, mode);
    for (int i = 0; i < size; i++) {
        fprintf(file, "%s %s %s %s %d %d %d", one.arr[i].second_name,
                one.arr[i].name, one.arr[i].third_name,
                one.arr[i].birth_date, one.arr[i].pasport_number, one.arr[i].ID, one.arr[i].readed_books_number);
        fprintf(file, "\n");
    }
    fclose(file);
}

//Считывает данные с файла тхт
void read_datar(const char *way, const char *mode, const Group &one, int size) {
    FILE *file = fopen(way, mode);
    for (int i = 0; i < size; i++) {
        fscanf(file, "%s %s %s %s %d %d %d \n", &one.arr[i].second_name,
               &one.arr[i].name, &one.arr[i].third_name,
               &one.arr[i].birth_date, &one.arr[i].pasport_number, &one.arr[i].ID, &one.arr[i].readed_books_number);

    }
    fclose(file);
}

//Создает динамический масив Архив указаного размера
Group *creatdar(int new_size) {
    Group *temp = new Group[new_size];
    return temp;
}

//Чистит память
void delda(Group *&arr) {
    delete[] arr;
    arr = nullptr;
}