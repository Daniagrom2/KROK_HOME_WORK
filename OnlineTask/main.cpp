#include <iostream>

using namespace std;

struct Movie {
public:
    string name;
    string ganr;
    string regiser;
    float reting;
    float price;
};
int size = 5;
struct Shop {

    Movie *arr = new Movie[size];
};

void vivod(Movie &m);

void searching_name(Shop &m, string in_name);

void searching_ganr(Shop &m, string in_ganr);

void searching_regiser(Shop &m, string in_regiser);

void best_film_in_ganr(Shop &m, string ganr);

void show_all(Shop &m);

Movie *creatda(int new_size);

Movie *add_new_movie(Movie *&arr, int size);

void *delda(Movie *&arr);

void write_date(const char *way, const char *mode, const Shop &one, int size);

void read_data(const char *way, const char *mode, const Shop &one, int size);

int main() {
    Shop *one = new Shop;
    Shop *two = new Shop;
    one->arr[0].name = "Hobbit";
    one->arr[0].ganr = "Fantasy";
    one->arr[0].regiser = "Jackson";
    one->arr[0].reting = 10.0;
    one->arr[0].price = 15.99;
    ////////////////////////
    one->arr[1].name = "Gnom";
    one->arr[1].ganr = "Fantasy";
    one->arr[1].regiser = "Jack";
    one->arr[1].reting = 7.0;
    one->arr[1].price = 10.99;
    /////////////////////////
    one->arr[2].name = "Lord";
    one->arr[2].ganr = "Hostorical";
    one->arr[2].regiser = "Tim";
    one->arr[2].reting = 9.1;
    one->arr[2].price = 16.20;
    //////////////////////////////
    one->arr[3].name = "Ninja";
    one->arr[3].ganr = "Horor";
    one->arr[3].regiser = "Peter";
    one->arr[3].reting = 5.6;
    one->arr[3].price = 11.0;
    ///////////////////////////
    one->arr[4].name = "Speed";
    one->arr[4].ganr = "Comedy";
    one->arr[4].regiser = "Dimon";
    one->arr[4].reting = 5.5;
    one->arr[4].price = 5.99;
    ///////////////////////////
    read_data("text.txt", "r", *two, size);

    char answer;
    string yesno;
    do {
        printf(" Введите что вы хотите сдлеать?\n");
        printf("\t\ta)Поиск по имени.\n");
        printf("\t\tb)Поиск по жанру.\n");
        printf("\t\tc)Поиск по режисеру.\n");
        printf("\t\td)Самый популярный фильм в жанре.\n");
        printf("\t\te)Показать все фильмы.\n");
        printf("\t\tg)Добавить новый фильм.\n");
        printf("\t\tj)Вписать данные в файл.\n");
        printf("\t\tk)Считать данные с файла.\n");
        printf("Enter:");
        scanf("%s", &answer);
        switch (answer) {
            case 'a': {
                printf("Enter name for searching:");
                string in_name;
                scanf("%s", &in_name);
                searching_name(*one, in_name);
                break;
            }
            case 'b': {
                string in_ganr;
                printf("Enter ganr for searching:");
                scanf("%s", &in_ganr);
                searching_ganr(*one, in_ganr);
                break;
            }
            case 'c': {
                string in_regiser;
                printf("Enter ganr for searching:");
                scanf("%s", &in_regiser);
                searching_regiser(*one, in_regiser);
                break;
            }
            case 'd': {
                string in_ganr;
                printf("Enter ganr :");
                scanf("%s", &in_ganr);
                best_film_in_ganr(*one, in_ganr);
                break;
            }
            case 'e':
                show_all(*one);
                break;
            case 'g':
                one->arr = add_new_movie(one->arr, size);
                printf("Enter movie name:");
                scanf("%s", one->arr[size - 1].name.cbegin());
                printf("Enter movie ganr:");
                scanf("%s", one->arr[size - 1].ganr.cbegin());
                printf("Enter movie regiser:");
                scanf("%s", one->arr[size - 1].regiser.cbegin());
                printf("Enter movie rating:");
                scanf("%f", &one->arr[size - 1].reting);
                printf("Enter movie price:");
                scanf("%f", &one->arr[size - 1].price);
                break;
            case 'j':
                write_date("text.txt", "w", *one, size);
                break;
            case 'k':
                read_data("text.txt", "r", *one, size);
                break;
            default:
                printf("Something go wrong!");

        }
        printf("Do you want do something else? Yes/No\nEnter:");
        scanf("%s", &yesno);
    } while (yesno != "No");
    delete[] two->arr;
    delete two;
    delete[] one->arr;
    delete one;

}

