#include <iostream>
using namespace std;
int main() {
FILE* file = fopen("test.txt","w");
char tmp[] = "Здраствуй, мир!";
    fputs(tmp,file);
    fputc('\n',file);

fclose(file);
    return 0;
}
