#include<iostream>
using namespace std;
main() {
float vegP ,fruP;
cout<<" Enter vegetable price per kg(in coins): ";
cin>>vegP;
cout<<" Enter fruit price per kg (in coins) :";
cin>>fruP;
int vegkg, frukg;
cout<< " Enter total kg of vegetables : ";
cin>>vegkg;
cout<< " Enter total kg of fruits : ";
cin>>frukg;
float total,rupees;
total=(vegP*vegkg)+(fruP*frukg);
rupees=total/1.94;
cout<<" Total earnings in Rupees : "<<rupees;
}