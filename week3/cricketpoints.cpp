#include<iostream>
using namespace std;
main() {
int wins,draws,losses ;
cout<<" Enter the numbers of wins : ";
cin>>wins;
cout<<" Enter the numbers of draws : ";
cin>>draws;
cout<<" Enter the numbers of losses : ";
cin>>losses;

int points;
points=(wins*3)+(draws*1)+(losses*0) ;
cout<<points<< " Total points obtained ";
}