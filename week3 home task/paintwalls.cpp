#include<iostream>
using namespace std;
main() {
int n,w,h;
cout<<" Number of square meter wall you can paint : ";
cin>>n;
cout<<" Width of singal wall (in meters) :";
cin>>w;
cout<<"heigt of singal wall (in meters) :";
cin>>h;
int area, completewalls;
area=w*h;
completewalls=n/area;
cout<<" Number of walls you can paint:"<<completewalls;
}