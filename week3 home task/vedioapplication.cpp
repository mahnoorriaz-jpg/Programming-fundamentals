#include<iostream>
using namespace std;
main() {
int m, n;
cout<<" Number of Mintues: ";
cin>>m;
cout<<" Frames per second: ";
cin>>n;
int total;
total=(m*60)*n ;
cout<< "Total number of Frames: " <<total;
}