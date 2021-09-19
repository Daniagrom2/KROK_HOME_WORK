/*1*/
//#include <iostream>
//using namespace std;
//int main() {
//char a;
//cout<<"Введите символ: " ;
//cin>>a;
//if(a=='/' || a=='-' || a=='+'|| a=='*'){
//    cout<<"Вы ввели арефметический оператор.";
//} else{
//    cout<<"Это не арефметический оператор.";
//}
//    return 0;
//}
//2//
//#include <iostream>
//using namespace std;
//int main() {
//    int x,y,z,sum,proiz;
//    sum=0;
//    proiz=1;
//   cout<<"Введите три числа: ";
//   cin>>x>>y>>z;
//   if(x%3==2){
//       sum=sum+x;
//       proiz=proiz*x;
//   }
//    if(y%3==2){
//        sum=sum+y;
//        proiz=proiz*y;
//    }
//    if(z%3==2){
//        sum=sum+z;
//        proiz=proiz*z;
//    }if(sum!=0){
//    cout<<"Summa: "<<sum<<endl;}
//    else{cout<<"Не те числа братан";}
//   if(proiz!=1){
//       cout<<"Proizvedenie: "<<proiz<<endl;
//   }
//    return 0;
//}
//3//
//#include <stdio.h>
//#include <math.h>
//#include <iostream>
//using namespace std;
//int in_ring(double inRad, double outRad, double x, double y){
//    double l = sqrt(x*x + y*y);
//    return ( l >= inRad && l <= outRad );
//}
//
//
//
//int main(void){
//    double x, y;
// cout<<"Enter x,y: "<<endl;
//    cout<<"x = ";
//    cin>>x;
//    cout<<"y = ";
//    cin>>y;
//    in_ring(3.0, 5.0, x, y);
//    if(in_ring(3.0, 5.0, x, y)==1){
//        cout<<"The point is inside of ring.\n" ;
//    }else{
//        cout<<"The point is outside of ring.\n" ;
//    }
//
//
//    return 0;
//}
///////////////
//#include <iostream>
//using namespace std;
//int main() {
//int mast;
//    cout<<"Введите число от 1 до 4: ";
//    cin>>mast;
//    switch (mast) {
//        case 1:
//            cout<< "Пики";
//            break;
//        case 2:
//            cout<< "Трефы";
//            break;
//        case 3:
//            cout<< "Бубны";
//            break;
//        case 4:
//            cout<< "Червы";
//            break;
//        default:
//            cout<<"Число не подходит...";
//    }
//    return 0;
//}
/////////////////
//#include <iostream>
//using namespace std;
//int main() {  int number;
//double money;
//const double euro=34.39;
//    const double usd=28.29;
//    const double zlotie=7.59;
//    const double rub=0.38;
//    const double franki=31.94;
//    const double ien=0.27;
//    cout<<"Если вы хотите перевести грн в евро нажмите 1,\n"
//          "Если вы хотите перевести грн в долар нажмите 2,\n"
//          "Если вы хотите перевести грн в злотые нажмите 3,\n"
//          "Если вы хотите перевести грн в рубли нажмите 4,\n"
//          "Если вы хотите перевести грн в франки нажмите 5,\n"
//          "Если вы хотите перевести грн в йены нажмите 6: ";
//    cin>>number;
//    cout<<"Введите количество грн: ";
//    cin>>money;
//    switch (number) {
//        case 1:
//            money=money/euro;
//            cout<<money<<" Евро";
//            break;
//        case 2:
//            money=money/usd;
//            cout<<money<<" Доларов";
//            break;
//        case 3:
//            money=money/zlotie;
//            cout<<money<<" Злотых";
//            break;
//        case 4:
//            money=money/rub;
//            cout<<money<<" Рублей";
//            break;
//        case 5:
//            money=money/franki;
//            cout<<money<<" Франков";
//            break;
//        case 6:
//            money=money/ien;
//            cout<<money<<" Иен";
//            break;
//
//        default:
//            cout<<"Не то число...";
//
//    }
//  return 0;
//}
/////////////
//#include <iostream>
//using namespace std;
//int main() {  int number;
//    cout<<"Введите номер месяца: ";
//    cin>>number;
//    switch (number) {
//        case 1:
//        case 2:
//            case 12:
//            cout<<"Зима";
//            break;
//        case 3:
//        case 4:
//        case 5:
//            cout<<"Весна";
//            break;
//        case 6:
//        case 7:
//        case 8:
//            cout<<"Лето";
//            break;
//        case 9:
//        case 10:
//        case 11:
//            cout<<"Осень";
//            break;
//        default:
//            cout<<"Нету такого месяца...";
//    }
//    return 0;
//}
//////////////
//#include <iostream>
//using namespace std;
//int main(){
//    int dost;
//    cout<<"Введите достоинство карты: 6-10 - обычные карты, 11-14 — cool cards:";
//    cin>>dost;
//    cout<<(dost==6 ? "six" : dost==7 ? "seven" : dost==8 ? "eight" : dost==9 ? "nine" : dost==10 ? "ten" :dost==11 ? "valet" : dost==12 ? "dama" : dost==13 ? "king" : dost==14 ? "tuz" : "нет такой карти...")<<endl;
//    return 0;
//}
//////////////
/*4.60*/
//  #include <iostream>
//using namespace std;
//int main(){
//    int a,b,c,d,e;
//    cout<<"Введите 4 значное число: ";
//    cin>>a;
//    cout<<"Вхлдят ли в него 2 или 7?"<<endl;
//    b=a/1000;
//    c=(a/100)%10;
//    d=(a/10)%10;
//    e=(a/1)%10;
//    cout<<(b==2 || b==7 ? "Да входят" : c==2 || c==7 ? "Да входят" : d==2 || d==7 ? "Да входят" : e==2 || e==7 ? "Да входят" :"НЕ входят")<<endl;
//    cout<<"Вхлдят ли в него 3 или 6 или 9?"<<endl;
//    cout<<(b==3 || b==6 || b==9 ? "Да входят" : c==3 || c==6 || c==9 ? "Да входят" : d==3 || d==6 || d==9 ? "Да входят" : e==3 || e==6 || e==9 ? "Да входят" :"НЕ входят")<<endl;
//    return 0;
//}
/*4.132*/
//#include <iostream>
//using namespace std;
//int main(){
//    int a,b,c,d,m,n;
//    cout<<"Введите часы прибытия поезда: ";
//    cin>>a;
//    cout<<"Введите минуты прибытия поезда: ";
//    cin>>b;
//    cout<<"Введите часы отбытия поезда: ";
//    cin>>c;
//    cout<<"Введите минуты отбытия поезда: ";
//    cin>>d;
//    cout<<"Введите часы прибытия пасажира: ";
//    cin>>n;
//    cout<<"Введите минуты прибытия пасажира: ";
//    cin>>m;
//   if(n>=a && n<=c && m<=d && m>=b){
//       cout<<"Пасажир успел";
//   }else if(n<=a &&m<b){
//       cout<<"Пасажир пришел слишком рано";
//   }else if(n>=c && m>d){
//       cout<<"Пасажир не успел...";
//   }
//   return 0;
//}
/*4.116*/
//#include <iostream>
//using namespace std;
//int main(){
//    int a2,a1,b;
//    cout<<"Введите число десятков: ";
//    cin>>a2;
//    cout<<"Введите число едениц: ";
//    cin>>a1;
//    cout<<"Введите число b: ";
//    cin>>b;
//cout<<(a2+(a1+b)/10)<<((a1-b)%10);
//    return 0;
//}
/*4.100*/
//#include <iostream>
//using namespace std;
//int main(){
//    int a,b,c;
//    cout<<"Введите 3 числа: ";
//    cin>>a>>b>>c;
//    cout<<(a>b && a>c ? b*c : b>c && b>a ? c*a : b*a);
//    return 0;
//}
/*4.122*/
//#include <iostream>
//using namespace std;
//bool check(double a, double b, double c) {
//        bool abc = (a + b) > c;
//        bool bca = (b + c) > a;
//        bool acb = (a + c) > b;
//        return abc && bca && acb;
//}
//int main(){
//    double a,b,c;
//    cout<<"Ввежите три стороны триугольника: ";
//    cin>>a>>b>>c;
//   if(check(a,b,c)==true){
//       cout<<"True";
//   }else{
//       cout<<"false";
//   }
//    return 0;
//}
/*4.63*/
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main(){
//    cout<<"Введите число: ";
//    int n;
//    cin>>n;
//    vector<int> v;
//    while (n>0){
//        v.push_back(n%10);
//        n/=10;}
//    sort(v.begin(), v.end());
//    if (adjacent_find(v.begin(), v.end()) != v.end()){
//        cout<<"Не различны";}
//    else{
//        cout<<"Различны";}
//    return 0;
//}
/*4.61*/
//#include <iostream>
//using namespace std;
//int main(){
//    int a;
//    cout<<"Введите число: ";
//    cin >> a;
//    int temp = a;
//    int b = 0;
//    while (temp != 0){
//        b = b * 10 + temp % 10;
//        temp /= 10;
//    }
//    if (a == b){
//        cout << "Палиндром";}
//    else{
//        cout << "Не палиндром";}
//    return 0;
//}
/*4.62*/
//#include <iostream>
//#include<math.h>
//using namespace std;
//
//int Check(long a)
//{
//    long b = abs(a);
//    int digits[10] = {0}, i;
//    while (b)
//    {
//        digits[b%10]++;
//        b /= 10;
//    }
//    i = -1;
//    while(++i < 10 && digits[i] <= 2);
//    return i < 10;}
//int main(){
//    long a;
//    cout<<"Введите 4 значное число: ";
//    cin>>a;
//    cout<< (Check(a)==1 ? "yes" : "no");
//    return 0;
//}
//заполнить масив случайными числами ,вывести масив в обратную сторону;
//проверит является ли сумма всех елементов масива четным числом ,а сумма квадратов елементом пятизначным числом
//поменять в масиве первое минимально с первым максимальным
///////////////
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter number of elements: ";
//    cin >> n;
//    int array[n];
//    for (int i = 0; i < n; i++) {
//        cout << "Enter " << i << " element: ";
//        cin >> array[i];
//    }
//    for (int i = n - 1; i < n + 1 && i > -1; i--) {
//        cout << "Array[" << i << "] = " << array[i] << endl;
//    }
//    return 0;
//}
/////////////////
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    int sum =0;
//    int sum2 =0;
//    cout << "Enter number of elements: ";
//    cin >> n;
//    int array[n];
//    for (int i = 0; i < n; i++) {
//        cout << "Enter " << i << " element: ";
//        cin >> array[i];
//        sum+=array[i];
//        sum2+=pow(i,2);
//    }
// if(sum%2==0)
// {
//     cout<<"Да четная"<<endl;
// }
// else
// {
//     cout<<"НЕ четная"<<endl;
// }
// if(sum2>9999 && sum2<=99999)
// {
//     cout<<"Да пятизначное"<<endl;
// }
// else
// {
//     cout<<"Не пятизначное"<<endl;
// }
//
//
//
//    return 0;
//}
/////////////////////
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter number of elements: ";
//    cin >> n;
//    int array[n];
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Enter " << i << " element: ";
//        cin >> array[i];
//    }
//    for (int i = 0; i < n; ++i)
//    {
//        cout<<array[i]<<" ";
//    }
//    cout<<endl;
//    int max = array[0];
//    int min = array[0];
//    int i_max = 0;
//    int i_min = 0;
//    for (int i = 1; i < n; ++i)
//    {
//        if (max <= array[i])
//        {
//            i_max = i;
//            max = array[i];
//        }
//        else if (min > array[i])
//        {
//            i_min = i;
//            min = array[i];
//        }
//    }
//   int boof =array[i_min];
//    array[i_min] = array[i_max];
//    array[i_max] = boof;
//    for (int i = 0; i < n; ++i)
//    {
//        cout<<array[i]<<" ";
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//    srand(time(0));
//    int n;
//    cin>>n;
//    int arr[n];
//   for(int i = 0;i<n;i++)
//   {
//       arr[i]=rand() % 101 - 50 ;
//   }
//    for(int i = 0;i<n;i++)
//   cout<<arr[i]<<" ";
//    cout<<endl;
//    for(int i = 0;i<n;i++)
//    {
//        if (arr[i] < 0 && arr[0]>0)
//        {
//           int boof =arr[i];
//           arr[i]=arr[i-1];
//           arr[i-1]=boof;
//
//        }
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}

