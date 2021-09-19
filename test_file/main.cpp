#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream stream;
    stream.exceptions(fstream::badbit);

    int choise;
    try
    {
        stream.open("text.txt", fstream::out | fstream::in | fstream::app);
        cin >> choise;
        cin.ignore();
        string msg;

        switch (choise)
        {
            case 1:
                while (!stream.eof())
                {
                    getline(stream, msg);
                    cout << msg << endl;
                }
                break;
            case 2:
                cout << "Writing file... " << endl;
                cout << "Enter data:" << endl;
                getline(cin, msg);
                stream << msg;
                break;
        }
        stream.close();
    }
    catch (const exception& ex)
    {
        cout << ex.what() << endl;
    }
    return 0;
}

