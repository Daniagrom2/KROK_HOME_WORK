////////1//////////
//#include <iostream>
//using namespace std;
//int main() {
//    FILE* file = fopen("test.txt","w");
//    char tmp[] = "Здраствуй, мир!";
//    fputs(tmp,file);
//    fputc('\n',file);
//
//    fclose(file);
//    return 0;
//}
/////////2////////
//#include <iostream>
//using namespace std;
//int main() {
//    FILE* file = fopen("test.txt","w");
//    char buf[255];
//
//    for (int i = 0; i < 6; i++) {
//        cin>>buf;
//        fputs(buf,file);
//        fputc('\n',file);
//    }
//    fclose(file);
//    return 0;
//}
////////3/////////
//#include <iostream>
//using namespace std;
//int main() {
//    FILE* file = fopen("test.txt","w");
//    char arr[3][20]{
//            "Hello,",
//            "I am",
//            "Danik."
//    };
//
//    for (int i = 0; i < 3; i++) {
//        fputs(arr[i],file);
//   fputc('\n',file);
//    }
//    fclose(file);
//    return 0;
//}
/////////4///////////

//#include <iostream>
//using namespace std;
//int main() {
//FILE* file = fopen("test.txt", "a+");
//fputs("До свидания, люди!", file);
//    return 0;
//}

