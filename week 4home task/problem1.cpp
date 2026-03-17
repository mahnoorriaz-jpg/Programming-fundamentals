#include<iostream>
using namespace std;
int main(){
    string nam;
    float dis,tic,disT;
    cout<<"country:";
    cin>>nam;
    cout<<"Ticket price:";
    cin>>tic;
    if(nam =="ierland"){
dis=tic*0.10;
    }
    else{dis=tic*0.5;
    }
disT=tic-dis;
cout<<"Discounted Price: "<<disT;
   
    return 0;
}