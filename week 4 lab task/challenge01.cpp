#include<iostream>
using namespace std;
int main(){
    int amount,finalA;
    float discount;
    cout<<"Enter your bill:";
    cin>>amount;
    if (amount<=5000){
        discount=amount*0.05;
        finalA=amount-discount;
        cout<<"your discounted bill: "<< finalA<<endl;
    }
    else
    {
        discount=amount*0.10;
        finalA=amount-discount;
    cout<<"Your discounted bill: "<< finalA<<endl;
    }

    return 0;
}