#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
   if(argc>1){
       FILE* file = fopen(argv[0], "w");
       fclose (file);
   }else
       cout<<"Hello word";
    return 0;
}
