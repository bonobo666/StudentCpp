#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;
void check(double &x){
    while (cin.fail())
        {
        cout<<"Данные некорректны. Попробуйте снова. \n";
        cin.clear();
        cin.ignore(1024,'\n');
        cin>>x;
        }
};
int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
cout<<"Здравствуйте! ";
char d='y';
while(d=='y')
    {
    double a,b,n,result1,result2=0;
    int c=0;
    cout<<"Введите два числа:"<<endl;
    cout<<"Число 1: ";
    cin>>a;
    check(a);
    cout<<"Число 2: ";
    cin>>b;
    check(b);
    cout<<"Что сделать с числами?\n 1.+\n 2.-\n 3.*\n 4./\n 5.^2\n 6.sqrt\n 7.logn\n"<<endl;
    cout<<"Ваш ответ: ";
    cin>>c;
    while(cin.fail() || c>7 || c<1)
            {
                cout<<"Данные некорректны. Попробуйте снова. \n";
                cin.clear();
                cin.ignore(1024,'\n');
                cin>>c;
            }
    switch(c){
        case 1:
            result1=a+b;
            break;
        case 2:
            result1=a-b;
            break;
        case 3:
            result1=a*b;
            break;
        case 4:
            result1=a/b;
            break;
        case 5:
            result1=a*a;result2=b*b;
            break;
        case 6:
            result1=sqrt(a);
            result2=sqrt(b);
            break;
        case 7:
            {cout<<"Основание логарифма: ";
            cin>>n;
            while(cin.fail()||b<=0||b==1)
            {
                cout<<"Данные некорректны. Попробуйте снова. \n";
                cin.clear();
                cin.ignore(1024,'\n');
                cin>>n;
            }
            result1=log(a)/log(n);result2=log(b)/log(n);
            break;}
    };
    if(c>0&&c<5)
        cout<<"Результат: "<<result1<<endl;
    else
        cout<<"Результат 1: "<<result1<<"\nРезультат 2: "<<result2<<endl;
    cout<<"Продолжить выполнение программы(y/n)? ";
    cin>>d;
    while(!(d=='n')&&!(d=='y'))
        {
        cout<<"Неверное значение. Попробуйте снова:\n";
        cin>>d;
        }
}
return 0;
}
