#include <iostream>
using namespace std;

main(){
    int n1 = 0;
    int n2 = 1;
    int n3,l;  
    cout<<"Enter the length of fabonachi series: ";
    cin>>l;
    cout<<n1<<", "<<n2;
    for(int i=1; i<=l-2; i++){
        n3=n1+n2;
        cout<<", "<<n3;
        n1 = n2;
        n2 = n3;
    }
}