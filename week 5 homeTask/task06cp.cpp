#include<iostream>
using namespace std;
int main()
{
    int a,b,tem,gcd,lcm,x,y;
    cout<<"Enter the first number ";
    cin >> a;
    cout<<"Enter the second number ";
    cin >> b;
    x=a;
    y=b;
    while(b!=0)
    {
      tem=b;
      b=a%b;
      a=tem;
    }
    gcd=a;
    lcm=(x*y)/gcd;
    cout<<"GCD: "<<gcd<<endl;
    cout<<"LCM: "<<lcm<<endl;
}