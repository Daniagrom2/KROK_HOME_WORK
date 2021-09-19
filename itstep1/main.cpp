/*1. Написать программу, которая вычисляет сумму и произведение всех положительных четных чисел из введенных шести.*/
//#include <iostream>
//using namespace std;
//int main(){
//    int x,c,v,b,n,m,sum,proiz;
//    sum=0;
//    proiz=1;
//    cout<<"Введите 6 лючых чисел: ";
//    cin>>x>>c>>v>>b>>n>>m;
//    if(x%2==0 && x>0) {
//        sum=sum+x;
//        proiz=proiz*x;
//    }if(c%2==0 && c>0) {
//        sum=sum+c;
//        proiz=proiz*c;
//    }if(v%2==0 && v>0) {
//        sum=sum+v;
//        proiz=proiz*v;
//    }if(b%2==0 && b>0) {
//        sum=sum+b;
//        proiz=proiz*b;
//    }if(n%2==0 && n>0) {
//        sum=sum+n;
//        proiz=proiz*n;
//    }if(m%2==0 && m>0) {
//        sum=sum+m;
//        proiz=proiz*m;
//    }if(sum>0 && proiz>1){
//        cout<<"Cумма всех положительных четных чисел: "<<sum<<endl;
//        cout<<"Произведение всех положительных четных чисел: "<<proiz<<endl;
//
//    }
//    return 0;
//}
/*2. Написать программу, которая заменяет максимальное из двух введенных чисел их произведением, а минимальное — его абсолютным значением(abs).*/
//#include <iostream>
//using namespace std;
//void swap(int &a,int &b){
//    int t =a;
//    a=b;
//    b=t;
//}
//int main(){
//    int a,b,proiz;
//    cout<<"Введите 2 числа: ";
//    cin>>a>>b;
//    if(a>b){
//        proiz=a*b;
//      swap(a,proiz);
//      cout<<"Произведение: "<<a<<endl;
//        if(b<0){
//            b=b*(-1);
//            cout<<"Абсолютное значение минимального: "<<b<<endl;
//        }else{
//            cout<<"Абсолютное значение минимального: "<<b<<endl;
//        }
//    }else if(b>a){
//        proiz=a*b;
//        swap(b,proiz);
//        cout<<"Произведение: "<<b<<endl;
//        if(a<0){
//            a=a*(-1);
//            cout<<"Абсолютное значение минимального: "<<a<<endl;
//        }else{
//            cout<<"Абсолютное значение минимального: "<<a<<endl;
//        }
//    }
//    return 0;
//}
/*3. Написать программу, которая формирует чек на покупку в магазине (минимум 5 товаров), цену і количество товара необходимо ввести с клавиатуры. Вычислить сумму, которую необходимо заплатить за покупку, учитывая систему скидок:

• сумма < 50 грн. —0%;
• сумма от 50 грн. до 100 грн. —15%;
• сумма от 100 грн. до 200 грн. —25%;
• сумма >200 грн. —30%;

и НДФ 20%.
*/
//#include <iostream>
//using namespace std;
//int main(){
//    string tovar;
//    int kol,price,yesno;
//    double sum;
//    sum=0;
//
//cout<<"Введите товар: ";
//cin>>tovar;
//    cout<<"Введите количество: ";
//    cin>>kol;
//    cout<<"Введите цену: ";
//    cin>>price;
//    cout<<"Хотите добавить товар? \n DA=1 NET=2: ";
//    cin>>yesno;
//    if(yesno==1){
//        string tovar1;
//        int kol1,price1,yesno1;
//        cout<<"Введите товар: ";
//        cin>>tovar1;
//        cout<<"Введите количество: ";
//        cin>>kol1;
//        cout<<"Введите цену: ";
//        cin>>price1;
//        cout<<"Хотите добавить товар? \n DA=1 NET=2: ";
//        cin>>yesno1;
//        if(yesno1==1){
//            string tovar2;
//            int kol2,price2,yesno2;
//            cout<<"Введите товар: ";
//            cin>>tovar2;
//            cout<<"Введите количество: ";
//            cin>>kol2;
//            cout<<"Введите цену: ";
//            cin>>price2;
//            cout<<"Хотите добавить товар? \n DA=1 NET=2: ";
//            cin>>yesno2;
//           if(yesno2==1) {
//               string tovar3;
//               int kol3,price3,yesno3;
//               cout<<"Введите товар: ";
//               cin>>tovar3;
//               cout<<"Введите количество: ";
//               cin>>kol3;
//               cout<<"Введите цену: ";
//               cin>>price3;
//               cout<<"Хотите добавить товар? \n DA=1 NET=2: ";
//               cin>>yesno3;
//               if(yesno3==1){
//                   string tovar4;
//                   int kol4,price4,yesno4;
//                   cout<<"Введите товар: ";
//                   cin>>tovar4;
//                   cout<<"Введите количество: ";
//                   cin>>kol4;
//                   cout<<"Введите цену: ";
//                   cin>>price4;
//                   cout<<"Хотите добавить товар? \n DA=1 NET=2: ";
//                   cin>>yesno4;
//                   if(yesno4==1){
//                       string tovar5;
//                       int kol5,price5,yesno5;
//                       cout<<"Введите товар: ";
//                       cin>>tovar5;
//                       cout<<"Введите количество: ";
//                       cin>>kol5;
//                       cout<<"Введите цену: ";
//                       cin>>price5;
//                       yesno5=2;if(yesno==2){
//                           sum=sum+(price*kol)+(price1*kol1)+(price2*kol2)+(price3*kol3)+(price4*kol4)+(price5*kol5);
//                           if(sum>50&&sum<100){
//                               sum+=(sum/100)*20;
//                               sum-=(sum/100)*15;;
//                           }else if(sum>100&&sum<200){
//                               sum+=(sum/100)*20;
//                               sum-=(sum/100)*25;;
//                           }
//                           else if(sum>200){
//                               sum+=(sum/100)*20;
//                               sum-=(sum/100)*30;
//                           }else{
//                               sum=sum+((sum/100)*20);
//                           }
//                           cout<<"Вы заказали:\n"<<kol<<"x "<<tovar<<" "<<price*kol<<"$"<<"\n"<<kol1<<"x "<<tovar1<<" "<<price1*kol1<<"$"<<"\n"<<kol2<<"x "<<tovar2<<" "<<price2*kol2<<"$"<<"\n"<<kol3<<"x "<<tovar3<<" "<<price3*kol3<<"$"<<"\n"<<kol4<<"x "<<tovar4<<" "<<price4*kol4<<"$"<<"\n"<<kol5<<"x "<<tovar5<<" "<<price5*kol5<<"$"<<"\nCумма заказа: "<<sum<<"$";
//                       }
//
//                   }else if(yesno4==2){
//                       sum=sum+(price*kol)+(price1*kol1)+(price2*kol2)+(price3*kol3)+(price4*kol4);
//                       if(sum>50&&sum<100){
//                           sum+=(sum/100)*20;
//                           sum-=(sum/100)*15;;
//                       }else if(sum>100&&sum<200){
//                           sum+=(sum/100)*20;
//                           sum-=(sum/100)*25;;
//                       }
//                       else if(sum>200){
//                           sum+=(sum/100)*20;
//                           sum-=(sum/100)*30;
//                       }else{
//                           sum=sum+((sum/100)*20);
//                       }
//                       cout<<"Вы заказали:\n"<<kol<<"x "<<tovar<<" "<<price*kol<<"$"<<"\n"<<kol1<<"x "<<tovar1<<" "<<price1*kol1<<"$"<<"\n"<<kol2<<"x "<<tovar2<<" "<<price2*kol2<<"$"<<"\n"<<kol3<<"x "<<tovar3<<" "<<price3*kol3<<"$"<<"\n"<<kol4<<"x "<<tovar4<<" "<<price4*kol4<<"$"<<"\nCумма заказа: "<<sum<<"$";
//                   }
//
//               }else if(yesno3==2){
//                   sum=sum+(price*kol)+(price1*kol1)+(price2*kol2)+(price3*kol3);
//                   if(sum>50&&sum<100){
//                       sum+=(sum/100)*20;
//                       sum-=(sum/100)*15;;
//                   }else if(sum>100&&sum<200){
//                       sum+=(sum/100)*20;
//                       sum-=(sum/100)*25;;
//                   }
//                   else if(sum>200){
//                       sum+=(sum/100)*20;
//                       sum-=(sum/100)*30;
//                   }else{
//                       sum=sum+((sum/100)*20);
//                   }
//                   cout<<"Вы заказали:\n"<<kol<<"x "<<tovar<<" "<<price*kol<<"$"<<"\n"<<kol1<<"x "<<tovar1<<" "<<price1*kol1<<"$"<<"\n"<<kol2<<"x "<<tovar2<<" "<<price2*kol2<<"$"<<"\n"<<kol3<<"x "<<tovar3<<" "<<price3*kol3<<"$"<<"\nCумма заказа: "<<sum<<"$";
//               }
//
//           }else if(yesno2==2){
//               sum=sum+(price*kol)+(price1*kol1)+(price2*kol2);
//               if(sum>50&&sum<100){
//                   sum+=(sum/100)*20;
//                   sum-=(sum/100)*15;;
//               }else if(sum>100&&sum<200){
//                   sum+=(sum/100)*20;
//                   sum-=(sum/100)*25;;
//               }
//               else if(sum>200){
//                   sum+=(sum/100)*20;
//                   sum-=(sum/100)*30;
//               }else{
//                   sum=sum+((sum/100)*20);
//               }
//               cout<<"Вы заказали:\n"<<kol<<"x "<<tovar<<" "<<price*kol<<"$"<<"\n"<<kol1<<"x "<<tovar1<<" "<<price1*kol1<<"$"<<"\n"<<kol2<<"x "<<tovar2<<" "<<price2*kol2<<"$"<<"\nCумма заказа: "<<sum<<"$";
//           }
//        }else if(yesno1==2){
//            sum=sum+(price*kol)+(price1*kol1);
//            if(sum>50&&sum<100){
//                sum+=(sum/100)*20;
//                sum-=(sum/100)*15;;
//            }else if(sum>100&&sum<200){
//                sum+=(sum/100)*20;
//                sum-=(sum/100)*25;;
//            }
//            else if(sum>200){
//                sum+=(sum/100)*20;
//                sum-=(sum/100)*30;
//            }else{
//                sum=sum+((sum/100)*20);
//            }
//            cout<<"Вы заказали:\n"<<kol<<"x "<<tovar<<" "<<price*kol<<"$"<<"\n"<<kol1<<"x "<<tovar1<<" "<<price1*kol1<<"$"<<"\nCумма заказа: "<<sum<<"$";
//        }
//    }else{
//
//        sum=sum+(price*kol);
//        if(sum>50&&sum<100){
//            sum+=(sum/100)*20;
//            sum-=(sum/100)*15;;
//        }else if(sum>100&&sum<200){
//            sum+=(sum/100)*20;
//            sum-=(sum/100)*25;;
//        }
//        else if(sum>200){
//            sum+=(sum/100)*20;
//            sum-=(sum/100)*30;
//        }else{
//            sum=sum+((sum/100)*20);
//        }
//        cout<<"Вы заказали:\n"<<kol<<"x "<<tovar<<" "<<price*kol<<"$"<<"\nCумма заказа: "<<sum<<"$";
//    }
//    return 0;
//}
/*4.Пользователь вводит с клавиатуры символ. Определить, какой это символ: Буква, цифра, знак препинания или другое.*/
//#include <iostream>
//#include <cctype>
//using namespace std;
//int main(){
//    char symv = 0;
//    cout << "Введите символ: ";
//    cin >> symv;
//if (isalpha(symv)){
//cout << "Вы ввели букву." << endl;
//}
//else if (isdigit(symv)){
//cout << "Вы ввели цифру." << endl;
//}
//else if (ispunct(symv)){
//cout << "Вы ввели знак препинания." << endl;
//}
//else{
//cout << "Вы ввели не букву, не цифру и не знак препинания." << endl;
//}
//return 0;
//}
/*5. Дано натуральное число а (a<100). Напишите программу, выводящую на экран количество цифр в этом числе и сумму этих цифр*/
//#include <iostream>
//using namespace std;
//int main(){
//    unsigned long factor;
//    int x;
//    cout<<"Введите натуральное число от 0 до 99: ";
//    cin>>x;
//    factor = 1;
//    for (int i=x; i>0; i--){
//        factor *= i;}
//    cout<<"Количество цифр в числе: "<<x+1<<endl;
//    cout << "Факториал числа: " << factor << endl;
//}
/*6. Известно, что 1 дюйм равен 2.54 см. Разработать приложение, переводящие дюймы в сантиметры и наоборот. Диалог с пользователем реализовать через систему меню.*/
//#include <iostream>
//using namespace std;
//int main() {
//    int x;
//    double y;
//    cout << "Если вы хотите перевести сантиметры в дюймы введите 1,  " << endl;
//    cout << "Если вы хотите перевести дюймы в сантиметры введите 0:  ";
//    cin >> x;
//    switch (x) {
//        case 1:
//            cout << "Введите сантиметры: ";
//            cin >> y;
//            cout << y / 2.54<<" дюймов.";
//            break;
//        case 0:
//            cout << "Введите дюймы: ";
//            cin >> y;
//            cout << y * 2.54<<" сантиметров.";
//            break;
//        default:
//            cout<<"Такой команды нету...";
//    }
//return 0;
//}
/*7*. Напишите программу, реализующую популярную телевизионную игру "Кто хочет стать миллионером".*/
//#include <iostream>
//using namespace std;
//int main() {
//    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,balance;
//    balance=0;
//    cout<<"Ваш баланс: "<<balance<<endl;
//    cout<<"Если вы хотити выбрать вариант А нажмите 1 \nЕсли вы хотити выбрать вариант Б нажмите 2 \nЕсли вы хотити выбрать вариант В нажмите 3 \nЕсли вы хотити выбрать вариант Г нажмите 4 \n";
//    cout<<"Кто из этих философов в 1864 году написал музыку на стихи А.С. Пушкина «Заклинание» и «Зимний вечер»?" <<endl;
//    cout<<"А:Юнг\nБ:Гегель \nВ:Ницше \nГ:Шопенгауэр"<<endl;
//    cout<<"Введите ответ: ";
//    cin>>a1;
//    if(a1==3){
//        balance+=100000;
//        cout<<"Ваш баланс: "<<balance<<endl;
//        cout<<"Сколько раз в сутки подзаводят куранты Спасской башни Кремля?"<<endl;
//        cout<<"А:Один\nБ:Два\nВ:Три\nГ:Четыре"<<endl;
//        cout<<"Введите ответ: ";
//        cin>>a2;
//        if(a2==2){
//            balance+=100000;
//            cout<<"Ваш баланс: "<<balance<<endl;
//            cout<<"Кто 1-м получил Нобелевскую премию по литературе?"<<endl;
//            cout<<"А:Романист\nБ:Драматург\nВ:Поэт\nГ:Эссеист"<<endl;
//            cout<<"Введите ответ: ";
//            cin>>a3;
//            if(a3==3){
//                balance+=100000;
//                cout<<"Ваш баланс: "<<balance<<endl;
//                cout<<"С какой буквы начинаются слова, опубликованные в 16-м томе последнего издания Большой советской энциклопедии?"<<endl;
//                cout<<"А:М\nБ:Н\nВ:О\nГ:П"<<endl;
//                cout<<"Введите ответ: ";
//                cin>>a4;
//                if(a4==1){
//                    balance+=100000;
//                    cout<<"Ваш баланс: "<<balance<<endl;
//                    cout<<"Кто из перечисленных был пажом во времена Екатерины II?"<<endl;
//                    cout<<"А:Д.И. Фонвизин\nБ:Г.Р. Державин\nВ:А.Н. Радищев\nГ:Н.М. Карамзин"<<endl;
//                    cout<<"Введите ответ: ";
//                    cin>>a5;
//                    if(a5==3){
//                        balance+=100000;
//                        cout<<"Ваш баланс: "<<balance<<endl;
//                        cout<<"Какой химический элемент назван в честь злого подземного гнома?"<<endl;
//                        cout<<"А:Гафний\nБ:Кобальт\nВ:Бериллий\nГ:Теллур"<<endl;
//                        cout<<"Введите ответ: ";
//                        cin>>a6;
//                        if(a6==2){
//                            balance+=100000;
//                            cout<<"Ваш баланс: "<<balance<<endl;
//                            cout<<"В какой из этих столиц бывших союзных республик раньше появилось метро?"<<endl;
//                            cout<<"А:Тбилиси\nБ:Ереван\nВ:Баку\nГ:Минск"<<endl;
//                            cout<<"Введите ответ: ";
//                            cin>>a7;
//                            if(a7==1){
//                                balance+=100000;
//                                cout<<"Ваш баланс: "<<balance<<endl;
//                                cout<<"Сколько морей омывают Балканский полуостров?"<<endl;
//                                cout<<"А:3\nБ:4\nВ:5\nГ:6"<<endl;
//                                cout<<"Введите ответ: ";
//                                cin>>a8;
//                                if(a8==4){
//                                    balance+=100000;
//                                    cout<<"Ваш баланс: "<<balance<<endl;
//                                    cout<<"Что такое лобогрейка?"<<endl;
//                                    cout<<"А:Жнейка\nБ:Шапка\nВ:Болезнь\nГ:Печка"<<endl;
//                                    cout<<"Введите ответ: ";
//                                    cin>>a9;
//                                    if(a9==1){
//                                        balance+=100000;
//                                        cout<<"Ваш баланс: "<<balance<<endl;
//                                        cout<<"Какой роман Фенимор Купер написал на спор с женой?"<<endl;
//                                        cout<<"А:«Предосторожность»\nБ:«Пионеры»\nВ:«Последний из могикан»\nГ:«Зверобой»"<<endl;
//                                        cout<<"Введите ответ: ";
//                                        cin>>a10;if(a10==1){
//                                            cout<<"Ваш баланс 1000000, Вы победили!";
//                                        }
//                                    }else{cout<<"You LOSE...";}
//                                }else{cout<<"You LOSE...";}
//                            }else{cout<<"You LOSE...";}
//                        }else{cout<<"You LOSE...";}
//                    }else{
//                        cout<<"You LOSE...";
//                    }
//                }else{
//                    cout<<"You LOSE...";
//                }
//            }else{cout<<"You LOSE...";
//            }
//        }else{cout<<"You LOSE...";
//        }
//    }else{
//        cout<<"You LOSE...";
//    }
//
//return 0;
//}