/////////1/////////
//#include <iostream>
//using namespace std;
//int main(){
//   const int l =200;
//    int arr[l];
//    int n;
//    cin>>n;
//    for(int i=0;i<l;i++)
//    {
//        if(n>0)
//        {
//            arr[i]=n;
//            cout<<arr[i]<<" ";
//            n--;
//        }
//        else
//        {
//            arr[i]=0;
//            cout<<arr[i]<<" ";
//        }
//    }
//    return 0;
//}
//////////2///////////
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "Enter number of elements: ";
//    cin >> n;
//    int array[n];
//    for (int i = 0; i < n; i++) {
//        cout << "Enter " << i << " element: ";
//        cin >> array[i];
//    }
//    for (int i = n - 1; i < n + 1 && i > -1; i--) {
//        cout << array[i] <<" ";
//    }
//    return 0;
//}
////////3/////////
//#include <iostream>
//using namespace std;
//int main(){
//   const int n =35;
//    int array[n];
//    int sum=0;
//    for (int i = 0; i < n; i++) {
//        cout << "Enter " << i << " elements: ";
//        cin >> array[i];
//        sum+=array[i];
//    }
//  cout<< (sum>99999 && sum<999999 ? "Yes six numbers" : "No")<<endl<<"Summa of books: "<<sum;
//    return 0;
//}
///////4////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//   const int l =20;
//           int arr[l];
//    srand(time(0));
///*b верхняя граница,a нижняя*/
//int pos = 0;
//int neg = 0;
//    int pos_c = 0;
//    int neg_c = 0;
//    cout<<"Massive: ";
//   for(int i = 0;i<l;i++)
//   {
//       arr[i]=rand() % 41 - 20;
//       cout<<arr[i]<<" ";
//       if(arr[i]<0)
//       {
//           neg+=arr[i];
//           neg_c++;
//       }
//       else
//       {
//           pos+=arr[i];
//           pos_c++;
//       }
//   }
//   cout<<endl;
//cout<<" Cреднее арефметическое отрицательных: "<<neg/neg_c<<endl;
//    cout<<" Cреднее арефметическое позитивных: "<<pos/pos_c<<endl;
//
//    return 0;
//}
///////5//////
//#include <iostream>
//using namespace std;
//int main()
//{
//    const int n =10;
//    int arr[n]={0,1,2,3,4,5,6,7,8,0};
//    int sum=0;
//    int first;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i]==0)
//        {
//        first=i;
//            break;
//        }
//    }
//    int second;
//    for (int i = first; i < n; i++)
//    {
//        if (arr[i]==0)
//            second=i;
//    }
//    if(second>0)
//    {
//    for(int i =first; i<second ; i++)
//    {
//       sum += arr[i];
//    }
//    }
//    cout<<sum;
//    return 0;
//}
//////6//////////
//#include <iostream>
//using namespace std;
//int main()
//{
//    const int n =10;
//    int arr[n]{0,1,2,2,3,3,4,4,5,5};
//    int count=0;
//    for(int i =0;i<n;i++)
//    {
//        if(arr[i]==arr[i+1])
//        {
//            count++;
//        }
//    }
//    cout<<"Столько рядом стоящих пар: "<<count;
//    return 0;
//}
//////////7/////////
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n= 100;
//    int arr[n];
//    for(int i =0;i<17;i++)
//    {
//        for(int j=n;j>0 && j>n-6;j--)
//        {
//            arr[j]=j;
//       cout<<arr[j]<<"\t";
//        }
//    n-=6;
//        cout<<endl;
//    }
//    return 0;
//}
//////8////////
//#include <iostream>
//using namespace std;
//int main()
//{
//    int l;
//    int m;
//    int a =12;
//    cout<<"Введите размерность масива: ";
//    cin>>l;
//    cout<<"Введите число М: ";
//    cin>>m;
//    int arr[l];
//    for(int i =0;i<l;i++)
//    {
//        cout<<"Введите елемент: ";
//        cin>>arr[i];
//        if(arr[i]>m)
//        {
//            arr[i]=a;
//        }
//    }/////////1/////////
//#include <iostream>
//using namespace std;
//int main(){
//   const int l =200;
//    int arr[l];
//    int n;
//    cin>>n;
//    for(int i=0;i<l;i++)
//    {
//        if(n>0)
//        {
//            arr[i]=n;
//            cout<<arr[i]<<" ";
//            n--;
//        }
//        else
//        {
//            arr[i]=0;
//            cout<<arr[i]<<" ";
//        }
//    }
//    return 0;
//}
//////////2///////////
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "Enter number of elements: ";
//    cin >> n;
//    int array[n];
//    for (int i = 0; i < n; i++) {
//        cout << "Enter " << i << " element: ";
//        cin >> array[i];
//    }
//    for (int i = n - 1; i < n + 1 && i > -1; i--) {
//        cout << array[i] <<" ";
//    }
//    return 0;
//}
////////3/////////
//#include <iostream>
//using namespace std;
//int main(){
//   const int n =35;
//    int array[n];
//    int sum=0;
//    for (int i = 0; i < n; i++) {
//        cout << "Enter " << i << " elements: ";
//        cin >> array[i];
//        sum+=array[i];
//    }
//  cout<< (sum>99999 && sum<999999 ? "Yes six numbers" : "No")<<endl<<"Summa of books: "<<sum;
//    return 0;
//}
///////4////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//   const int l =20;
//           int arr[l];
//    srand(time(0));
///*b верхняя граница,a нижняя*/
//int pos = 0;
//int neg = 0;
//    int pos_c = 0;
//    int neg_c = 0;
//    cout<<"Massive: ";
//   for(int i = 0;i<l;i++)
//   {
//       arr[i]=rand() % 41 - 20;
//       cout<<arr[i]<<" ";
//       if(arr[i]<0)
//       {
//           neg+=arr[i];
//           neg_c++;
//       }
//       else
//       {
//           pos+=arr[i];
//           pos_c++;
//       }
//   }
//   cout<<endl;
//cout<<" Cреднее арефметическое отрицательных: "<<neg/neg_c<<endl;
//    cout<<" Cреднее арефметическое позитивных: "<<pos/pos_c<<endl;
//
//    return 0;
//}
///////5//////
//#include <iostream>
//using namespace std;
//int main()
//{
//    const int n =10;
//    int arr[n]={0,1,2,3,4,5,6,7,8,0};
//    int sum=0;
//    int first;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i]==0)
//        {
//        first=i;
//            break;
//        }
//    }
//    int second;
//    for (int i = first; i < n; i++)
//    {
//        if (arr[i]==0)
//            second=i;
//    }
//    if(second>0)
//    {
//    for(int i =first; i<second ; i++)
//    {
//       sum += arr[i];
//    }
//    }
//    cout<<sum;
//    return 0;
//}
//////6//////////
//#include <iostream>
//using namespace std;
//int main()
//{
//    const int n =10;
//    int arr[n]{0,1,2,2,3,3,4,4,5,5};
//    int count=0;
//    for(int i =0;i<n;i++)
//    {
//        if(arr[i]==arr[i+1])
//        {
//            count++;
//        }
//    }
//    cout<<"Столько рядом стоящих пар: "<<count;
//    return 0;
//}
//////////7/////////
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n= 100;
//    int arr[n];
//    for(int i =0;i<17;i++)
//    {
//        for(int j=n;j>0 && j>n-6;j--)
//        {
//            arr[j]=j;
//       cout<<arr[j]<<"\t";
//        }
//    n-=6;
//        cout<<endl;
//    }
//    return 0;
//}
//////8////////
//#include <iostream>
//    using namespace std;
//    int main()
//    {
//        int l;
//        int m;
//        int a =12;
//        cout<<"Введите размерность масива: ";
//        cin>>l;
//        cout<<"Введите число М: ";
//        cin>>m;
//        int arr[l];
//        for(int i =0;i<l;i++)
//        {
//            cout<<"Введите елемент: ";
//            cin>>arr[i];
//            if(arr[i]>m)
//            {
//                arr[i]=a;
//            }
//        }
//        for(int i =0;i<l;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//    return 0;
//}
//////////1///////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//    srand(time(0));
//    const int n = 50;
//    int arr[n];
//    bool find ;
//    int  counter = 0;
//    for (int i = 0; i < n; i++) {
//        arr[i]=rand()%20;
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    for (int i = 0; i < n; i++) {
//            if(arr[i]==arr[n-1])
//            {
//                counter++;
//            }
//    }
//    cout<<50-counter;
//    return 0;
//}
///////2//////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//    srand(time(0));
//    const int n=10;
//    int a[n];
//    for(int i=0; i<n; i++)
//    {
//        a[i]=rand()%20;
//        cout<<a[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0; i<n; i++)
//    {
//        int c=0;
//        for(size_t j=0; j<n; j++)
//        {
//            if(a[i]!=a[j])
//            {
//                c++;
//            }
//        }
//        if(c==n-1)
//        {
//            cout<<a[i]<<" ";
//        }
//    }
//    return 0;
//}

////////3/////////
//#include <iostream>
//using namespace std;
//int main(){
//    const int n = 13;
//    int arr[n] = { 5, 7, 8, 9, 3, 0, 4, 6, 8, 9, 3, 4, 3 };
//    int start = 0;
//    int lenght = 1;
//    int s_i = 0;
//    int max_lenght = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    for (int i = 0; i < n-1; i++)
//    {
//        if (arr[i] < arr[i + 1])
//            lenght++;
//        else
//            {
//            if (lenght>max_lenght)
//            {
//                max_lenght = lenght;
//            s_i = start;
//            }
//            start = i + 1;
//            lenght = 1;
//        }
//    }
//    for (int i = s_i; i < s_i + max_lenght; i++)
//        cout << arr[i] << " ";
//    return 0;
//}
////////4////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//    srand(time(0));
//    const int n = 20;
//    int arr[n];
//    int counter = 0;
//    int first,second;
//int maximum;
//    for (int i = 0; i < n; i++)
//    {
//        arr[i]=rand()%2;
//        cout<< arr[i] <<'\t';
//    }
//    cout << endl;
//    for (int i = 0; i < n; i++) {
//        if (arr[i - 1] == 0 && arr[i] == 1) {
//            first = i;
//        }
//        if (arr[i] == 1) {
//            counter++;
//        } else if (arr[i] == 0) {
//            counter = 0;
//        }
//        if(counter > maximum)
//        {
//            second = first;
//            maximum = counter;
//        }
//    }
//    cout << second << endl;
//    cout<< second + maximum - 1 << endl;
//    return 0;
//}
//////////5/////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//    srand(time(0));
//    const int n= 20;
//    int arr[n];
//    int counter=0;
//    int j=0;
//    for (int i = 0; i < n; i++)
//    {
//        arr[i]=rand()%41-20;
//        cout<<arr[i]<<'\t';
//        if(arr[i]>0 && i%2==0)
//        {
//            counter++;
//        }
//
//    }
//    cout<<endl;
//    int arrb[counter];
//    for (int i = 0; i < n; i++)
//    {
//        if(arr[i]>0 && i%2==0)
//        {
//            arrb[j]=arr[i];
//            j++;
//        }
//    }
//    for (int i = 0; i < counter; i++) {
//        cout<<arrb[i]<<" ";
//    }
//    return 0;
//}
/////////6//////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//    srand(time(0));
//    const int n= 10;
//    int a =n/2;
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        arr[i]=rand()%20;
//        cout<<arr[i]<<'\t';
//    }
//    cout<<endl;
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = n-1; j > i; j--)
//        {
//            if(arr[j-1]>arr[j])
//            {
//                int tmp = arr[j-1];
//                arr[j-1]=arr[j];
//                arr[j]=tmp;
//            }
//
//        } cout<<arr[i]<<'\t';
//    }
//    for (int i = a; i < n; i++)
//    {
//        for (int j = n-1; j > i; j--)
//        {
//            if(arr[j-1]<arr[j])
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
/////////1////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    int max;
//
//   const int n =10;
//   int arr[n];
//    for (int i = 0; i < n; i++) {
//        arr[i]=random()%1000;
//        cout<<arr[i]<<" ";
//    }
//    int min=arr[0];
//    cout<<endl;
//    for (int i = 0; i < n; i++) {
//        if(arr[i]<min)
//            min=arr[i];
//        if(arr[i]>max)
//            max=arr[i];
//    }
//cout<<min<<" "<<max;
//    return 0;
//}
///////2/////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//int min_i=0;
//int max_i=0;
//int first;
//int second;
//cout<<"Введите первый месяц периода: ";
//cin>>first;
//cout<<"Введите второй месяц периода: ";
//cin>>second;
//   const int n =12;
//   int arr[n];
//    for (int i = 0; i < n; i++) {
//        arr[i]=random()%5000;
//        cout<<arr[i]<<" ";
//    }
//    int min=arr[first];
//    int max=arr[first];
//    cout<<endl;
//    for (int i = first; i < second; i++) {
//        if(arr[i]<min){
//            min=arr[i];
//        min_i=i;}
//        if(arr[i]>max){
//            max=arr[i];
//        max_i=i;}
//    }
//cout<<"min: "<<min_i<<endl<<"max: "<<max_i;
//    return 0;
//}
////////3/////
//#include <iostream>
//using namespace std;
//int main(){
//    int first;
//    int second;
//    float m=1;
//    float pro_che=1;
//    const int N =7;
//   float arr[N];
//   float sum_m=0;
//    for (int i = 0; i < N; i++) {
//        cout<<"Введите вещественное число: " ;
//        cin>>arr[i];
//        if(arr[i]<0){
//            sum_m+=arr[i];
//        }
//    }
//    float min;
//    float max;
//    int min_i=0;
//    int max_i=0;
//        for (int i = 0; i < N; i++) {
//        if(arr[i]<min){
//            min=arr[i];
//        min_i=i;}
//        if(arr[i]>max){
//            max=arr[i];
//        max_i=i;}
//    }
//    for (int i = min_i; i < max_i; i++) {
//        m*=arr[i];
//    }
//    bool b=false;
//    for (int i = 0; i < N; i++) {
//        if(arr[i]<0 && b==false){
//            first=i;
//            b=true;
//    }
//        if(arr[i]<0)
//            second=i;
//        if(i%2==0)
//            pro_che*=arr[i];
//    }
//   float sum_last=0;
//    for (int i = first+1; i <second ; i++) {
//sum_last+=arr[i];
//    }
//        cout<<"Сумма отрицательных: "<<sum_m<<endl;
//        cout<<"Произведение между мин и макс: "<<m<<endl;
//        cout<<"Произыедение с четными номерами: "<<pro_che<<endl;
//cout<<"Сумма между первым и последним отрицательным: "<<sum_last<<endl;
//
//   return 0;
//}
////////////////////////
////////1//////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//int counter = 0;
//int row1;
//int row = 6;
//int tmp = row*21;
//int column = 6;
//    int a=0;
//int arr[row][column];
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][j]=rand()%20;
//            cout<<arr[i][j]<<"\t";
//            counter+=arr[i][j];
//        }
//        if(counter<tmp){
//            tmp = counter;
//            row1 = i;
//        }
//        counter=0;
//        cout<<endl;
//    }
//    cout<<"a)"<<row1<<endl;
//    tmp=0;
//    counter=0;
//    row1=0;
//    do{
//    for (int i=0; i < column; i++) {
//            counter+=arr[i][a];
//    }
//    if(counter>tmp) {
//        tmp = counter;
//        row1 = a;
//    }
//    counter=0;
//    a++;
//    }while(a!=6);
//    cout<<"b)"<<row1;
//    return 0;
//}
////////2///////////
// #include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//    srand(time(0));
//
//    const int n = 5;
//    int arr[n][n];
//    bool fl = true;
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            arr[i][j] = rand() % 6;
//            cout << arr[i][j] << ' ';
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (arr[i][j] != arr[j][i])
//            {
//                fl = false;
//                break;
//            }
//        }
//    }
//
//    if (fl)
//    {
//        cout << "symmetric square" << endl;
//    }
//    else
//    {
//        cout << "square is not symmetrical" << endl;
//    }
//
//    cout << endl;
//}
//////2 a)/////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    int row = 6;
//    int column = 6;
//    int max=0;
//    int arr[row][column];
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][j]=rand()%20;
//            cout<<arr[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    cout<<endl;
//
//
//
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//if(i<=j){
//    cout<<arr[i][j]<<"\t";
//    if(max<arr[i][j])
//    {
//        max=arr[i][j];
//    }
//}
//else{
//    cout<<" \t";
//}
//        }
//        cout<<endl;
//    }
//    cout<<max<<endl;
//    return 0;
//}

