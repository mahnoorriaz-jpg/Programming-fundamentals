#include<iostream>
using namespace std;
main() {
int age, move ;
cout<<" Enter age of the person: ";
cin>>age;
cout<<" Enter the number of times they have moved :";
cin>>move;
int average;
average=age/(move+1);
cout<<" Average number of year lived in the same house : "<<average;
}