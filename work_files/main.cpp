#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//
//using namespace std;
//int count_line_file(FILE* file){
//    rewind(file);
//    int count = 0;
//    char buf[255];
//    while(fgets(buf,255,file)){
//        count++;
//
//    }
//            rewind(file);
//    return count;
//}
//int main() {
//FILE* file = fopen("test.txt","w");
//char tmp[] = "Hello";
//    for (int i = 0; i < strlen(tmp); i++) {
//        fputc(tmp[i],file);
//    }
//
//fclose(file);
//    FILE *file = fopen("test.txt", "r");
//    char ch;
//    while ((ch = fgetc(file)) != EOF) {
//        cout << ch;
//    }
//    fclose(file);
////////////
//FILE* file = fopen("test.txt","w");
//char tmp[] = "Hello";
//    fputs(tmp,file);
//    fputc('\n',file);
//
//fclose(file);
//////////////
//    FILE *file = fopen("test.txt", "r");
//    char buf[255];
//    char buf2[255];
//   fgets(buf,255,file);
//   cout<<buf<<endl;
//    fgets(buf2,5,file);
//    cout<<buf2<<endl;
//    fclose(file);
/////////////////
//    FILE *file = fopen("test.txt", "r");
//    char ch;
//    while (fgets(buf,255,file)) {
//        cout << buf;
//    }
//    fclose(file);
////////////////
    FILE *file = fopen("test.txt", "r");
    if (file != NULL){
        cout<<count_line_file(file);
        fclose(file);
    }else{
        cout<<"File not found";
    }




    return 0;
}
