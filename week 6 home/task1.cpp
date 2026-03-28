#include<iostream>
using namespace std;
main(){
    int n, sum=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<< " numbers "<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    sum +=arr[i];
    }
    cout<<"Sum of all elements: "<<sum <<endl;
}