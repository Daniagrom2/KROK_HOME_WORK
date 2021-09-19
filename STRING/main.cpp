#include <iostream>
using namespace std;
class String {
public:
    String(const char* str) {
        this->len = strlen(str);
        this->str = new char[len + 1];
        strcpy(this->str, str);
    }
    char* get_string() {
        return this->str;
    }

    int length() {
        return this->len;
    }

    void concat(const char* str) {
        this->len += strlen(str);
        char *tmp = new char[this->len + 1];
        strcat(strcpy(tmp,this->str), str);
        delete[] this->str;
        this->str = tmp;
    }
    int find(char a){
        for (int i = 0; i < len; i++) {
            if(str[i] == a)
                return i;
        }
        return -1;
    }
void mashtab(int count){
       char *tmp = new char[len*count+1];
       strcpy(tmp,str);
    for (int i = 0; i < count; i++) {
        strcat(tmp,str);
    }
    len *=3 ;
    delete[] str;
   str = tmp;

    }
void add_suml(int count,char sym){
char sym2[1];
sym2[0] = sym;
    char *tmp = new char[len+count+1];
    strcpy(tmp,str);
    for (int i = 0; i < count; i++) {
        strcat(tmp,sym2);
    }
str = tmp;
    };
    ~String() {
        delete[] str;
    }
private:
    char* str;
    int len;
};

int main() {
   String str("Hello");
//   str.mashtab(4);
str.add_suml(4,'a');
   cout<<str.get_string()<<endl;
//  cout<< str.find('l');
    return 0;
}
