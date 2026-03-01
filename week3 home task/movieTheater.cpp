#include<iostream>
using namespace std;
int main() {
string moviename ;
cout<<" Enter the movie name : ";
cin>>moviename;

int at,ct,ats,cts,pdc;

cout<<" Enter the adult ticket price: $";
cin>>at;
cout<<" Enter the child ticket price: $";
cin>>ct;
cout<<" Enter the number of adult tickets sold:";
cin>>ats;
cout<<" Enter the number of child tickets sold:";
cin>>cts;
cout<<" Enter the percentage amount to be donated to charity:";
cin>>pdc;

int totalamount ,donationamount ,remainingamount;
totalamount=(at*ats)+(ct*cts);
donationamount=(pdc/100)*totalamount;
remainingamount=totalamount-donationamount;

cout<<"Movie : "<<moviename ; 
cout<<"The total amount generated from ticket sales : $ "<< totalamount;
cout<<"Donation to charity :$ "<<donationamount ;
cout<<"Remaining amount after donation : $"<< remainingamount ;
}