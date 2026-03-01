#include<iostream>
using namespace std;
main() {
int n,w,h;
cout<<" enter paint area : ";
cin>>n;
cout<<" enter width :";
cin>>w;
cout<<" enter hight :";
cin>>h;
int area, completewalls;
area=w*h;
completewalls=n/area;
cout<<" walls painted = "<<completewalls;
}