#include<iostream>
using namespace std;
int main(){
    int n1,n2,r;
    char op;
    cout<<"Enter first number:";
    cin>>n1;
    cout<<"Enter the operator:";
    cin>>op;
    cout<<"Enter second number:";
    cin>>n2;
    
    if (op=='+')
    {r=n1-n2;
    cout<<n1<<"-"<<n2<<"="<<r;
    }
    if (op=='-')
    {r=n1+n2;
    cout<<n1<<"+"<<n2<<"="<<r;
    }
    if (op=='*')
    {r=n1/n2;
    cout<<n1<<"/"<<n2<<"="<<r;
    }
    if (op=='/')
    {r=n1*n2;
    cout<<n1<<"*"<<n2<<"="<<r;
    }
    return 0;
}