/*1.Пользователь вводит два чсила а и б ,вам нужно вывести диапазон целых чисел между а и б,ввод не играет роли...
 2.ТоЖЕ САМОЕ ТОЛЬКО ВЕЩЕСТВЕННЫЕ ЧИСЛА Дс десятыми
 3.посчитать факториал числа н
 4.пользователь вводит число н опредилить целое ли оно
 */
//////////1////////////
//#include <iostream>
//using namespace std;
//int main() {
//    int a,b;
//   cout<<"Введите число a: ";
//   cin>>a;
//    cout<<"Введите число b: ";
//    cin>>b;
//   if(a>b){
//       while(a>=b){
//           cout<<b++<<endl;
//       }
//   }else if(b>a){
//       while(b>=a){
//           cout<<a++<<endl;
//       }
//   }
//    return 0;
//}
//////////2/////////////
//#include <iostream>
//using namespace std;
//int main() {
//    float a,b;
//    cout<<"Введите число a: ";
//    cin>>a;
//    cout<<"Введите число b: ";
//    cin>>b;
//    if(a>b){
//        while(a>=b){
//            cout<<(b+=0.1)<<endl;
//        }
//    }else if(b>a){
//        while(b>=a){
//            cout<<(a+=0.1)<<endl;
//        }
//    }
//    return 0;
//}
//////////3///////////////
//#include <iostream>
//using namespace std;
//int main() {
//   int i=1;
//   int sum=1;
//   int n;
//   cout<<"Введите число n: ";
//   cin>>n;
//   while (i<=n){
//    sum*=i;
//i++;
//   }cout<<"Факториал: "<<sum;
//    return 0;
//}
/////////4/////////////
//#include <iostream>
//using namespace std;
//int main() {
//    int result=0;
//    int n;
//    cout<<"Введите n:";
//    cin>>n;
//    for (int i = 2; i<sqrt(n); i++) {
//        if (n % i == 0) {
//            result=1;
//        }
//    }if (result==1){
//        cout<<"Не простое ";
//    }else {
//        cout<<"Простое ";
//    }
//    return 0;
//}
/*1. Организовать беспрерывный  ввод чисел с клавиатуры, пока пользователь не введёт 0. После ввода нуля, показать на экран количество чисел, которые были введены, их общую сумму и среднее арифметическое.*/
//#include <iostream>
//using namespace std;
//int main() {
//    int x,counter,sum;
//sum=0;
//counter=0;
//    cout<<"Введите число: ";
//    cin>>x;
//    sum+=x;
//while(x!=0){
//    cout<<"Введите число: ";
//    cin>>x;
//    counter++;
//sum+=x;
//}if(x==0){
//    cout<<"Количество введенных чисел: "<<counter<<endl;
//        cout<<"Сумма: "<<sum<<endl;
//        cout<<"Среднее арефметическое: "<<sum/counter<<endl;
//}
//    return 0;
//}
/*2. Создайте программу, выводящую на экран все неотрицательные элементы последовательности 90 85 80 75 70 65 60 ….*/
//#include <iostream>
//using namespace std;
//int main() {
//    int x=90;
//    cout<<x<<endl;
//    while(x!=0){
//        x-=5;
//        cout<<x<<endl;
//    }
//    return 0;
//}
/*3. Создайте программу, выводящую на экран первые 20 элементов последовательности 2 4 8 16 32 64 128 ….*/
//#include <iostream>
//using namespace std;
//int main() {
//    int x=2;
//    int counter=1;
//    cout<<x<<endl;
//    while(counter!=20){
//        x*=2;
//        cout<<x<<endl;
//        counter++;
//    }
//    return 0;
//}
/*4. Выведите на экран первые 11 членов последовательности Фибоначчи. Напоминаем, что первый и второй члены последовательности равны единицам, а каждый следующий — сумме двух предыдущих.*/
//#include <iostream>
//using namespace std;
//int main() {
//    int a,b,c,counter;
//    counter=2;
//    a=1,b=1;
//    cout<<a<<endl<<b<<endl;
//    while(counter!=11){
//    c=a+b;
//    a=b;
//    b=c;
//    cout<<c<<endl;
//counter++;}
//    return 0;
//}
/*5. Выведите квадраты натуральных чисел, не превосходящие данного числа N.*/
//#include <iostream>
//using namespace std;
//int main() {
//    int a,n;
//    a=1;
//    cout<<"Введите N: ";
//    cin>>n;
//    while(pow(a,2)<n){
//        cout<<pow(a,2)<<endl;
//        a++;
//    }
//    return 0;
//}
/*6. Пользователь вводит целое число. Необходимо вывести все целые числа, на которые данное число делится без остатка.*/
//#include <iostream>
//using namespace std;
//int main() {
//    int n,a;
//    a=1;
//    cout<<"Введите число: ";
//    cin>>n;
//    while(a!=n+1){
//        if(n%a==0)
//            cout<<a<<endl;
//        a++;
//    }
//    return 0;
//}
////////////////
//#include <iostream>
//using namespace std;
//int main() {
//  const int n = 5;
//  int sum=0;
//  for(int i = 0;i <= n ;i++){
//      sum+=i;
//  }
//  cout<<sum<<endl;
//    return 0;
//}
/*вывести все значения от а до б,а и б из консоли
вывести таблицу умножения на три
посчитать сумму такого выражения 1/2+1/3+1/4+...1/n
 просчитать произведение корней всех чисел от 1 до корня n
 -1^2+2^2-3^2+4^2-....n^2*/
