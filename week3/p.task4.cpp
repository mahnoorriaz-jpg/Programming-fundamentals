#include<iostream>
using namespace std;
int main() {
int i,p ;
cout<<" Enter imposter: ";
cin>>i;
cout<<" Enter player: ";
cin>>p;
float chance;
chance=(100.0*i)/p;
cout<< "Chance = " <<chance<<"%";
return 0;
}