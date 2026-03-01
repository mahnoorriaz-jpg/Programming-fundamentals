#include<iostream>
using namespace std;
main() {
int number;
cout<<" Enter 4-digit number: ";
cin>>number;

int n1,n2,n3,n4;
n1=number%10;
n2=(number/10)%10;
n3=(number/100)%10;
n4=(number/1000)%10;

int sum;
sum=n1+n2+n3+n4;
cout<<" Enter a 4-digit number: "<<sum;
}