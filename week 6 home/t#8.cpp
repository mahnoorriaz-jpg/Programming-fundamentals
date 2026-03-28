#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter number of flights: ";
    cin>>n;
    int flightNumber[n];
    string destination[n];
    int seatsAvailable[n];
    for(int i=0;i<n;i++){
        cout<<"Enter flight number for flight "<<i+1<<":";
        cin>>flightNumber[i];
        cout<<"Enter destination fo flight "<<flightNumber[i]<<":";
        cin>>destination[i];
        cout<<"Enter seats available for flight "<<flightNumber[i]<<":";
        cin>>seatsAvailable[i];
   }
   cout<<"FLIGHT INFORMATION:"<<endl;
   for(int i=0;i<n;i++){
   cout<<"flight "<<flightNumber[i]<<" to "<<destination[i]<<" has "<<seatsAvailable[i]<<" seats available  "<<endl;
   }
   cout<<"FLIGHTS WITH LESS THAN 5 SEATS AVAILABLE:"<<endl;
   bool found=false;
   for(int i=0;i<n;i++){
   if(seatsAvailable[i]<5){
    cout<<"flight"<<flightNumber[i]<<" to"<<destination[i]<<" has only"<<seatsAvailable[i]<<" seats left"<<endl;
    found=true;
   }
   }
   if(!found){
    cout<<"No flight with less than 5 seats available"<<endl;
}
}