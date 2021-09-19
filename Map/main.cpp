#include <iostream>
#include <map>
using namespace std;
class Dictionary{
public:
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
Dictionary a;
a.add_word("Hello","Privet");
a.searching();
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
