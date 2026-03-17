#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Please Enter the  number:";
    cin>>n1;
    cout<<"Please Enter the second  number:";
    cin>>n2;
    if (n1<n2)
    {
    cout<<"Number"<< n2 <<"is greater than"<< n1;
    }
    else{
        cout<<"Number"<< n1 <<"is greater than "<< n2;
    }
    return 0;
}