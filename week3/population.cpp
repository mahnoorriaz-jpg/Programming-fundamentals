#include<iostream>
using namespace std;
main() {
int currentPopulation , n  ;
cout<<" Enter the current world population : ";
cin>>currentPopulation;
cout<<" Enter the monthly birth rate (number of births per month) : " ;
cin>>n;
int futurePopulation ;
futurePopulation = currentPopulation+(n*360) ;
cout<<futurePopulation<< " population in three decades will be : ";
}