////////5//////////
//#include <iostream>
//using namespace std;
//int main() {
//FILE* file = fopen("test.txt", "r");
//    rewind(file);
//    int count = 0;
//    char buf[255];
//    while (fgets(buf, 255, file))
//    {
//        count++;
//    }
//    rewind(file);
//    cout << count << endl;
//    return 0;
//}
///////6//////////
//#include <iostream>
//using namespace std;
//int main() {
//    FILE* file = fopen("test.txt", "r");
//    rewind(file);
//    int count = 0;
//    while (getc(file) != EOF)
//    {
//        count++;
//    }
//    rewind(file);
//    cout << count << endl;
//    return 0;
//}
////////7///////////
//#include <iostream>
//using namespace std;
//int main() {
//    FILE *file = fopen("test.txt", "r");
//    rewind(file);
//    int count = 0;
//    char buf[255];
//    while (fgets(buf, 255, file)) {
//        count++;
//    }
//    char buf2[255];
//    rewind(file);
//    for (int i = 1; i <= count; i++) {
//        fgets(buf2, 255, file);
//
//        cout << "In " << i << " line you have " << strlen(buf2) << "symbols" << endl;
//    }
//    return 0;
//}
/////////8///////
//#include <iostream>
//
//using namespace std;
//
//char **create(int n) {
//    char **M = new char *[n];
//    for (int i = 0; i < n; ++i) {
//        M[i] = new char[255];
//    }
//    return M;
//}
//
//void del_line(FILE *file, const char destination_file[255]) {
//    int lines = 4;
//    rewind(file);
//    char **buff = create(lines - 1);
//    char del[255];
//    FILE *file2 = fopen(destination_file, "w");
//
//    for (int i = 0; i < 2; i++) {
//        fgets(buff[i], 255, file);
//    }
//    fgets(del, 255, file);
//
//    for (int i = 2; i < lines - 1; i++) {
//        fgets(buff[i], 255, file);
//    }
//
//    for (int i = 0; i < lines - 1; i++) {
//        fputs(buff[i], file2);
//    }
//
//
//    fclose(file2);
//}
//
//int main() {
//    FILE *file = fopen("test.txt", "r");
//del_line(file,"test2.txt");
//    return 0;
//}
////////9///////////
//#include <iostream>
//
//using namespace std;
//
//char **create(int n) {
//    char **ar = new char *[n];
//    for (int i = 0; i < n; ++i) {
//        ar[i] = new char[255];
//    }
//    return ar;
//}
//
//void del_line(FILE *file, const char destination_file[255],int line) {
//    int lines = line;
//    rewind(file);
//    char** buff = create(lines - 1);
//    char del[255];
//    FILE* file2 = fopen(destination_file, "w");
//
//    for (int i = 0; i < line - 1; i++)
//    {
//        fgets(buff[i], 255, file);
//    }
//    fgets(del, 255, file);
//
//    for (int i = line - 1; i < lines - 1; i++)
//    {
//        fgets(buff[i], 255, file);
//    }
//
//    for (int i = 0; i < lines - 1; i++)
//    {
//        fputs(buff[i], file2);
//    }
//
//
//    fclose(file2);
//}
//
//int main() {
//    FILE *file = fopen("test.txt", "r");
//    rewind(file);
//    int count = 0;
//    char buf[255];
//    while (fgets(buf, 255, file))
//    {
//        count++;
//    }
//    rewind(file);
//    del_line(file,"test2.txt",count);
//    return 0;
//}
//////10//////
//#include <iostream>
//
//using namespace std;
//
//char **create(int n) {
//    char **ar = new char *[n];
//    for (int i = 0; i < n; ++i) {
//        ar[i] = new char[255];
//    }
//    return ar;
//}
//
//void del_line(FILE *file, const char destination_file[255],int line) {
//    int lines = line;
//    rewind(file);
//    char** buff = create(lines - 1);
//    char del[255];
//    FILE* file2 = fopen(destination_file, "w");
//
//    for (int i = 0; i < line - 1; i++)
//    {
//        fgets(buff[i], 255, file);
//    }
//    fgets(del, 255, file);
//
//    for (int i = line - 1; i < lines - 1; i++)
//    {
//        fgets(buff[i], 255, file);
//    }
//
//    for (int i = 0; i < lines - 1; i++)
//    {
//        fputs(buff[i], file2);
//    }
//
//
//    fclose(file2);
//}
//
//int lineWithSym(FILE* file, char sb)
//{
//    int row_num = 1;
//    char buff = '\0';
//    while (buff != sb)
//    {
//        buff = getc(file);
//        if (buff == '\n')
//            row_num++;
//    }
//    return row_num;
//}
//int main() {
//    FILE *file = fopen("test.txt", "r");
//    rewind(file);
//    int count = 0;
//    char buf[255];
//    while (fgets(buf, 255, file))
//    {
//        count++;
//    }
//    rewind(file);
//    del_line(file, "t.txt", lineWithSym(file, '?'));
//    return 0;
//}
///////11////////
//#include <iostream>
//using namespace std;
//void clearFile(const char file_name[255])
//{
//    FILE* file = fopen(file_name, "w");
//    fclose (file);
//}
//int main(){
//    FILE *file = fopen("test2.txt", "w");
//    clearFile("test2.txt");
//
//}
//////1a////
//#include <iostream>
//using namespace std;
//int count_line_A_first(FILE* file,char a);
//int main(){
//    FILE *file = fopen("test.txt", "r");
//cout<<count_line_A_first(file,'a');
//    fclose(file);
//}
//int  count_line_A_first(FILE* file, char a){
//rewind(file);
//int count = 0;
//char buf[255];
//while (fgets(buf,255,file)){
//    if (buf[0] == a)
//        count++;
//
//}
//    return count;
//
//}
////////1b/////
//#include <iostream>
//using namespace std;
//int count_line_5_i(FILE* file,char a);
//int main(){
//    FILE *file = fopen("test.txt", "r");
//    cout<<count_line_5_i(file,'i');
//    fclose(file);
//}
//int  count_line_5_i(FILE* file, char a){
//    rewind(file);
//    int count = 0;
//    int count_lines = 0;
//    char buf[255];
//    while (fgets(buf,20,file)){
//        for (int i = 0; i < 20; i++) {
//            if (buf[i] == '\n')
//                break;
//            if (buf[i] == a)
//                count++;
//        }
//if (count == 5){
//count_lines++;}
//count = 0;
//    }
//    return count_lines;
//
//}
/////////2a/////
//#include <iostream>
//
//using namespace std;
//
//int count_line_5_i(FILE *file, char a);
//
//int main() {
//    FILE *file = fopen("test.txt", "r");
//    rewind(file);
//    int count = 0;
//    char buf[255];
//    while (fgets(buf, 255, file)) {
//        count++;
//    }
//    char buf2[255];
//    rewind(file);
//    int arr[count];
//    int max;
//    int index = 1;
//    for (int i = 1; i <= count; i++) {
//        fgets(buf2, 255, file);
//        arr[i] = strlen(buf2);
//        max = arr[1];
//        if (max < arr[i]) {
//            max = arr[i];
//            index = i;
//        }
//    }
//    cout << max << "  " << index << endl;
//    for (int i = 1; i <= count; i++) {
//        fgets(buf2, 255, file);
//        if (i == index)
//            cout << buf2;
//    }
//    fclose(file);
//}
