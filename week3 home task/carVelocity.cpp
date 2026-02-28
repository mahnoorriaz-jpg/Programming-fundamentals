#include<iostream>
using namespace std;
main() {
int vi,a,t;
cout<<" Enter intial velocity(m/s): ";
cin>>vi;
cout<<" Enter acceleration(m/s^2): ";
cin>>a;
cout<<" Enter time(s): ";
cin>>t;
int vf;
vf=vi+(a*t);
cout<< "Final velocity(m/s): " <<vf;
}