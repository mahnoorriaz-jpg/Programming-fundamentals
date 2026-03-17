#include<iostream>
using namespace std;
int main(){
    int t1,t2,diff;
    cout<<"temprature City1:";
    cin>>t1;
    cout<<"temprature City2:";
    cin>>t2;
 if (t1 > t2) {
    diff = t1 - t2;
    } else {
  diff = t2 - t1;
    }

    if (diff > 10) {
 cout << "Difference is too Big" << endl;
    }

    cout << "Program Ends";

    return 0;
}