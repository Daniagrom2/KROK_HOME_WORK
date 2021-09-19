//
// Created by Kolodii Daniil on 31.05.2021.
//
#pragma once

#include "Book.h"

//Добавление новой книги
void add_book(Archiv *&one) {
    one = add_book_boof(one);
    cout << "\tВведите дату написания:";
    cin >> one->arr[*one->size - 1].dataOfBirth;
    cout << "\tВведите название:";
    cin.ignore();
    cin.getline(one->arr[*one->size - 1].name, 30);
    cout << "\tВведите автора:";
    cin.getline(one->arr[*one->size - 1].author, 30);
    cout << "\tВведите жанр:";
    cin.getline(one->arr[*one->size - 1].genre, 30);
    cout << "\tВведите цену:";
    cin >> one->arr[*one->size - 1].price;
    cout << "\tВведите рейтинг:";
    cin >> one->arr[*one->size - 1].reting;
    one->arr[*one->size - 1].ID = *one->size;
    cout << "\tВведите статус книги:";
    cin >> one->arr[*one->size - 1].on_hand;
    clearFile("Books.txt");
    write_date("Books.txt", "w", *one, *one->size);

}

//Удаление книги
void delete_book(Archiv *&one, int ID, int num) {
    int *index = new int;
    *index = search_by_ID(num, one->arr, ID);
    for (int i = *index; i < *one->size - 1; i++) {
        one->arr[i + 1].ID--;
        one->arr[i] = one->arr[i + 1];
    }
    *one->size -= 1;
    one->arr[*one->size].ID = *one->size;

    one = del_book_boof(one);
    clearFile("Books.txt");
    write_date("Books.txt", "w", *one, *one->size);
    delete index;
}

//Редактирование книги
void edit_book(Archiv *&one, int ID, int num) {
    int *index = new int;
    *index = search_by_ID(num, one->arr, ID);
    cout << "Что вы хотите поменять?\n";
    cout << "\t\ta)Все\n";
    cout << "\t\tb)Дату издания\n";
    cout << "\t\tc)Название\n";
    cout << "\t\td)Автора\n";
    cout << "\t\te)Жанр\n";
    cout << "\t\tf)Цену\n";
    cout << "\t\tg)Рейтинг\n";
    cout << "\t\tk)Статус книги\n";
    char answer;
    cout << "Введите:";
    cin >> answer;
    switch (answer) {
        case 'a': {
            cout << "\tВведите дату написания:";
            cin >> one->arr[*index].dataOfBirth;
            cout << "\tВведите название:";
            cin.ignore();
            cin.getline(one->arr[*index].name, 30);
            cout << "\tВведите автора:";
            cin.getline(one->arr[*index].author, 30);
            cout << "\tВведите жанр:";
            cin.getline(one->arr[*index].genre, 30);
            cout << "\tВведите цену:";
            cin >> one->arr[*index].price;
            cout << "\tВведите рейтинг:";
            cin >> one->arr[*index].reting;
            cout << "\tВведите статус книги:";
            cin >> one->arr[*index].on_hand;
            clearFile("Books.txt");
            write_date("Books.txt", "w", *one, *one->size);
            break;
        }
        case 'b': {
            cout << "\tВведите дату написания:";
            cin >> one->arr[*index].dataOfBirth;
            clearFile("Books.txt");
            write_date("Books.txt", "w", *one, *one->size);
            break;
        }
        case 'd': {
            cout << "\tВведите автора:";
            cin.ignore();
            cin.getline(one->arr[*index].author, 30);
            clearFile("Books.txt");
            write_date("Books.txt", "w", *one, *one->size);
            break;
        }
        case 'e': {
            cout << "\tВведите жанр:";
            cin.ignore();
            cin.getline(one->arr[*index].genre, 30);
            clearFile("Books.txt");
            write_date("Books.txt", "w", *one, *one->size);
            break;
        }
        case 'f':
            cout << "\tВведите цену:";
            cin >> one->arr[*index].price;
            clearFile("Books.txt");
            write_date("Books.txt", "w", *one, *one->size);
            break;
        case 'g':
            cout << "\tВведите рейтинг:";
            cin >> one->arr[*index].reting;
            clearFile("Books.txt");
            write_date("Books.txt", "w", *one, *one->size);
            break;
        case 'c':
            cout << "\tВведите название:";
            cin.ignore();
            cin.getline(one->arr[*index].name, 30);
            clearFile("Books.txt");
            write_date("Books.txt", "w", *one, *one->size);
            break;
        case 'k':
            cout << "\tВведите статус книги:";
            cin >> one->arr[*index].on_hand;
            clearFile("Books.txt");
            write_date("Books.txt", "w", *one, *one->size);
            break;
        default:
            printf("Чтото пошло не так!\n");
    }
    delete index;
}