void searching_name(Shop &m, string in_name) {
    int index = 0;
    int counter = 0;
    for (int i = 0; i < 5; i++) {
        if (m.arr[i].name == in_name) {
            index = i;
            counter++;
        }
    }
    if (counter == 1)
        vivod(m.arr[index]);
    else if (counter == 0)
        printf("We have not this movie, sorry(");
    else
        for (int j = 0; j < size; j++) {
            if (m.arr[j].name == in_name)
                vivod(m.arr[j]);
        }


}

void searching_ganr(Shop &m, string in_ganr) {
    int index = 0;
    int counter = 0;
    for (int i = 0; i < 5; i++) {
        if (m.arr[i].name == in_ganr) {
            index = i;
            counter++;

        }
    }
    if (counter == 1)
        vivod(m.arr[index]);
    else if (counter == 0)
        printf("We have not this ganr, sorry(");
    else
        for (int j = 0; j < size; j++) {
            if (m.arr[j].ganr == in_ganr)
                vivod(m.arr[j]);
        }

}

void searching_regiser(Shop &m, string in_regiser) {
    int index = 0;
    int counter = 0;
    for (int i = 0; i < 5; i++) {
        if (m.arr[i].regiser == in_regiser) {
            index = i;
            counter++;
        }
    }
    if (counter == 1)
        vivod(m.arr[index]);
    else if (counter == 0)
        printf("We have not this regiser, sorry(");
    else
        for (int j = 0; j < size; j++) {
            if (m.arr[j].regiser == in_regiser)
                vivod(m.arr[j]);
        }
}

void vivod(Movie &m) {
    printf("/////////////////////\n");
    printf("Name:%s\n", &m.name);
    printf("Ganr:%s\n", &m.ganr);
    printf("Regiser:%s\n", &m.regiser);
    printf("Reting:%f\n", m.reting);
    printf("Price:%f\n", m.price);
    printf("/////////////////////\n");
}

void show_all(Shop &m) {
    for (int i = 0; i < size; i++) {
        vivod(m.arr[i]);
    }
}

Movie *creatda(int new_size) {
    Movie *temp = new Movie[new_size];

    return temp;
}

void *delda(Movie *&arr) {
    delete[] arr;
    arr = nullptr;
}

Movie *add_new_movie(Movie *&arr, int size1) {
    Movie *temp = nullptr;
    temp = creatda(size1 + 1);

    for (int i = 0; i < size1; i++) {
        temp[i] = arr[i];
    }
    size++;
    delda(arr);
    return temp;
}

void best_film_in_ganr(Shop &m, string ganr) {
    int index = 0;
    double max = m.arr[0].reting;
    for (int i = 0; i < size; i++) {
        if (max < m.arr[i].reting) {
            max = m.arr[i].reting;
            index = i;
        }
    }
    vivod(m.arr[index]);
}

void write_date(const char *way, const char *mode, const Shop &one, int size){
    FILE *file = fopen(way, mode);
    for (int i = 0; i < size; i++) {
        fprintf(file, "%s %s %s %f %f", one.arr[i].name.cbegin(),
                one.arr[i].ganr.cbegin(), one.arr[i].regiser.cbegin(),
                one.arr[i].reting, one.arr[i].price);
        fprintf(file, "\n");
    }
    fclose(file);
}

void read_data(const char *way, const char *mode, const Shop &one, int size) {
    FILE *file = fopen(way, mode);
    for (int i = 0; i < size; i++) {
        fscanf(file, "%s %s %s %f %f \n", &one.arr[i].name,
               &one.arr[i].ganr, &one.arr[i].regiser,
               &one.arr[i].reting, &one.arr[i].price);

    }
    fclose(file);
}