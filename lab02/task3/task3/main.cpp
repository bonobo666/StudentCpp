#include <iostream>

using namespace std;

int main()
{
    float num[2];
    char op;
    cout<<"input the expression:\n";
    cin>>num[0]>>op>>num[1];
    while(cin.fail()||!((op=='-')||(op=='+')||(op=='*')||(op=='/')))
        {
        cout<<"Wrong expression. Try again.\n";
        num[0]=0;
        num[1]=1;
        cin>>num[0]>>op>>num[1];
        }
cout<<"result = ";
switch(op)
    {
    case '+':
        {
        cout<<num[0]+num[1];
        break;
        }
    case '-':
        {
        cout<<num[0]-num[1];
        break;
        }
    case '*':
        {
        cout<<num[0]*num[1];
        break;
        }
    case '/':
        {
        cout<<num[0]/num[1];
        break;
        }
    }
cin>>op;
}
