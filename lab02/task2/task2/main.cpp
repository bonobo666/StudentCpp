#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{cout<<"Input constants:\n";
    int numl=1;
    char in[10];
    float *num=new float[numl];
    int i,u;
for(i=0;i<100;i++){
    for(u=0;u<10;u++){
    in[u]={0};
    };
    cin>>in;
    if((in[0]=='e')&&(in[1]=='n')&&(in[2]=='d')&&(in[3]=='\0'))
        {break;};
    for(u=0;u<strlen(in);u++){
         if(!((in[u]=='0')||(in[u]=='1')||(in[u]=='2')||(in[u]=='3')||(in[u]=='4')||(in[u]=='5')||(in[u]=='6')||(in[u]=='7')||(in[u]=='8')||(in[u]=='9')||(in[u]=='-')||(in[u]=='.'))){
            cout<<"Error! Invalid value. Try again if you dare, mortal!\n";
            for(int a=0;a<10;a++){
            in[u]={0};
            };
            cin>>in;
            }
    }
    num[i]=atof(in);
    numl++;
};
char *op=new char[i-2];
float res=num[0];
cout<<"Input operations:\n";
for(int oi=0;oi<i-1;oi++){              //oi!
    cin>>op[oi];   //oi!!
    while(!(op[oi]=='+'||op[oi]=='*'||op[oi]=='/'||op[oi]=='-')){
        cout<<"Error! Invalid value. Try again if you dare, mortal!\n";
        op[oi]='\0';
        cin>>op[oi];
    }
    switch(op[oi]){  //oi!!!
    case '+':{
    res=res+num[oi+1];  //oi!!!!
    break;
    }
    case '-':{
    res=res-num[oi+1];  //oi!!!!!
    break;
    }
    case '/':{
    res=res/num[oi+1];  //oi!!!!!!
    break;
    }
    case '*':{
    res=res*num[oi+1];  //oi!!!!!!!
    break;
    };
    };
delete []op;
}
delete []num;
cout<<"Result = "<<res;
cin>>res;
return 0;
}