//////2 b)/////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    int row = 6;
//    int column = 6;
//    int max=0;
//    int arr[row][column];
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][j]=rand()%20;
//            cout<<arr[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    cout<<endl;
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            if(i>=j){
//                cout<<arr[i][j]<<"\t";
//                if(max<arr[i][j])
//                {
//                    max=arr[i][j];
//                }
//            }
//            else{
//                cout<<" \t";
//            }
//        }
//        cout<<endl;
//    }
//    cout<<max<<endl;
//    return 0;
//}
///////2 в)/////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    int row = 7;
//    int column = 7;
//    int max=0;
//    int arr[row][column];
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][j]=rand()%20;
//            cout<<arr[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    cout<<endl;
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = i; j < column-i; j++)
//        {
//            if(max<arr[i][j])
//            {
//                max=arr[i][j];
//            }
//        }
//        }
//        cout<<endl;
//    cout<<max<<endl;
//    return 0;
//}
//////2 г////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    int row = 7;
//    int column = 7;
//    int max=0;
//    int a=0;
//    int arr[row][column];
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][j]=rand()%20;
//            cout<<arr[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    cout<<endl;
//        for (int i = 3; i < row; i++) {
//        for (int j = i-a; j < i+1; j++) {
//            cout<<arr[i][j]<<"\t";
//            if(max<arr[i][j])
//            {
//                max=arr[i][j];
//            }
//        }
//        cout<<endl;
//        a+=2;
//    }
//
//    cout<<endl;
//    cout<<max<<endl;
//    return 0;
//}
////////2 д///////
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//    srand(time(0));
//    int row = 7;
//    int column = 7;
//    int max = 0;
//    int a = 0;
//    int arr[row][column];
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][j] = rand() % 100;
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < row; i++) {
//        for (int j = i; j < column - i; j++) {
//            if (max < arr[i][j]) {
//                max = arr[i][j];
//            }
//        }
//    }
//    for (int i = 3; i < row; i++) {
//        for (int j = i - a; j < i + 1; j++) { ;
//            if (max < arr[i][j]) {
//                max = arr[i][j];
//            }
//        }
//        a += 2;
//    }
//    cout << max << endl;
//    return 0;
//}
////////2 e/////
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//    srand(time(0));
//    int row = 7;
//    int column = 7;
//    int max = 0;
//    int a = 0;
//    int arr[row][column];
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][j] = rand() % 100;
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < row; i++) {
//        for (int j = i; j < column - i; j++) {
//            if (max < arr[j][i]) {
//                max = arr[j][i];
//            }
//        }
//    }
//    for (int i = 3; i < row; i++) {
//        for (int j = i - a; j < i + 1; j++) { ;
//            if (max < arr[j][i]) {
//                max = arr[j][i];
//            }
//        }
//        a += 2;
//    }
//    cout << max << endl;
//    return 0;
//}
//////2 ж/////
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//    srand(time(0));
//    int row = 7;
//    int column = 7;
//    int max = 0;
//    int a = 0;
//    int arr[row][column];
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][j] = rand() % 100;
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < row; i++) {
//        for (int j = i; j < column - i; j++) {
//            if (max < arr[j][i]) {
//                max = arr[j][i];
//            }
//        }
//    }
//    cout << max << endl;
//    return 0;
//}
////////2 з/////
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//    srand(time(0));
//    int row = 7;
//    int column = 7;
//    int max = 0;
//    int a = 0;
//    int arr[row][column];
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][j] = rand() % 100;
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//    for (int i = 3; i < row; i++) {
//        for (int j = i - a; j < i + 1; j++) { ;
//            if (max < arr[j][i]) {
//                max = arr[j][i];
//            }
//        }
//        a += 2;
//    }
//    cout << max << endl;
//    return 0;
//}
//////2 u///////
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//    srand(time(0));
//    int row = 7;
//    int column = 7;
//    int max = 0;
//    int a = 0;
//    int arr[row][column];
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][j] = rand() % 100;
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = row-i-1; j >= 0; j--)
//        {
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//            }
//        }
//    }
//    cout << max << endl;
//    return 0;
//}