/////////1/////////
//#include <iostream>
//using namespace std;
//int main() {
//    int a;
//    int b;
//  cin>>a>>b;
//    for(;a<= b;a++){
//        cout<<a<<endl;
//    }
//    return 0;
//}
/////////2//////////
//#include <iostream>
//using namespace std;
//int main() {
//    for(int i=0;i<11;i++){
//        cout<<"3 * "<<i<<"= "<<3*i<<endl;
//    }
//    return 0;
//}
/////////3///////////
//#include <iostream>
//using namespace std;
//int main() {
//    float n;
//    float sum=0;
//    cin>>n;
//    for(double i=2;i<=n;i++){
//        sum+=(1/i);
//    }
//    cout<<sum;
//    return 0;
//}
////////4////////////
//#include <iostream>
//using namespace std;
//int main() {
//    float n;
//    float sum=1;
//    cin>>n;
//    for(double i=1;i<=n;i++){
//        sum*=sqrt(i);
//    }
//    cout<<sum;
//    return 0;
//}
/////////5/////////////
////  -1^2+2^2-3^2+4^2-....n^2
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    int sum1=0;
//    int sum2=0;
//    cin>>n;
//    for(int i=0;i<=n;i++)
//    {
//        if(i%2==0)
//        {
//            sum1+=pow(i,2);
//        }
//        else
//            {
//            sum2-=pow(i,2);
//            }
//    }
//    cout<<sum1+sum2;
//
//    return 0;
//}
//вводят 2 года вывесте все высокосные каждый 4 исключая 100 и включая 400

