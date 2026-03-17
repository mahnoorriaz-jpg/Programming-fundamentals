#include<iostream>
using namespace std;
int main(){
    int salary=10000,price=50000;
    float advance=salary*0.5*0.6;
    if (advance>=price)
    {
    cout<<"Ali can buy the laptop with advance salary"<<endl;
    }
    else{
        int months=price/(salary*0.5);
        cout<<"Months required to buy laptop :" <<months<<endl;
    }
    return 0;
}