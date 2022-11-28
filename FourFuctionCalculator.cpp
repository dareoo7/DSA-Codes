#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    char ch;
    float a,b,result;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Enter the operator(+,-,*,/):";
    cin>>ch;
    cout<<"\n";
    if(ch=='+')
    result = a+b;
    else if(ch=='-')
    result = a-b;
    else if(ch=='*')
    result = a*b;
    else if(ch=='/')
    result =a/b;
    else{
        cout<<"Wrong Operator"<<endl;
        goto lb;

    }
    cout<<"The calculated result is:"<<result<<endl;
    lb:
    return 0;
}