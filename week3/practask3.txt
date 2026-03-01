#include<iostream>
using namespace std;
main() {
int m, n;
cout<<" Enter Mintues: ";
cin>>m;
cout<<" Enter Frames per second: ";
cin>>n;
int total;
total=(m*60)*n ;
cout<< "Total Frames: " <<total;
}