//#include <iostream>
//#include <ctime>
//using namespace std;
// int main()
// {
//     srand(time(0));
//     const int n= 10;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         arr[i]=rand()%20;
//         cout<<arr[i]<<'\t';
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j < n; j++) {
//             if(arr[i]>arr[j])
//             {
//                 int tmp =arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=tmp;
//             }
//         }
//     }
//     cout<<endl;
//     for (int i = 0; i < n; i++) {
//         cout<<arr[i]<<'\t';
//     }
//     return 0;
// }
/////////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//    srand(time(0));
//    const int n= 10;
//    int arr[n];
//    for (int i = 0; i < n; i++) {
//        arr[i]=rand()%20;
//        cout<<arr[i]<<'\t';
//    }
//    cout<<endl;
//    for (int i = 0; i < n; i++) {
//        for (int j = n-1; j > i; j--) {
//            if(arr[j-1]>arr[j])
//            {
//                int tmp = arr[j-1];
//                arr[j-1]=arr[j];
//                arr[j]=tmp;
//            }
//
//        } cout<<arr[i]<<'\t';
//    }
//    return 0;
//}
//////////////////
#include <iostream>
#include <ctime>
using namespace std;
int main( ){
    srand(time(0));
    const int n =10;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=rand()%20;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int tmp;
    int index;
    for (int i = 0; i < n; i++) {
        tmp=arr[i];
        index = i-1;
        while(index>=0 && arr[index] > tmp)
        {
            arr[index+1]=arr[index];
            arr[index]= tmp;
            index--;
        }
    }
    for (int i = 0; i <n ; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
///////ne sorting////////
//#include <iostream>
//using namespace std;
//class Stack
//{
//private:
//    int size;
//    int top = -1;
//    void stretch(){
//        int* newValues = new int[2*size];
//        for(int i = 0;i<size;++i)
//        {
//            newValues[i] =values[i];
//        }
//        delete [] values;
//        values = newValues;
//    }
//public:
//    int* values;
//    Stack(int length)
//    {
//        size =length;
//        values = new int[length];
//    }
//    ~Stack()
//    {
//        delete [] values;
//    }
//
//    bool isEmpty()
//    {
//        if(top==-1)
//            return top == -1;
//    }
//
//    void push(int val)
//    {
//        if(top == size-1)
//        {
//            stretch();
//        }
//        values[++top] =val;
//    }
//    int pop()
//    {
//        return values[top--];
//    }
//    void print(int i){
//        cout<<values[i]<<'\t';
//    }
//
//
//};
//int main(){
//    Stack s1(15);
//    s1.push(5);
//    s1.push(9);
//    s1.push(3);
//    s1.pop();
//
//    return 0;
//}