//#include <iostream>
//using namespace std;
//int main() {
//    int firstyear;
//    int secondyear;
//    cin>>firstyear>>secondyear;
//    for(;firstyear<=secondyear;firstyear++)
//    {
//        if(firstyear%4==0 && firstyear%100!=0 || firstyear%400==0 )
//        {
//            cout<<firstyear<<endl;
//        }
//    }
//
//    return 0;
//}
//1.	Вводятся целые числа до первого числа, которое меньше двух. Определить, сколько простых чисел было введено.
//#include <iostream>
//using namespace std;
//int main() {
//    int x;
//    int counter=0;
//    for(;x>=2;)
//    {
//        cout<<"Enter size: ";
//        cin>>x;
//        counter++;
//    }
//    cout<<counter;
//    return 0;
//}
//2.	Найдите все четырехзначные числа, сумма цифр каждого из которых равна 15.
//#include <iostream>
//using namespace std;
//int main() {
//    int a=1000;
//    int b,c,d,e;
//    for(;a<10000;a++)
//    {
//        b=a/1000;
//        c=(a/100)%10;
//        d=(a/10)%10;
//        e=(a/1)%10;
//        if(b+c+d+e==15)
//        {
//            cout<<a<<endl;
//        }
//    }
//    return 0;
//}
//3.	Найти факториал 	введенного числа n.
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//   cout<<"Enter size: ";
//   cin>>n;
//   int factorial=1;
//    for(int i=1;i<=n;i++)
//    {
//       factorial*=i;
//    }
//    cout<<"Factorial: "<<factorial;
//    return 0;
//}
//    4. Одноклеточная амеба каждые 3 часа делится на 2 клетки. Определить,    сколько клеток будет через 3, 6, 9, … ,24 часа, если первоначально была одна амеба.
//#include <iostream>
//using namespace std;
//int main() {
//   int ameba=1;
//    for(int i=3;i<=24;i+=3)
//    {
//        ameba*=2;
//        cout<<"В "<<i<<" ч. "<<ameba<<" кл."<<endl;
//    }
//    return 0;
//}
///a///
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    int m;
//    cin >> n;
//    for (int i = 0; i <= n ; i++)
//    {
//        for (int j = 1;  j <= i; j++)
//        {
//            cout << "1" <<"  ";
//        }
//        m++;
//        cout << endl;
//    }
//    return 0;
//}
///b///
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    int m;
//    string a=" ";
//    cin>>n;
//    for(int i = n; i<=n &&i>=0;i--)
//    {
//        for(int j = 1;j <= m && j<=i;j++)
//        {
//            cout<<"1"<<"  ";
//        }
//        cout<<endl;
//        for(int c = n;c <= n && c>=i;c--)
//        {
//            cout<<a;
//        }
//    }
//    return 0;
//}
/////c///
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    int m;
//    cin >> n >> m;
//    for (int i = 1; i <= n ; i++)
//    {
//        for (int j = 1; j <= m ; j++)
//        {
//            cout << (i==1 ? 40+j : i==2 ? 50+j : i==3 ? 60+j : i==4 ? 70+j : 0) <<"  ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
///d///
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    int m;
//    cin >> n >> m;
//    for (int i = 0; i <= n ; i++)
//    {
//        for (int j = 1; j <= m ; j++)
//        {
//            cout << j;
//        }
//
//        cout << endl;
//    }
//
//    return 0;
//}
/////e///
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    int m;
//    cin >> n >> m;
//    for (int i = 1; i <= n ; i++)
//    {
//        for (int j = i%2 == 0 ? m : 1; j <= m && j >= 1 ; i % 2 == 0 ? j-- : j++)
//        {
//            cout << j;
//        }
//        cout <<'\n';
//    }
//    return 0;
//}
///f///
//#include <iostream>
//using namespace std;
//int main() {
//    for(int i=1;i<=10;i++)
//    {
//        for(int j = 1;j<=10;j++)
//        {
//            cout<< i << " * " << j << " = " << i*j <<endl;
//        }
//    }
//    return 0;
//}
///*///
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main() {
//    for(int a=102;a>50;a--)
//    {
//        for(int b=102-a;b>=1;b--)
//        {
//            cout << " ";
//        }
//        cout << setw(a*2-102) << setfill('$') << " " << endl;
//    }
//    for(int a=50;a<102;a++)
//    {
//        for(int b=102-a;b>=1;b--)
//        {
//            cout << " ";
//        }
//        cout << setw(a*2-102) << setfill('$') << " " << endl;
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//    int n = 9;
//    int m = 9;
//    for (int i = 1; i <= n ; i++)
//    {
//        for (int j = 1; j <= m ; j++)
//        {
//            if(i*j<10)
//            {
//                cout<<i<<" x "<<j<<" = "<<i*j<<"   ";
//            }
//            else
//            {
//                cout << i<<" x "<<j<<" = "<<i*j <<"  ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}
///////////////////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//    srand(time(0));
//int a,b;
///*b верхняя граница,a нижняя*/
//cin>>a>>b;
//   //cout<<a;
//   for(int i = 0;i<20;i++)
//   {
//       cout<<rand() % (b-a) + a<<'\t';
//       if((i+1) % 5==0)
//       {
//           cout<<endl;
//       }
//   }
//    return 0;
//}
/////////////////////////////////
//#include <iostream>
//using namespace std;
//int main()
//{
//  int n;
//  cout<<"Enter size of elements: ";
//  cin>>n;
//  int array[n];
//  for(int i =0;i<n;i++)
//  {
//      cout << "Enter " << i << " element: ";
//      cin >> array[i];
//  }
//  for(int i=n-1;i<n+1 && i>-1;i--)
//  {
//      cout << "Array[" << i << "] = " << array[i] << endl;
//  }
//
//  int max = array[0];
//  int min = array[0];
//  int i_max = 0;
//  int i_min = 0;
//    for (int i = 1; i < n; ++i)
//    {
//        if(max <= array[i])
//        {
//            i_max = i;
//            max = array[i];
//        }
//        else if(min > array[i])
//        {
//            i_min = i;
//            min = array[i];
//        }
//    }
//    cout<<min<<" Min"<<endl;
//    cout<<max<<" Max"<< endl;
//
//    for (int i = i_min; i <= i_max ; ++i)
//    {
//        if(array[i])
//        cout<<array[i]<<" ";
//        else if (array[i])
//        {
//            for (int j = i_max; j <=i_min  ; ++j)
//            {
//                cout<<array[i]<<" ";
//            }
//        }
//    }
//    cout<<endl;
//    return 0;
//}
//#include <iostream>
//#include <ctime>
//using namespace std;
// int main()
// {
//     srand(time(0));
//     const int n= 10;
//     int arr[n];
//     int i = 0;
//     do
//         {
//         bool found = false;
//         int k = rand() % 10;
//             for (int j = 0; j <= i ; j++)
//             {
//                 if (arr[j]==k)
//                 {
//                     found = true;
//                     break;
//                 }
//             }
//             if(found==true)
//                 continue;
//             arr[i]=k;
//             i++;
//     }
//     while (i<n);
//     for(int i =0 ; i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
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
//первую часть по возростанію вторую по спаданію
//елементи которие находятся на четних індексах по возростанію,а на не четних по убиванію
//отсортіровать елементи между первим мінімальним і последнім максімальним
//////1////////
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
//////2//////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//    srand(time(0));
//    const int n= 10;
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        arr[i]=rand()%20;
//        cout<<arr[i]<<'\t';
//    }
//    cout<<endl;
//
//    for (int i = 0; i < n; i++)
//    {
//        if(i%2==0) {
//            for (int j = n - 1; j > i; j--)
//            {
//                if (arr[j - 1] > arr[j])
//                {
//                    int tmp = arr[j - 1];
//                    arr[j - 1] = arr[j];
//                    arr[j] = tmp;
//                }
//
//            }
//            cout << arr[i] << '\t';
//        }
//       else if( i%2 != 0)
//       {
//            for (int j = n - 1; j > i; j--)
//            {
//                if (arr[j - 1] < arr[j])
//                {
//                    int tmp = arr[j - 1];
//                    arr[j - 1] = arr[j];
//                    arr[j] = tmp;
//                }
//            }
//            cout << arr[i] << '\t';
//        }
//    }
//    return 0;
//}
///////3/////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//    srand(time(0));
//    const int n= 10;
//    int arr[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        arr[i]=rand()%20;
//        cout<<arr[i]<<'\t';
//    }
//    cout<<endl;
//    int max = arr[0];
//    int min = arr[0];
//    int i_max = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if(max <= arr[i])
//        {
//            max = arr[i];
//            i_max = i;
//        }
//        if(min >= arr[i])
//        {
//            min = arr[i];
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//            for (int j = i_max - 1; j > i; j--)
//            {
//                if (arr[j - 1] > arr[j])
//                {
//                    int tmp = arr[j - 1];
//                    arr[j - 1] = arr[j];
//                    arr[j] = tmp;
//                }
//            }
//            cout << arr[i] << '\t';
//        }
//    return 0;
//}
//найті в нем колічество унікальних чісел
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
///////12.23///////
///////a//////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    const int row=7;
//    const int column=7;
//    int arr[row][column]{};
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][i]=1;
//            arr[i][column-i-1]=1;
//            cout<<arr[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    return 0;
//}
///////b//////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    const int row=7;
//    const int column=7;
//    int arr[row][column]{};
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][i]=1;
//            arr[i][column-i-1]=1;
//            arr[i][column/2]=1;
//            arr[row/2][j]=1;
//            cout<<arr[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    return 0;
//}
///////c////////
//#include <iostream>
//using namespace std;
//int main(){
//    int a=2;
//    const int row=7;
//    const int column=7;
//    int arr[row][column]{};
//    for (int i = 0; i < row; i++) {
//        for (int j = i; j < column-i; j++) {
//            arr[i][j]=1;
//        }
//    }
//    for (int i = 4; i < row; i++) {
//        for (int j = i-a; j < i+1; j++) {
//            arr[i][j]=1;
//        }
//        a += 2;
//    }
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j <column ; j++) {
//            cout<<arr[i][j]<<"\t";
//        }
//       cout<<endl;
//    }
//    return 0;
//}
//////12.24////
////a//////
//#include <iostream>
//using namespace std;
//int main(){
//    int a=2;
//    const int row=6;
//    const int column=6;
//    int arr[row][column]{};
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            arr[i][0]=1;
//            arr[0][j]=1;
//            arr[i][j]=arr[i][j-1]+arr[i-1][j];
//        }
//    }
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//           cout<<arr[i][j]<<'\t';
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//////b//////
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//     srand (time(0));
//    const int row = 6;
//    const int column = 6;
//    int arr[row][column]{};
//     for(int i = 0; i < 1; i++)
//    {
//        for(int j = 0; j < column; j++)
//         {
//             arr[i][j]= j+1;
//             cout << arr [i][j] << "\t";
//             }
//         cout << endl;
//    }
//        for(int i = 1; i < row; i++){
//        for(int j = 0; j < column; j++)
//        {
//            arr[i][j]=arr[i-1][j];
//             if (arr[i][j]<6) {
//             arr[i][j]++;
//             }
//            else {
//                 arr[i][j] = 1;
//             }
//             cout << arr [i][j] << "\t";
//             }
//         cout << endl;
//         }
//    return 0;
//}
/////12.28////
//#include <iostream>
//using namespace std;
//
//int main(){
//    const int N = 20;
//    int n =5;
//    int a[N][N];
//    int k = 1;
//    int i = 0;
//    int j = 0;
//    while (k <= n*n){
//        a[i][j] = k;
//        if (i <= j + 1 && i + j < n - 1)
//            ++j;
//        else if (i < j && i + j >= n - 1)
//            ++i;
//        else if (i >= j && i + j > n - 1)
//            --j;
//        else
//            --i;
//        ++k;
//    }
//    for (int i = 0; i < n; ++i){
//        for (int j = 0; j < n; ++j)
//            cout << a[i][j] << "\t";
//        cout << endl;
//    }
// return 0;
//}
//////12.27///////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    int a =0;
//   const int m = 6;
//    const int n = 6;
//    int arr[m*n];
//    int arr2[m][n];
//    for (int i = 0; i < m*n; i++) {
//        arr[i]=random()%21;
//        cout<<arr[i]<< " ";
//    }
//    cout<<endl;
//    for (int i = 0 ; i < m; i++ ) {
//        for (int j = 0; j < n; j++) {
//
//            arr2[i][j]=arr[a];
//            cout<<arr2[i][j]<<"\t";
//            a++;
//        }
//        cout<<endl;
//
//    }
//    return 0;
//}
/////12.32/////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    int a =0;
//    const int m = 6;
//    const int n = 6;
//    int arr[m*n];
//    int arr2[m][n];
//    for (int i = 0; i < m*n; i++) {
//        arr[i]=random()%21;
//    }
//    for (int i = 0 ; i < m; i++ ) {
//        for (int j = 0; j < n; j++) {
//            arr2[i][j]=arr[a];
//            cout<<arr2[i][j]<<"\t";
//            a++;
//        }
//        cout<<endl;
//
//    }
//    cout<<endl;
//    cout<<"a)"<<endl;
//        for (int j = 5; j != -1; j--) {
//            cout<<arr2[2][j]<<"\t";
//        }
//        cout<<endl;
//    cout<<"b)"<<endl;
//        int k =3;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            if(j!=k-1)
//            cout<<arr2[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    return 0;
//}
////////1//////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    int num;
//    cout<<"Enter row: ";
//    cin>>num;
//    int counter =0;
//    const int row=25;
//    const int place =36;
//    int arr[row][place]{};
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < place; j++) {
//arr[i][j]=random()%2;
//cout<<arr[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    for (int i = 0; i < place; i++) {
//        if(arr[num][i]==1)
//           counter++;
//    }
//    cout<<"IN "<<num<<" Sold: "<<counter<<endl;
//    return 0;
//}
///////2///////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    int num;
//    cout<<"Enter vagon: ";
//    cin>>num;
//    int counter =0;
//    const int row=18;
//    const int place =36;
//    int arr[row][place]{};
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < place; j++) {
//            arr[i][j]=random()%2;
//            cout<<arr[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    for (int i = 0; i < place; i++) {
//        if(arr[num][i]==0)
//            counter++;
//    }
//    cout<<"IN "<<num<<" free: "<<counter<<endl;
//    return 0;
//}
//////////3//////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main(){
//    srand(time(0));
//    int num = 0;
//    int counter1 = 0;
//    int counter2 = 0;
//    int num_2 = 0;
//    const int row = 6;
//    const int place = 6;
//    int arr[row][place];
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < place; j++) {
//            arr[i][j] = random() % 40;
//            cout << arr[i][j] <<"\t";
//            if(arr[i][j] > 30)
//                num += arr[i][j];
//            if(arr[i][j] % 2 != 0)
//                counter1++;
//            else{
//                counter2++;
//                num_2+=arr[i][j];
//            }
//
//        }
//        cout<<endl;
//    }
//    cout<<"a)"<<num<<endl;
//    cout<<"b)"<<counter1<<endl;
//    cout<<"c)"<<num_2/counter2<<endl;
//    return 0;
//}
/////////////////
//найти макс число из трех введенных
//среди 6 введенных
// написать ф
//4 -100 +400
//ф для подщета факториала
//4 числа а возвращать то число сумма чисел которого самая большая
//поиск макс значение в одномерном
//////////
//#include <iostream>
//
//using namespace std;
//
//int max(int a, int b, int c) {
//    if (a > b && a > c) {
//        return a;
//    } else if (b > c) {
//        return b;
//    } else {
//        return c;
//    }
//}
//
//int max(int a, int b, int c, int d, int e, int g) {
//    if (a > b && a > c && a > d && a > e && a > g) {
//        return a;
//    } else if (b > c && b > d && b > e && b > g) {
//        return b;
//    } else if (c > d && c > e && c > g) {
//        return c;
//    } else if (d > e && d > g) {
//        return d;
//    } else if (e > g) {
//        return e;
//    } else {
//        return g;
//    }
//}
//
//
//int main() {
//    int a,b,c,d,e,g;
//    cin>>a>>b>>c;
//    cout<<max(a,b,c);
//    return 0;
//}
//////2,3//////
//#include <iostream>
//
//using namespace std;
//
//void visokosniy(int a,int b) {
//    for (int i = a; i <= b; i++) {
//        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
//            cout << i <<endl;
//        }
//    }
//}
//void factorial(int a){
//    int c =1;
//    for (int i = a; i>0; i--) {
//        c*=i;
//    }
//   cout<<"Factorial:"<<c<<endl;
//}
//
//int main() {
//        int a;
//        int b;
////        cin>>a>>b;
////        visokosniy(a,b);
//factorial(5);
//    return 0;
//}
///////4/////

//////dz/////
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//////1///
//int min(int a, int b) {
//    if (a < b)
//        return a;
//    else
//        return b;
//}
//
//////2///
//void stepen(int a, int b) {
//    cout << pow(a, b) << "\t";
//}
//
/////3///
//bool is_prost(int x) {
//    for (int i = sqrt(x); i > 1; i--)
//        if (!(x % i))
//            return false;
//        else
//            return true;
//}
//
/////4///
//int biggestSum(int a, int b) {
//    int tmp_1 = a;
//    int tmp_2 = b;
//    int sum_a = 0;
//    int sum_b = 0;
//    while (tmp_1 != 0 && tmp_2 != 0) {
//        sum_a += tmp_1 % 10;
//        tmp_1 = tmp_1 / 10;
//        sum_b += tmp_2 % 10;
//        tmp_2 = tmp_2 / 10;
//    }
//    if (sum_a > sum_b)
//        return a;
//    else
//        return b;
//}
//
/////5///
//int max(int a, int b) {
//    if (a > b) {
//        return a;
//    } else {
//        return b;
//    }
//}
//
//int max(int a, int b, int c, int d, int e, int g) {
//    if (max(a, b) > max(c, d) && max(a, b) > max(e, g)) {
//        return max(a, b);
//    } else if (max(c, d) > max(e, g)) {
//        return max(c, d);
//    } else {
//        return max(e, g);
//    }
//}
//
/////6///
//int biggerThenMidle(int arr[], int size) {
//    int sum = 0;
//    for (int i = 0; i < size; i++) {
//        sum += arr[i];
//    }
//    int midle = sum / size;
//    int counter = 0;
//    for (int i = 0; i < size; i++) {
//        if (arr[i] > midle) {
//            counter++;
//        }
//    }
//    return counter;
//}
//
/////7///
//void biggestNumber(int a) {
//    int tmp = a;
//    int counter = 0;
//    while (tmp != 0) {
//        tmp = tmp / 10;
//        counter++;
//    }
//    tmp = a;
//    int arr[counter + 1];
//    for (int i = 0; tmp != 0; i++) {
//        arr[i] = tmp % 10;
//        tmp = tmp / 10;
//    }
//    int boof = 0;
//    for (int i = 0; i < counter + 1; i++) {
//
//        if (arr[i] > boof)
//            boof = arr[i];
//    }
//    cout << boof << "\t";
//}
//
/////8///
//void factorial(int a) {
//    int c = 1;
//    for (int i = a; i > 0; i--) {
//        c *= i;
//    }
//    cout << "Factorial:" << c << endl;
//}
//
/////9///
//void arrSum(int arr[], int size) {
//    int sum = 0;
//    for (int i = 0; i < size; i++) {
//        sum += arr[i];
//    }
//    cout << sum << "\t";
//}
//
//int main() {
//
//    return 0;
//}

//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//void pryamougolnik(int a = 20, int b = 10) {
//    for (int i = 0; i < b; i++) {
//        for (int j = 0; j < a; ++j) {
//            cout << "*" << "\t";
//        }
//        cout << endl;
//    }
//}
//
//void pryamougolnik(char ch, int a = 20, int b = 10) {
//    for (int i = 0; i < b; i++) {
//        for (int j = 0; j < a; ++j) {
//            cout << ch << "\t";
//        }
//        cout << endl;
//    }
//}
//
//template<typename T>
//T Sum(T arr[], int n) {
//    T sum;
//    for (int i = 0; i < n; i++) {
//        sum += arr[i];
//    }
//    return sum;
//}
//
//template<typename T>
//T Sum(T a, T b, T c) {
//    int sum = a + b + c;
//    return sum;
//}
//
//void zapolneniye_mas(int arr2[], int n, int a = 0) {
//    srand(time(0));
//    if (a != 0) {
//        for (int i = 0; i < n; i++) {
//            arr2[i] = random() % 20;
//        }
//    } else {
//        int c = 1;
//        for (int i = 0; i < n; i++) {
//            arr2[i] = c;
//            if (c == 9) {
//                c = 1;
//            } else {
//                c++;
//            }
//        }
//    }
//}
//
//int main() {
//
//    pryamougolnik();
//    cout << endl;
//    pryamougolnik('$');
//    cout << endl;
//    const int a = 3;
//    double arr[a] = {1.1, 2.2, 3.3};
//    cout << Sum(arr, a) << endl;
//    cout << Sum('1', '2', '3') << endl;
//    const int N = 12;
//    int arr2[N];
//    zapolneniye_mas(arr2, N, 1);
//    for (int i = 0; i < N; i++) {
//        cout << arr2[i] << '\t';
//    }
//    cout << endl;
//    zapolneniye_mas(arr2, N, 0);
//    for (int i = 0; i < N; i++) {
//        cout << arr2[i] << '\t';
//    }
//    cout << endl;
//    return 0;
//}
//прямуголтнік із звездочек два аргкмента ш 20 ви 10
//перегрузка для єтой функціі только с собственним сімволом
//напісать шаблонную функцію которая будет счітать сумму елементов одномерного масіва
//перегрузка для єтой функціі, сумму трьох чісел
//заполніть масів рандомнимі чісламі,3 аргумента,еслі третій аргумент равен 0,то он заполняется 1 2 3...9
//#include <iostream>
//
//using namespace std;
//
//template<typename T>
///////1/////
//double masAvarage(T arr[], int n) {
//    double sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += arr[i];
//    }
//    return sum / n;
//}
//
///////2//////
//template<typename T, typename S>
//bool searching(S n, int a, int b, T arr[a][b]) {
//
//    for (int i = 0; i < a; i++) {
//        for (int j = 0; j < b; ++j) {
//            if (arr[i][j] == n)
//                return true;
//        }
//    }
//    return false;
//}
//
///////3//////
//int max(int a, int b) {
//    if (a > b) {
//        return a;
//    } else {
//        return b;
//    }
//}
//
//int max(int a, int b, int c) {
//    if (a > b && a > c) {
//        return a;
//    } else if (b > c) {
//        return b;
//    } else {
//        return c;
//    }
//}
//
//int max(int a, int b, int c, int d) {
//    if (max(a, b) > max(c, d)) {
//        return max(a, b);
//    } else {
//        return max(c, d);
//    }
//}
//
//int max(int a, int b, int c, int d, int e) {
//    if (max(a, b) > max(c, d, e)) {
//        return max(a, b);
//    } else {
//        return max(c, d, e);
//    }
//}
//
//int max(int a, int b, int c, int d, int e, int f) {
//    if (max(a, b, c) > max(d, e, f)) {
//        return max(a, b, c);
//    } else {
//        return max(d, e, f);
//    }
//}
//
///////4/////
//template<typename T>
//T enter(T a, T b) {
//    cout << "Введите первый аргумент: ";
//    cin >> a;
//    cout << "Введите второй аргумент: ";
//    cin >> b;
//    return max(a,b);
//}
//
//template<typename T>
//T max(T a, T b) {
//    if (a > b) {
//        return a;
//    } else {
//        return b;
//    }
//
//}
//
//int main() {
//
//}
////////dz1///////
//#include <iostream>
//
//using namespace std;
//
//int Sum(int vallue) {
//    if (vallue == 0) {
//        return 0;
//    }
//    return vallue + Sum(vallue - 1);
//}
//
//int fubonachi(int size) {
//    if (size == 1 || size == 2)
//        return 1;
//    return fubonachi(size - 1) + fubonachi(size - 2);
//}
//int pow(int size,int stepen){
//    if(stepen==0)
//        return 1;
//    return size * pow(size,stepen-1) ;
//}
//int vivod_naoborot(int size){
//    if (size==0) return 0;
//    cout << size%10;
//    return vivod_naoborot(size/10);
//}
//
//int main() {
//    cout << Sum(5)<<endl;
//    cout<< fubonachi(6)<<endl;
//    cout<<pow(2,4)<<endl;
//    vivod_naoborot(9130);
//    return 0;
//}
//////dz2////////
//////1/////////
//#include <iostream>
//using namespace std;
//void sorting(int arr[],int size,int quastion){
//    int tmp;
//    int index;
//    for (int i = 0; i < size; i++) {
//        tmp=arr[i];
//        index = i-1;
//        while(index>=0 && quastion==0 ? arr[index] > tmp : arr[index] < tmp)
//        {
//            arr[index+1]=arr[index];
//            arr[index]= tmp;
//            index--;
//        }
//    }
//}
//int main(){
//    int arr[10] = {9,7,6,4,6,3,1,4,2,11};
//    sorting(arr,10,0);
//    for (int i = 0; i < 10; i++) {
//        cout<<arr[i]<<"\t";
//
//    }
//    return 0;
//}
///////2////////
//#include <iostream>
//#include <ctime>
//using namespace std;
//int searching_sorting(int arr[],int size){
//    int first;
//    int last;
//    for (int i = 0; i < size; i++) {
//        if(arr[i]<0)
//            first = i;
//        break;
//    }
//    for (int i = 0; i < size; i++) {
//        if(arr[i]<0)
//            last = i;
//    }
//        int tmp;
//    int index;
//    for (int i = first; i < last; i++) {
//        tmp=arr[i];
//        index = i-1;
//        while(index>=0 &&  arr[index] < tmp)
//        {
//            arr[index+1]=arr[index];
//            arr[index]= tmp;
//            index--;
//        }
//    }
//}
//int main(){
//    int arr[10];
//    srand(time(0));
//    for (int i = 0; i < 10;i++) {
//        arr[i]=random()%41-20;
//        cout<<arr[i]<<"\t";
//    }
//    cout<<endl;
//searching_sorting(arr,10);
//    for (int i = 0; i < 10; i++) {
//        cout<<arr[i]<<"\t";
//    }
//    return 0;
//}

////////////////
//////1////
//#include <iostream>
//#include <ctime>
//
//using namespace std;

//bool isPrime(int n) {
//    if (n > 1) {
//        for (int i = 2; i < n; i++)
//            if (n % i == 0)
//                return false;
//        return true;
//    }
//    return false;
//}
//
//int main() {
//    srand(time(0));
//    int n;
//    cin >> n;
//    int count_even = 0;
//    int *p = new int[n];
//    for (int i = 0; i < n; i++) {
//        p[i] = 100 + rand() % 1000;
//        cout << p[i] << "\t";
//        if (isPrime(p[i]) == true) {
//            count_even++;
//     }
//    }
//    cout << "\n";
//    int *pp = new int[count_even];
//    for (int i = 0, j = 0; i < n; i++) {
//        if (isPrime(p[i]) == true) {
//            pp[j++] = p[i];
//            cout << pp[j - 1] << "\t";
//        }
//    }
//    delete[] pp;
//    delete[] p;
//}
////2/////
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//
//bool isChetnoye(int n) {
//   if(n%2 == 0)
//       return true;
//   return false;
//}
//
//int main() {
//    srand(time(0));
//    int n;
//    cin >> n;
//    int count_even = 0;
//    int count_even2 = 0;
//    int *p = new int[n];
//    for (int i = 0; i < n; i++) {
//        p[i] = 100 + rand() % 1000;
//        cout << p[i] << "\t";
//        if (isChetnoye(p[i]) == true) {
//            count_even++;
//        } else {
//            count_even2++;
//     }
//    }
//    cout << "\n";
//    int *pp = new int[count_even];
//    int *ppp = new int[count_even2];
//    for (int i = 0, j = 0, c = 0; i < n; i++) {
//        if (isChetnoye(p[i]) == true) {
//            pp[j++] = p[i];
//            cout << pp[j - 1] << "\t";
//        } else {
//            ppp[c++] = p[i];
//        }
//    }
//    cout << "\n";
//    for (int i = 0; i < count_even2; i++) {
//        cout << ppp[i] << "\t";
//    }
//    delete[] ppp;
//    delete[] pp;
//    delete[] p;
//}
///3///
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//
//
//int main() {
//    srand(time(0));
//    int n;
//    cin >> n;
//    int *p = new int[n];
//    for (int i = 0; i < n; i++) {
//        p[i] = 100 + rand() % 1000;
//        cout << p[i] << "\t";
//    }
//    cout << "\n";
//    int *max = &p[0];
//    for (int i = 0; i < n; i++) {
//        if(*max<p[i]){
//            *max = p[i];
//            max = &p[i];
//        }
//    }
//    int *min = &p[0];
//    for (int i = 0; i < n; i++) {
//        if(*min>p[i]){
//            *min = p[i];
//            min = &p[i];
//        }
//    }
//    cout<<max<<"\n"<<min<<"\n";
//    if(max>min)
//cout<<max-min;
//else
//        cout<<min-max;
//    delete[] p;
//}
/////4/////
//
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//
//
//int main() {
//    srand(time(0));
//    int n;
//    cin >> n;
//    int *p = new int[n];
//    for (int i = 0; i < n; i++) {
//        p[i] = 100 + rand() % 1000;
//        cout << p[i] << "\t";
//    }
//    cout << "\n";
//int *first = &p[0];
//    int *second = &p[0];
//    first = &p[0]+2;
//    second = &p[0]+4;
//    cout<<*first<<"\n"<<*second;
//    delete[] p;
//}
/////////////
////////1///////
//#include <iostream>
//using namespace std;
//int changeBack(int &a){
//    int tmp;
//    int result;
//    while(a!=0) {
//        tmp = a%10;
//        result=result * 10+tmp;
//        a = a/10;
//    }
//    a = result;
//    return a;
//}
//int main(){
//int a;
//cin>>a;
//cout<<changeBack(a);
//}
////////2/////
//#include <iostream>
//using namespace std;
//
//int main(){
//    int a = 1;
//    int &b = a;
//    int &c = a;
//    int &d = a;
//    cout<<&a<<"  "<<&b<<"  "<<&c<<"  "<<&c;
//}
/////3/////
//#include <iostream>
//using namespace std;
//template<typename T>
//T *renull(T arr[],int index);
//int main(){
//int arr[5] = {1,2,3,4,5};
//cout<<renull(arr,3)<<"\n";
//    for (int i = 0; i < 5; i++) {
//        cout<<arr[i]<<'\t';
//    }
//    cout<<endl;
//}
//template<typename T>
// T *renull(T arr[],int index){
//    arr[index] = NULL;
//    int *href =&arr[index];
//    return href;
//}
////4////
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int create(int a, int b);
//
//bool isPrime(int n);
//
//int main() {
//    srand(time(0));
//    int a = 10;
//    int b = 9;
//    if (a > b)
//        cout << create(a, b);
//    else
//        create(a, b);
//    return 0;
//}
//
//bool isPrime(int n) {
//    if (n > 1) {
//        for (int i = 2; i < n; i++)
//            if (n % i == 0)
//                return false;
//        return true;
//    }
//    return false;
//}
//
//int create(int a, int b) {
//    if (a > b) {
//        int counter = 0;
//        int *arr = new int[a];
//        for (int i = 0; i < a; i++) {
//            arr[i] = 100 + rand() % 1000;
//            if (isPrime(arr[i]) == false) {
//                counter++;
//            }
//        }
//        return counter;
//    } else {
//        cout << b << " > " << a << '\n';
//    }
//}
//////////urok////////
//#include <iostream>
//
//using namespace std;
//
//int foo() {
//    return 1;
//}
//
//int foo1(int a) {
//    cout << a;
//    return 1;
//}
//
//void foo2() {
//    cout << 123;
//}
//
//bool is_prime(int value) {
//    if (value % 2 == 0)
//        return true;
//    return false;
//}
//
//void show(int value, bool(*predicate)(int)) {
//    if (predicate(value)) {
//        cout << "true" << "\n";
//
//    } else
//        cout << "false" << "\n";
//}
//bool ascending(int a,int b){
//    return a>b;
//}
//bool desending(int a,int b){
//    return a<b;
//}
//void sort_arr(int *arr,int lenth,bool(*ordering)(int,int)){
//    for (int i = 0; i < lenth; i++) {
//        for (int j = i+1; j < lenth; j++) {
//            if(ordering(arr[i],arr[j])){
//                swap(arr[i],arr[j]);
//            }
//        }
//    }
//}
//int main() {
//    cout << foo() << "\n";
//    cout << foo1 << "\n";
//    int (*func_ptr)();
//    func_ptr = foo;
//    cout << func_ptr() << endl;
//    void (*f)() = foo2;
//    f();
//    int o = 2;
//    void *p = &o;
//    show(10, is_prime);
//
//}
//////////
//#include <iostream>
//using namespace std;
////stroka eto posledovatelniy nabor simvolov
//void print (const char *str);
//int main() {
////string a = "abc";
////string b = "deg";
////cout<<a+b;
////char str[] ="Hello";
////cout<<str<<"\n";
////print("Zdarova parnisha!");
//char *s = new char[100];
//cin.getline(s,100);
//cout<<s;
//delete []s;
//
//}
//void print(const char *str){
//    for (int i = 0; str[i]!='\0' ; i++) {
//        cout<<str[i];
//    }
//}
//////////////
//1. Написать следующие функции для работы с динамическим массивом:
//·          Функция распределения динамической памяти
//·         Функция инициализации динамического массива
//·          Функция печати динамического массива
//·          Функция удаления динамического массива
//·          Функция добавления элемента в конец массива
//·          Функция вставки элемента по указанному индексу
//·          Функция удаления элемента по указанному индексу
////
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int *sortDM(int *massiv, int size);
//
//void inicialization(int *b, int size);
//
//void print(int *b, int size);
//
//void del(int *b);
//
//int *addLastElem(int *b, int size, int element);
//
//int *insertElem(int *b, int size, int index, int element);
//
//int *deleteElement(int *b, int size, int index);
//
//int main() {
//    int *a = NULL;
//    srand(time(0));
//    a = sortDM(a, 10);
//    inicialization(a, 10);
//    print(a, 10);
//    a = addLastElem(a, 10, 1000);
//    print(a, 11);
//    a = insertElem(a, 11, 3, 112);
//    print(a, 12);
//    a = deleteElement(a, 11, 2);
//    print(a, 11);
//    del(a);
//}
//
//int *sortDM(int *b, int size) {
//    return b = new int[size];
//}
//
//void inicialization(int *b, int size) {
//    for (int i = 0; i < size; i++) {
//        *b = rand() % 20;
//        b++;
//    }
//}
//
//void print(int *b, int size) {
//    for (int i = 0; i < size; i++) {
//        cout << b[i] << "\t";
//    }
//    cout << "\n";
//}
//
//void del(int *b) {
//    delete[] b;
//}
//
//int *addLastElem(int *b, int size, int element) {
//    int *temp = NULL;
//    int numTemp = size + 1;
//    temp = sortDM(temp, numTemp);
//    for (int i = 0; i < size; i++) {
//        temp[i] = b[i];
//    }
//    temp[size] = element;
//    del(b);
//    return temp;
//}
//
//int *insertElem(int *b, int size, int index, int element) {
//    int *temp = NULL;
//    int numTemp = size + 1;
//    temp = sortDM(temp, numTemp);
//    for (int i = 0; i < index; i++) {
//        temp[i] = b[i];
//    }
//    for (int i = index + 1; i <=size; i++) {
//        temp[i] = b[i - 1];
//    }
//    temp[index] = element;
//    del(b);
//    return temp;
//
//}
//
//int *deleteElement(int *b, int size, int index) {
//    int *temp = NULL;
//    int numTemp = size - 1;
//    temp = sortDM(temp, numTemp);
//    for (int i = 0; i < index; i++) {
//        temp[i] = b[i];
//    }
//    for (int i = index; i < size; i++) {
//        temp[i] = b[i + 1];
//    }
//    del(b);
//    return temp;
//
//}
///////////////////
///1. Пользователь вводит строку с клавиатуры в фиксированный массив.
///Необходимо проверить, сколько элементов массива теперь занято и сколько свободно.
//#include <iostream>
//using namespace std;
//int main() {
//    char *s = new char[100];
//    cin.getline(s,100);
//    cout<<s<<"\n";
//    int counter = 0;
//    for (int i = 0; i < 100; i++) {
//        s[i]!=NULL ? counter++ : NULL;
//    }
//    cout<<"Not empty:"<<counter<<"\t"<<"Empty:"<<100-counter;
//    delete []s;
//}
///2. Составить программу, которая запрашивает информацию о пользователе,
///а потом выводит её на экране. (Имя, фамилия, возраст, адрес и т.п. ).
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char *s = new char[20];
//    char *a = new char[20];
//    char *b = new char[10];
//    char *h = new char[50];
//    cout << "Enter your Name:";
//    cin.getline(s, 20);
//    cout << "Enter your Last Name:";
//    cin.getline(a, 20);
//    cout << "Enter your Age:";
//    cin.getline(b, 10);
//    cout << "Enter your Adress:";
//    cin.getline(h, 50);
//    cout << "Name: " << s << "\n";
//    cout << "Last Name: " << a << "\n";
//    cout << "Age: " << b << "\n";
//    cout << "Adress: " << h << "\n";
//    delete[]h;
//    delete[]b;
//    delete[]a;
//    delete[]s;
//}
///3. Составить программу, которая запрашивает название государства и его столицу,
///а затем выводит информацию в виде: Country - ..., Capital - ...
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char *s = new char[20];
//    char *a = new char[20];
//    cout << "Enter Country:";
//    cin.getline(s, 20);
//    cout << "Enter your Capital:";
//    cin.getline(a, 20);
//    cout << "Country - " << s <<" , "<< "Capital - " << a << "\n";
//
//    delete[]a;
//    delete[]s;
//}
///4. Дано слово, состоящее из четного числа букв.
///Вывести на экран его первую половину, не используя оператор цикла.
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char *s = new char[20];
//    cout << "String: ";
//    cin >> s;
//    s[strlen(s) / 2] = 0;
//    cout <<"Half: "<<s << endl;
//    delete[]s;
//}
///5. Дано название страны. Напечатать это слово в столбик.
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char *s = new char[20];
//    cout << "Country: ";
//    cin >> s;
//    for (int i = 0; i<20 ; i++) {
//        if (s[i] == NULL)
//            break;
//        cout<<s[i]<<'\n';
//    }
//    delete[]s;
//}
///6. Определить число букв “о” в предложении.
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char *s = new char[100];
//    cin.getline(s,100);
//    int counter = 0;
//    for (int i = 0; i < 100; i++) {
//        if (s[i] == NULL)
//            break;
//        if(s[i]=='o')
//            counter++;
//    }
//    cout<<counter;
//    delete[]s;
//}
///7. Дан текст. Определить, сколько в нем предложений.
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char *s = new char[1000];
//    cin.getline(s,1000);
//    int counter = 0;
//    for (int i = 0; i < 1000; i++) {
//        if (s[i] == NULL)
//            break;
//        if(s[i]=='.' || s[i]=='?' || s[i]=='!' )
//            counter++;
//        if(s[i-1] == '.' && s[i]=='.')
//            counter--;
//    }
//    cout<<counter <<" Sentenses";
//    delete[]s;
//}
///8. Дано предложение. Определить, каких букв в нем больше: “m” или “M”.
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char *s = new char[1000];
//    cin.getline(s,1000);
//    int counter_m = 0;
//    int counter_M = 0;
//    for (int i = 0; i < 1000; i++) {
//        if (s[i] == NULL)
//            break;
//        if(s[i]=='m')
//            counter_m++;
//        if(s[i]=='M')
//            counter_M++;
//    }
//    if(counter_M>counter_m)
//    cout<<"M more";
//    else if(counter_M==counter_m)
//        cout<<"Same";
//    else
//        cout<<"m more";
//    delete[]s;
//}
///10. Дано предложение. Заменить все буквы “е” в нем на “u”.
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char *s = new char[100];
//    cin.getline(s,100);
//    for (int i = 0; i < 100; i++) {
//        if (s[i] == NULL)
//            break;
//       if (s[i]  == 'e')
//           s[i] = 'u';
//    }
//    for (int i = 0; i < 100; i++) {
//        if (s[i] == NULL)
//            break;
//        cout<<s[i];
//    }
//    delete[]s;
//}
///11. Дано предложение. Удалить из него все буквы “с”.
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char *s = new char[100];
//    cin.getline(s,100);
//    for (int i = 0; i < 100; i++) {
//        if (s[i]  == 'c')
//            s[i] = NULL;
//    }
//    for (int i = 0; i < 100; i++) {
//        cout<<s[i];
//    }
//    delete[]s;
//}
///12. Удалить из строки символ с заданным индексом.
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char *s = new char[100];
//    cin.getline(s, 100);
//    int ind;
//    cout << endl << "Enter index: ";
//    cin >> ind;
//    s[ind] = NULL;
//    cout<<'\n';
//    for (int i = 0; i < 100; i++) {
//        cout << s[i];
//    }
//    delete[]s;
//}
//////////////////////
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//void showda(int **arr, int count_rows, int count_columns);
//
//int **creatda(int rows, int columns);
//
//void delda(int **&arr, int rows);
//
//void fillda(int **arr, int rows, int columns, int begin = 0, int end = 10);
//
//void fillda_ri(int **arr, int rows_i, int columns, int begin, int end);
//
//void fillda_ci(int **arr, int rows, int columns_i, int begin, int end);
//
//int **addRow(int **arr, int &rows, int columns);
//
//int **addColumn(int **arr, int rows, int &columns);
//
//int **delRow(int **arr, int &rows, int columns, int row_i);
//
//int **delColumn(int **arr, int rows, int &columns, int column_i);
//
//void changeColumn(int **arr, int first, int second, int rows);
//
//void changeRows(int **arr, int first, int second, int columns);
//
//int main() {
//    srand(time(0));
//    int columns;
//    int rows;
//    cout << "Введите изначальные размеры масива:" << "\n";
//    cout << "enter rows:";
//    cin >> rows;
//    cout << "enter columns:";
//    cin >> columns;
//    char a;
//    int **arr = nullptr;
//    arr = creatda(rows, columns);
//    fillda(arr, rows, columns);
//    showda(arr, rows, columns);
//    string yesno;
//    do {
//    cout << "a) Добавить строку со случайными числами.\n"
//            "b) Добавить столбец со случайными числами.\n"
//            "c) Добавить строку с числами пользователя. (Запрашивается строка чисел после выбора этого пункта меню).\n"
//            "d) Добавить столбец с числами пользователя.\n"
//            "e) Удалить строку. (После этого запрашивается номер строки, которую нужно удалить).\n"
//            "f) Удалить столбец.(То же самое, что и в пункте e) ).\n"
//            "g) Поменять местами столбцы. (Запрашиваются номера столбцов).\n"
//            "h) Поменять местами строки. (Запрашивается номер строки).\n"
//            "i) Выход из программы.\n";
//
//        cout << "Введите действие:";
//        cin >> a;
//
//        switch (a) {
//            case 'a':
//                arr = addRow(arr, rows, columns);
//                fillda_ri(arr, rows, columns, 0, 15);
//                showda(arr, rows, columns);
//                break;
//            case 'b':
//                arr = addColumn(arr, rows, columns);
//                fillda_ci(arr, rows, columns, 0, 15);
//                showda(arr, rows, columns);
//                break;
//            case 'c':
//                arr = addRow(arr, rows, columns);
//                for (int j = 0; j < columns; j++) {
//                    cout << "Введите arr[" << rows - 1 << "][" << j << "]:";
//                    cin >> arr[rows - 1][j];
//                }
//                showda(arr, rows, columns);
//                break;
//            case 'd':
//                arr = addColumn(arr, rows, columns);
//                for (int i = 0; i < rows; i++) {
//                    cout << "Введите arr[" << i << "][" << columns - 1 << "]:";
//                    cin >> arr[i][columns - 1];
//                }
//                showda(arr, rows, columns);
//                break;
//            case 'e':
//                int row_i;
//                cout << "Введите какую строчку вы хотите удалить:";
//                cin >> row_i;
//                arr = delRow(arr, rows, columns, row_i);
//                showda(arr, rows, columns);
//                break;
//            case 'f':
//                int column_i;
//                cout << "Введите какой столбик вы хотите удалить:";
//                cin >> column_i;
//                arr = delColumn(arr, rows, columns, column_i);
//                showda(arr, rows, columns);
//                break;
//            case 'g':
//                int first;
//                int second;
//                cout << "Введите какие столбцы вы хотите поменять:" << "\n";
//                cout << "First:";
//                cin >> first;
//                cout << "Second:";
//                cin >> second;
//                changeColumn(arr, first, second, rows);
//                showda(arr, rows, columns);
//                break;
//            case 'h':
//                cout << "Введите какие строки вы хотите поменять:" << "\n";
//                cout << "First:";
//                cin >> first;
//                cout << "Second:";
//                cin >> second;
//                changeRows(arr, first, second, columns);
//                showda(arr, rows, columns);
//                break;
//            case 'i':
//                delda(arr, rows);
//                cout << "Программа завершена успешно!";
//                return 0;
//            default:
//                cout << "Не правильная буква команды...";
//                delda(arr, rows);
//                return 0;
//        }
//
//        cout << "Хотите сделать чтото еще? yes/no:";
//        cin >> yesno;
//    } while (yesno != "no");
//    delda(arr, rows);
//    return 0;
//}
//
//void changeColumn(int **arr, int first, int second, int rows) {
//    for (int j = 0; j < rows; j++) {
//        int tmp = arr[j][first - 1];
//        arr[j][first - 1] = arr[j][second - 1];
//        arr[j][second - 1] = tmp;
//    }
//
//}
//
//void changeRows(int **arr, int first, int second, int columns) {
//    for (int j = 0; j < columns; j++) {
//        int tmp = arr[first - 1][j];
//        arr[first - 1][j] = arr[second - 1][j];
//        arr[second - 1][j] = tmp;
//    }
//
//}
//
//int **addColumn(int **arr, int rows, int &columns) {
//    int **temp = nullptr;
//    temp = creatda(rows, columns + 1);
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < columns; j++) {
//            temp[i][j] = arr[i][j];
//        }
//    }
//
//    delda(arr, rows);
//    columns++;
//    return temp;
//}
//
//int **delColumn(int **arr, int rows, int &columns, int column_i) {
//    int **temp = nullptr;
//    temp = creatda(rows, columns - 1);
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < column_i - 1; j++) {
//            temp[i][j] = arr[i][j];
//        }
//    }
//    for (int i = 0; i < rows; i++) {
//        for (int j = column_i; j < columns; j++) {
//            temp[i][j] = arr[i][j];
//        }
//    }
//
//    delda(arr, rows);
//    columns--;
//    return temp;
//}
//
//int **addRow(int **arr, int &rows, int columns) {
//    int **temp = nullptr;
//    temp = creatda(rows + 1, columns);
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < columns; j++) {
//            temp[i][j] = arr[i][j];
//        }
//    }
//    delda(arr, rows);
//    rows++;
//
//    return temp;
//}
//
//int **delRow(int **arr, int &rows, int columns, int row_i) {
//    int **temp = nullptr;
//    temp = creatda(rows - 1, columns);
//    for (int i = 0; i < row_i - 1; i++) {
//        for (int j = 0; j < columns; j++) {
//            temp[i][j] = arr[i][j];
//        }
//    }
//    for (int i = row_i; i < rows; i++) {
//        for (int j = 0; j < columns; j++) {
//            temp[i][j] = arr[i][j];
//        }
//    }
//
//    delda(arr, rows);
//    rows--;
//    return temp;
//}
//
//void fillda_ci(int **arr, int rows, int columns_i, int begin, int end) {
//    int j = columns_i - 1;
//    for (int i = 0; i < rows; i++) {
//        arr[i][j] = rand() % (begin - end) + begin;
//    }
//}
//
//void fillda_ri(int **arr, int rows_i, int columns, int begin, int end) {
//    int i = rows_i - 1;
//    for (int j = 0; j < columns; j++) {
//        arr[i][j] = rand() % (begin - end) + begin;
//    }
//}
//
//void fillda(int **arr, int rows, int columns, int begin, int end) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < columns; j++) {
//            arr[i][j] = rand() % (begin - end) + begin;
//        }
//    }
//}
//
//void showda(int **arr, int count_rows, int count_columns) {
//    for (int i = 0; i < count_rows; i++) {
//        for (int j = 0; j < count_columns; j++) {
//            cout << arr[i][j] << "\t";
//        }
//        cout << "\n";
//    }
//}
//
//int **creatda(int rows, int columns) {
//    int **temp = new int *[rows];
//    for (int i = 0; i < rows; i++) {
//        temp[i] = new int[columns];
//    }
//    return temp;
//}
//
//void delda(int **&arr, int rows) {
//    for (int i = 0; i < rows; i++) {
//        delete[] arr[i];
//    }
//    delete[] arr;
//    arr = nullptr;
//}
//////////////
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//void zdvig_columns(int **arr, int rows, int columns, bool rightORleft, int number);
//
//void zdvig_rows(int **arr, int rows, int columns, bool upORdown, int number);
//void delda(int **&arr, int rows);
//int main() {
//    srand(time(0));
//    int rows = 6;
//    int columns = 6;
//    int **arr = new int *[rows];
//    for (int i = 0; i < rows; i++) {
//        arr[i] = new int[columns];
//    }
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < columns; j++) {
//            arr[i][j] = rand() % 20;
//            cout << arr[i][j] << "\t";
//        }
//        cout << '\n';
//    }
//    zdvig_rows(arr, 6, 6, 1, 5);
//
//    zdvig_columns(arr, 6, 6, 1, 5);
//
// delda(arr,rows);
//    return 0;
//
//}
//void delda(int **&arr, int rows) {
//    for (int i = 0; i < rows; i++) {
//        delete[] arr[i];
//    }
//    delete[] arr;
//    arr = nullptr;
//}
//void zdvig_columns(int **arr, int rows, int columns, bool rightORleft, int number) {
//    if (rightORleft == 1) {
//        cout << "Cдвиг столбцов вправо на " << number << "\n";
//        if (number > columns)
//            number = number % columns;
//        for (int i = 0; i < rows; i++) {
//            for (int j = 0, c = 0, g = number; j < columns; g--, j++) {
//                if (g > 0) cout << arr[i][columns - g] << "\t";
//                else {
//                    cout << arr[i][c] << "\t";
//                    c++;
//                }
//            }
//            cout << "\n";
//        }
//    } else {
//        cout << "Cдвиг столбцов влево на " << number << "\n";
//        if (number > columns)
//            number = number % columns;
//        for (int i = 0; i < rows; i++) {
//            for (int j = 0, c = 0, g = number; j < columns; g++, j++) {
//                if (g < columns) cout << arr[i][g] << "\t";
//                else {
//                    cout << arr[i][c] << "\t";
//                    c++;
//                }
//            }
//            cout << "\n";
//        }
//    }
//}
//
//void zdvig_rows(int **arr, int rows, int columns, bool upORdown, int number) {
//    if (upORdown == 1) {
//        cout << "Cдвиг строк вверх на " << number << "\n";
//        if (number > rows) number = number % rows;
//        for (int i = 0, g = number; i < rows; g++, i++) {
//            for (int j = 0; j < columns; j++) {
//                if (g < rows) cout << arr[g][j] << "\t";
//                else cout << arr[g - rows][j] << "\t";
//            }
//            cout << "\n";
//        }
//    } else {
//        cout << "Cдвиг строк вниз на " << number << "\n";
//        if (number > rows) number = number % rows;
//        for (int i = 0, g = number; i < rows; g--, i++) {
//            for (int j = 0; j < columns; j++) {
//                if (g > 0) cout << arr[rows - g][j] << "\t";
//                else cout << arr[-g][j] << "\t";
//            }
//            cout << "\n";
//        }
//    }
//}
/////////1//////////
//#include <iostream>
//
//using namespace std;
//
//struct Student {
//    char name[20];
//    char lastname[20];
//    char adress[20];
//    char phonenum[15];
//};
//
//void show_student(const Student &p);
//
//template<typename T>
//void show_arr_student(const Student *arr, int length, bool (*predicate)(const Student &, T), T param);
//
//bool showByNumber(const Student &p, char param);
//
//int main() {
//    const int SIZE = 5;
//    Student arr[SIZE];
//
//    for (int i = 0; i < SIZE; i++) {
//        cout << "Student #" << i + 1 << ":\n";
//        cout << "\t\tEnter name: ";
//        cin.getline(arr[i].name, 20);
//        cout << "\t\tEnter lastname: ";
//        cin.getline(arr[i].lastname, 20);
//        cout << "\t\tEnter adress: ";
//        cin.getline(arr[i].adress, 20);
//        cout << "\t\tEnter phone number: ";
//        cin.getline(arr[i].phonenum, 16);
//    }
//
//    show_arr_student(arr, SIZE, showByNumber, '\0');
//
//}
//
//void show_student(const Student &p) {
//    if (p.phonenum[0] != '\0')
//        cout << "\tname:" << p.name << '\n' << "\tlastname:" << p.lastname << '\n' << "\tadress: " << p.adress << '\n'
//             << "\tphone number: "
//             << p.phonenum << endl;
//    else if (p.phonenum[0] == '\0')
//        cout << "\tname:" << p.name << '\n' << "\tlastname:" << p.lastname << '\n' << "\tadress: " << p.adress << '\n'
//             << "\tphone number: empty "
//             << endl;
//}
//
//template<typename T>
//void show_arr_student(const Student *arr, int length, bool (*predicate)(const Student &, T), T param) {
//    for (int i = 0; i < length; i++) {
//        if (predicate(arr[i], param)) {
//            show_student(arr[i]);
//        }
//    }
//}
//
//bool showByNumber(const Student &p, char param) {
//    return p.phonenum[0] == param;
//}
////////2/////
//#include <iostream>
//
//using namespace std;
//
//struct Student {
//    char lastname[20];
//    int clas;
//    int mark;
//
//};
//
//void show_student(const Student &p);
//
//void showByMarkAndGreat(Student *arr, int length, int mark, int great);
//
//
//int main() {
//    const int SIZE = 5;
//    Student arr[SIZE];
//
//    for (int i = 0; i < SIZE; i++) {
//        cout << "Student #" << i + 1 << ":\n";
//        cout << "\t\tEnter lastname: ";
//
//        cin.getline(arr[i].lastname, 20);
//        cin.ignore();
//        cout << "\t\tEnter clas: ";
//        cin >> arr[i].clas;
//        cout << "\t\tEnter mark: ";
//        cin >> arr[i].mark;
//
//    }
//showByMarkAndGreat(arr,SIZE,5,9);
//
//}
//
//void show_student(const Student &p) {
//
//    cout << "\tlastname:" << p.lastname << '\n';
//
//
//}
//
//void showByMarkAndGreat(Student *arr, int length, int mark, int great) {
//    for (int i = 0; i < length; i++) {
//        if (arr[i].mark == mark && arr[i].clas == great)
//            show_student(arr[i]);
//    }
//}
////////3///////
//#include <iostream>
//
//using namespace std;
//
//struct People {
//    char name[20];
//    char sex[6];
//    int age;
//
//};
//
//
//int main() {
//    const int SIZE = 5;
//    People arr[SIZE];
//
//    for (int i = 0; i < SIZE; i++) {
//        cout << "Student #" << i + 1 << ":\n";
//        cout << "\t\tEnter lastname: ";
//        cin.ignore();
//        cin.getline(arr[i].name, 20);
//        cout << "\t\tEnter sex (male/female): ";
//        cin.getline(arr[i].sex,6);
//        cout << "\t\tEnter age: ";
//        cin >> arr[i].age;
//
//    }
//    int counter = 0;
//    double age = 0;
//    for (int i = 0; i < SIZE; i++) {
//        if(arr[i].sex == "male") {
//            counter++;
//            age+=arr[i].age;
//        }
//    }
//cout<<"Midle age is "<<age/counter;
//}
////4///
//#include <iostream>
//
//using namespace std;
//
//struct Items {
//    double massa;
//    double objem;
//double plotnost = massa/objem;
//
//};
//
//
//int main() {
//    const int SIZE = 5;
//    Items arr[SIZE];
//
//    for (int i = 0; i < SIZE; i++) {
//        cout << "Student #" << i + 1 << ":\n";
//        cout << "\t\tEnter massa: ";
//        cin >> arr[i].massa;
//        cout << "\t\tEnter objem: ";
//        cin >> arr[i].objem;
//
//    }
//    int index = 0;
//double max_plot = arr[0].plotnost;
//    for (int i = 0; i < SIZE; i++) {
//        if(max_plot<arr[i].plotnost)
//            max_plot=arr[i].plotnost;
//        index = i;
//    }
//cout<<"Item# "<<index<<" Plotnost: "<<max_plot;
//
//}
////////5///
//#include <iostream>
//
//using namespace std;
//
//struct Student {
//    char lastname[20];
//    double height;
//
//
//};
//
//
//int main() {
//    const int SIZE = 10;
//    Student arr[SIZE];
//
//    for (int i = 0; i < SIZE; i++) {
//        cout << "Student #" << i + 1 << ":\n";
//        cout << "\t\tEnter lastname: ";cin.ignore();
//      cin.getline(arr[i].lastname,20);
//
//        cout << "\t\tEnter height: ";
//        cin>>arr[i].height;
//    }
//    int tmp;
//    Student tmp2;
//    int index;
//    for (int i = 0; i < SIZE; i++) {
//        tmp=arr[i].height;
//        tmp2 = arr[i];
//        index = i-1;
//        while(index>=0 && arr[index].height > tmp)
//        {
//            arr[index+1]=arr[index];
//            arr[index]= tmp2;
//            index--;
//        }
//    }
//    for (int i = 0; i < SIZE; i++) {
//        cout<<arr[i].lastname<<" height: "<<arr[i].height<<"\n";
//    }
//}
//////dz/////
#include <iostream>
using namespace std;
struct Fraction {
    int chislitel = 0;
    int znamenatel = 0;
};

double plus_d(Fraction &a, Fraction &b);

double minus_d(Fraction &a, Fraction &b);

double mult(Fraction &a, Fraction &b);

double div(Fraction &a, Fraction &b);

int main() {
    Fraction first;
    Fraction second;
    char prog_answer;
    cout << "Enter fraction chislitel : ";
    cin >> first.chislitel;
    cout << "Enter fraction znamenatel : ";
    cin >> first.znamenatel;
    //////////
    string yesno;
    do {

        cout << "For adding one more fraction press 'a' \n";
        cout << "For deliting fraction press 'b' \n";
        cout << "For doing math operations with fractions press 'c' \n";
        cout << "Enter:";
        cin >> prog_answer;
//////////
        switch (prog_answer) {
            case 'a':
                cout << "Enter fraction chislitel : ";
                cin >> second.chislitel;
                cout << "Enter fraction znamenatel : ";
                cin >> second.znamenatel;
                break;
            case 'b':
                char del_answer;
                cout << "Which fraction do you want to delete? first/second (f/s) :";
                cin >> del_answer;
                if (del_answer == 'f') {
                    first.chislitel = NULL;
                    first.znamenatel = NULL;
                    cout << "Done";
                } else if (del_answer == 's') {
                    second.chislitel = NULL;
                    second.znamenatel = NULL;
                    cout << "Done";
                } else
                    cout << "Wrong answer...";
                break;
            case 'c':
                if (second.znamenatel == NULL && second.chislitel == NULL) {
                    cout << "Enter second fraction chislitel : ";
                    cin >> second.chislitel;
                    cout << "Enter second fraction znamenatel : ";
                    cin >> second.znamenatel;
                }
                if (first.znamenatel == NULL && first.chislitel == NULL) {
                    cout << "Enter  first fraction chislitel : ";
                    cin >> first.chislitel;
                    cout << "Enter first fraction znamenatel : ";
                    cin >> first.znamenatel;
                }
////////
                char operation;
                cout << "Chose math operation:(+,-,*,/)";
                cout << "Enter: ";
                cin >> operation;
                switch (operation) {
                    case '-':
                        cout << "//////////////////////////\n";
                        cout << first.chislitel << " / " << first.znamenatel << " - " << second.chislitel << " / "
                             << second.znamenatel << " = " << minus_d(first, second) << "\n";
                        cout << "//////////////////////////\n";
                        break;
                    case '+':
                        cout << "//////////////////////////\n";
                        cout << first.chislitel << " / " << first.znamenatel << " + " << second.chislitel << " / "
                             << second.znamenatel << " = " << plus_d(first, second) << "\n";
                        cout << "//////////////////////////\n";
                        break;
                    case '*':
                        cout << "//////////////////////////\n";
                        cout << first.chislitel << " / " << first.znamenatel << " * " << second.chislitel << " / "
                             << second.znamenatel << " = " << mult(first, second) << "\n";
                        cout << "//////////////////////////\n";
                        break;
                    case '/':
                        cout << "//////////////////////////\n";
                        cout << first.chislitel << " / " << first.znamenatel << " / " << second.chislitel << " / "
                             << second.znamenatel << " = " << div(first, second) << "\n";
                        cout << "//////////////////////////\n";
                        break;
                }
                break;

            default:
                cout << "Wrong answer...";
                cout << "Do you want do some thing else?(yes/no)";
                cin >> yesno;
        }
    } while (yesno != "no");
    return 0;

}

double plus_d(Fraction &a, Fraction &b) {
    return (double) (a.chislitel / a.znamenatel + b.chislitel / b.znamenatel);
}

double minus_d(Fraction &a, Fraction &b) {
    return (double) (a.chislitel / a.znamenatel - b.chislitel / b.znamenatel);
}

double mult(Fraction &a, Fraction &b) {
    return (double) ((a.chislitel / a.znamenatel) * (b.chislitel / b.znamenatel));
}

double div(Fraction &a, Fraction &b) {
    return (double) ((a.chislitel / a.znamenatel) / (b.chislitel / b.znamenatel));
}


