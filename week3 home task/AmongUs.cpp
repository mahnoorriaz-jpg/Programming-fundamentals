#include<iostream>
using namespace std;
int main() {
int i,p ;
cout<<" Enter imposter count: ";
cin>>i;
cout<<" Enter player count: ";
cin>>p;
float chance;
chance=(100.0*i)/p;
cout<< "Chance of being an imposter: " <<chance<<"%";
return 0;
}