//Поиск по автору
void search_by_author(Book *&arr, int num, char author[30]) {
    int mid = (num - 1) / 2;
    int counter = 0;
    for (int i = 0, j = mid; i < mid; i++, j++) {
        if (strcmp(arr[i].author, author) == 0) {
            show_element(arr[i]);
            counter++;
        }
        if (strcmp(arr[j].author, author) == 0) {
            show_element(arr[j]);
            counter++;
        }

    }
    if (counter == 0)
        cout << "We have not this author of book, sorry(";
}

//Сортировка по автору
void sorting_by_author(Book *&arr, int num) {
    Book tmp;
    for (int i = 0; i < num - 1; i++)
        for (int j = i + 1; j < num; j++)
            if (strcmp(arr[i].author, arr[j].author) > 0) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

//Поиск по имени
void search_by_name(Book *&arr, int num, char name[30]) {
    int mid = (num - 1) / 2;
    int counter = 0;
    for (int i = 0, j = mid; i < mid; i++, j++) {
        if (strcmp(arr[i].name, name) == 0) {
            show_element(arr[i]);
            counter++;
        }
        if (strcmp(arr[j].name, name) == 0) {
            show_element(arr[j]);
            counter++;
        }

    }
    if (counter == 0)
        cout << "We have not this name of book, sorry(";
}

//Сортировка по имени
void sorting_by_name(Book *&arr, int num) {
    Book tmp;
    for (int i = 0; i < num - 1; i++)
        for (int j = i + 1; j < num; j++)
            if (strcmp(arr[i].name, arr[j].name) > 0) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

//Поиск по жанру
void search_by_genre(Book *&arr, int num, char genre[30]) {
    int mid = (num - 1) / 2;
    int counter = 0;
    for (int i = 0, j = mid; i < mid; i++, j++) {
        if (strcmp(arr[i].genre, genre) == 0) {
            show_element(arr[i]);
            counter++;
        }
        if (strcmp(arr[j].genre, genre) == 0) {
            show_element(arr[j]);
            counter++;
        }

    }
    if (counter == 0)
        cout << "We have not this genre of book, sorry(";
}

//Сортировка по жанру
void sorting_by_genre(Book *&arr, int num) {
    Book tmp;
    for (int i = 0; i < num - 1; i++)
        for (int j = i + 1; j < num; j++)
            if (strcmp(arr[i].genre, arr[j].genre) > 0) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

//Поиск по ретингу
void search_by_reting(int num, Book *&arr, float reting) {
    int low = 0;
    int high = num - 1;
    sorting_by_ID(arr, num);
    int mid = (low + high) / 2;
    if (reting == arr[mid].reting) {
        show_element(arr[mid]);
    } else if (reting > arr[mid].reting) {
        low = mid + 1;
        for (int i = low; i <= high; i++) {
            if (arr[i].reting == reting) {
                show_element(arr[i]);
            }
        }
    } else {
        high = mid - 1;
        for (int i = low; i <= high; i++) {
            if (arr[i].reting == reting) {
                show_element(arr[i]);
            }
        }
    }
}

//Сортировка по ретингу
void sorting_by_reting(Book *&arr, int num) {
    Book tmp;
    for (int i = num - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j].reting < arr[j + 1].reting) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

//Поиск по ID
int search_by_ID(int num, Book *&arr, int ID) {
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

//Сортировка по ID
void sorting_by_ID(Book *&arr, int num) {
    Book tmp;
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

//Сортировка по ID
void sorting_by_ID(Hand *&arr, int num) {
    Hand tmp;
    for (int i = num - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j].ID_of_Book > arr[j + 1].ID_of_Book) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

}

//Поиск по ID
int search_by_ID(int num, Hand *&arr, int ID) {
    int low = 0;
    int high = num - 1;
    sorting_by_ID(arr, num);
    int mid = (low + high) / 2;
    if (ID == arr[mid].ID_of_Book) {
        return mid;
    } else if (ID > arr[mid].ID_of_Book) {
        low = mid + 1;
        for (int i = low; i <= high; i++) {
            if (arr[i].ID_of_Book == ID) {
                return i;
            }
        }
    } else {
        high = mid - 1;
        for (int i = low; i <= high; i++) {
            if (arr[i].ID_of_Book == ID) {
                return i;
            }
        }
    }
}

//Выдача книг
void vidacha_book(Archiv *&one, ARR_ofHand *&book_on_hands) {
    if (*book_on_hands->size != 1)
        *book_on_hands->size += 1;

    cout << "Введите год выдачи:";
    cin >> book_on_hands->arr[*book_on_hands->size - 1].get->year;
    cout << "Введите месяц выдачи(цыфрами):";
    cin >> book_on_hands->arr[*book_on_hands->size - 1].get->month;
    cout << "Введите день выдачи(цыфрами):";
    cin >> book_on_hands->arr[*book_on_hands->size - 1].get->day;
    cout << "Введите ID книги:";
    cin >> book_on_hands->arr[*book_on_hands->size - 1].ID_of_Book;
    cout << "Введите ID читателя:";
    cin >> book_on_hands->arr[*book_on_hands->size - 1].reader_ID;
    cout << endl << endl;
    one->arr[search_by_ID(*one->size, one->arr,
                          book_on_hands->arr[*book_on_hands->size - 1].ID_of_Book)].on_hand = true;
    clearFile("Books.txt");
    write_date("Books.txt", "w", *one, *one->size);


}

//Возврат книг
void vozvrat_book(Archiv *&one, int book_id, ARR_ofHand *&book_on_hands, Data Today) {

    if (*book_on_hands->size != 0) {
        one->arr[search_by_ID(*one->size, one->arr, book_id)].on_hand = false;
        int index = search_by_ID(*book_on_hands->size, book_on_hands->arr, book_id);
        clearFile("Books.txt");
        write_date("Books.txt", "w", *one, *one->size);
        if ((book_on_hands->arr[index].get->year * 365 +
             book_on_hands->arr[index].get->month * 30 +
             book_on_hands->arr[index].get->day + 14) <
            (Today.year * 365 + Today.month * 30 + Today.day)) {
            cout << "Штраф за проскрочку:"
                 << ((Today.year * 365 + Today.month * 30 + Today.day) - (book_on_hands->arr[index].get->year * 365 +
                                                                          book_on_hands->arr[index].get->month * 30 +
                                                                          book_on_hands->arr[index].get->day + 14))
                    * 10 << endl;
        }
//        for (int i = 0; i < *book_on_hands->size; i++) {
//            if (book_on_hands->arr[i].ID_of_Book = book_id)
//            grup->arr[searching_by_readerID(grup->arr,*grup->size,book_on_hands->arr[i].reader_ID)].readed_books_number+=1;
//            clearFile("Readers.txt");
//            write_dater("Readers.txt", "w", *grup, *grup->size);

//        }


        if (*book_on_hands->size == 1) {

        } else {
            ARR_ofHand *temp;
            temp = nullptr;
            *temp->size = *book_on_hands->size - 1;
            for (int i = 0; i < *temp->size; i++) {
                if (book_on_hands->arr[i].ID_of_Book != book_id) {
                    temp->arr[i] = book_on_hands->arr[i];
                }

            }
            delete[] book_on_hands;
            book_on_hands = nullptr;
            book_on_hands = temp;
        }

    } else {
        cout << "На руках ни одной книги.\n";
    }


}

//Выводит информацию о популярных книгах
void showInformationAboutPopular(Book *&arr, int num, int count) {
    sorting_by_reting(arr, num);
    for (int i = 0; i < count; i++) {
        cout << "Дата написания:" << arr[i].dataOfBirth << endl;
        cout << "Название:" << arr[i].name << endl;
        cout << "Автор:" << arr[i].author << endl;
        cout << "Жанр:" << arr[i].genre << endl;
        cout << "Цена:" << arr[i].price << endl;
        cout << "Рейтинг:" << arr[i].reting << endl;
        cout << "ID:" << arr[i].ID << endl;
        cout << "Статус:" << arr[i].on_hand << endl;
        cout << "////////////////////\n";

    }
}

//Выводит информацию о книгах на руках у людей
void showInformationAboutBooksOnHand(Book *&arr, int num) {
    int counter = 0;
    for (int i = 0; i < num; i++) {
        if (arr[i].on_hand == true) {
            show_element(arr[i]);
            counter++;
        }
    }
    if (counter == 0)
        cout << "Все книги в библиотеке.\n";

}

//Выводит елемент
void show_element(Book arr) {
    cout << "\tДата издания: " << arr.dataOfBirth << endl;
    cout << "\tНазвание: " << arr.name << endl;
    cout << "\tАвтор: " << arr.author << endl;
    cout << "\tЖанр: " << arr.genre << endl;
    cout << "\tЦена " << arr.price << endl;
    cout << "\tРейтинг: " << arr.reting << endl;
    cout << "\tID: " << arr.ID << endl;
    if (arr.on_hand == true) {
        cout << "\tСтатус: На руках" << endl;
    } else {
        cout << "\tСтатус: В библиотеке" << endl;
    }
    cout << "\t////////////////////\n";
}

//Создает динамический масив Архив указаного размера
Archiv *creatda(int new_size) {
    Archiv *temp = new Archiv[new_size];
    return temp;
}

//Чистит память
void delda(Archiv *&arr) {
    delete[] arr;
    arr = nullptr;
}

//Копирует уже очищенный старый масив в новый и удаляет старый
Archiv *del_book_boof(Archiv *&one) {
    Archiv *temp = nullptr;
    temp = creatda(*one->size);
    *temp->size = *one->size;

    for (int i = 0; i < *one->size; i++) {
        temp->arr[i] = one->arr[i];
    }
    delda(one);
    return temp;
}

Archiv *add_book_boof(Archiv *&one) {
    Archiv *temp = nullptr;
    *one->size += 1;
    temp = creatda(*one->size);
    *temp->size = *one->size;

    for (int i = 0; i < *one->size; i++) {
        temp->arr[i].reting = one->arr[i].reting;
        strcpy(temp->arr[i].author, one->arr[i].author);
        strcpy(temp->arr[i].name, one->arr[i].name);
        strcpy(temp->arr[i].dataOfBirth, one->arr[i].dataOfBirth);
        strcpy(temp->arr[i].genre, one->arr[i].genre);
        temp->arr[i].price = one->arr[i].price;
        temp->arr[i].ID = one->arr[i].ID;
        temp->arr[i].on_hand = one->arr[i].on_hand;
    }
    delda(one);
    return temp;
}

//Очищает тхт файлик
void clearFile(const char way[255]) {
    FILE *file = fopen(way, "w");
    fclose(file);
}

//Выводит все елементы
void show_all_elements(Archiv one) {
    for (int i = 0; i < *one.size; i++) {
        show_element(one.arr[i]);
    }
}

//Записывает данные в файл тхт
void write_date(const char *way, const char *mode, const Archiv &one, int size) {
    FILE *file = fopen(way, mode);
    for (int i = 0; i < size; i++) {
        fprintf(file, "%s %s# %s# %3s %d %f %d %d", one.arr[i].dataOfBirth,
                one.arr[i].name, one.arr[i].author,
                one.arr[i].genre, one.arr[i].price, one.arr[i].reting, one.arr[i].ID, one.arr[i].on_hand);
        fprintf(file, "\n");
    }
    fclose(file);
}

//Считывает данные с файла тхт
void read_data(const char *way, const char *mode, const Archiv &one, int size) {
    FILE *file = fopen(way, mode);
    for (int i = 0; i < size; i++) {
        fscanf(file, "%s %40[^#]# %40[^#]# %30[^ ] %d %f %d %d \n", &one.arr[i].dataOfBirth,
               &one.arr[i].name, &one.arr[i].author,
               &one.arr[i].genre, &one.arr[i].price, &one.arr[i].reting, &one.arr[i].ID, &one.arr[i].on_hand);

    }
    fclose(file);
}