//////3 a/////
//#include <iostream>
//using namespace std;
//int main() {
//    int row = 10;
//    int column = 10;
//    int arr[row][column];
//    for (int i = 0; i < row; i++) {
//        for (int j = 1; j < column + 1; j++) {
//            arr[i][j] = arr[i][j - 1] + 1;
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    return 0;
//}
//////3 б/////
//#include <iostream>
//using namespace std;
//int main() {
//    int row = 10;
//    int column = 12;
//    int arr[row][column];
//
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column ; j++) {
//          arr[i][j]=arr[j][i];
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    return 0;
//}
/////////////////
//#include <iostream>
//using namespace std;
//void showda(int **arr,int count_rows,int count_columns);
//void creatda(int **&arr,int rows,int columns);
//int **creatda(int rows,int columns);
//void delda(int **&arr,int rows);
//void fillda(int **arr,int rows,int columns,int begin= 0,int end = 10);
//int main() {
//    int columns ;
//    int rows ;
//    cout<<"enter rows:";
//    cin>>rows;
//    cout<<"enter columns:";
//    cin>>columns;
//    int **arr = nullptr;
//    arr = creatda(rows,columns);
////    arr[2][2]= 8;
////    *(*(arr+2)+1) = 9;
////    cout<<  *(*(arr+2)+2)<<"\n";
////    cout<<arr[2][1]<<"\n";
//fillda(arr,rows,columns,0,14);
//    showda(arr,rows,columns);
//    delda(arr,rows);
//}
//void fillda(int **arr,int rows,int columns,int begin,int end){
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < columns; j++) {
//            arr[i][j]=rand()%(begin - end)+begin;
//        }
//    }
//}
//void showda(int **arr,int count_rows,int count_columns){
//    for (int i = 0; i < count_rows; i++) {
//        for (int j = 0; j <count_columns; j++) {
//            cout<<arr[i][j]<<"\t";
//        }
//        cout<<"\n";
//    }
//}
//void creatda(int **&arr,int rows,int columns){
//    arr = new int*[rows];
//    for (int i = 0; i <rows ; i++) {
//        arr[i]=new int[columns];
//    }
//}
//int **creatda(int rows,int columns){
//    int **temp = new int*[rows];
//    for (int i = 0; i <rows ; i++) {
//        temp[i]=new int[columns];
//    }
//    return temp;
//}
//void delda(int **&arr,int rows){
//    for (int i = 0; i < rows; i++) {
//        delete [] arr[i];
//    }
//    delete [] arr;
//    arr = nullptr;
//}
////////
#include <iostream>

using namespace std;

int main() {

}

