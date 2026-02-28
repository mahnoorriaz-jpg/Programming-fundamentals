#include<iostream>
using namespace std;
main() {
string name ;
cout<<" Enter the name of the person: ";
cin>>name;
int weight;
cout<<" Enter the target weight loss in kg :";
cin>>weight;
int days;
days=weight*15;
cout<<name<<" will need "<<days<<" days to lose weight by the doctor's suggestion";
}