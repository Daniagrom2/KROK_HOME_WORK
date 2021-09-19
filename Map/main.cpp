#include <iostream>
#include <map>
#include <ostream>
#include <fstream>
using namespace std;
class Dictionary{
public:
    void save_to_file(string path);
    void download_from_file(string path);
    void add_by_hand();
    void remove_word(string);
    void editing();
    void remove_word_by_hand();
    void searching();
    void add_word(string,string);
    map<string, string>  get_map(){
        return dictionary;
    }
private:
    map <string, string> dictionary{{"Hello","Привет"}};
};



int main() {
    return 0;
}
void Dictionary::add_word(string key, string value) {
    dictionary[key] = value;
}

void Dictionary::add_by_hand() {
    string key;
    string value;
    cin.ignore();
    cout<<"Enter english word: ";
    getline(cin,key);
    cout<<"Enter russian word: ";
    getline(cin,value);
    dictionary[key] = value;
}

void Dictionary::remove_word(string key) {
dictionary.erase(key);
}

void Dictionary::remove_word_by_hand() {
    string key;
    cout<<"Enter english word for removing: ";
    cin.ignore();
    getline(cin,key);
    dictionary.erase(key);
}

void Dictionary::editing() {
    string key;
    string value;
    cout<<"Enter english word for editing: ";
    cin.ignore();
    getline(cin,key);
 remove_word(key);
    cout<<"Enter russian word: ";
    cin.ignore();
    getline(cin,key);
 add_word(key,value);

}

void Dictionary::searching() {
    string key;
    cout<<"Enter english word for searching: ";
    getline(cin,key);
    for (auto i:dictionary) {
        if(i.first == key)
            cout<<i.first<<" -->"<<i.second<<endl;
    }
}
void Dictionary::save_to_file(string path){
    ofstream f;
    f.open(path,ofstream::app);
    if(f.is_open()){
        for (auto i:dictionary) {
            f<<i.first<< '\n';
            f<<i.second<< '\n';
        }
    }else{
        cout<<"Can^t open stream!!"<<endl;
    }
    f.close();
}
void Dictionary::download_from_file(string path){
    ifstream f;
    f.open(path);
    if(f.is_open()){
        string key;
        string value;
        for (auto i:dictionary) {
            getline(f,key);
            if(key != "") {
                getline(f,value);
                add_word(key,value);
            }
            }
        }
else{
        cout<<"Can^t open stream!!"<<endl;
    }

    f.close();
}