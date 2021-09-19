#include <iostream>
using namespace std;
int main() {
    FILE* file = fopen("test.txt","w");
    char buf[255];

    for (int i = 0; i < 6; i++) {
        cin>>buf;
        fputs(buf,file);
        fputc('\n',file);
    }
    fclose(file);
    return 0;
}
