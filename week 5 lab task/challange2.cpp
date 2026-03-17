#include <iostream>
using namespace std;
int main(){
cout<<"Enter number: ";
int n;
cin>>n;
cout<<"Enter digit: ";
int dig;
cin>>dig;
int count;
for(int i=n; i> 0; i/=10){         
if(i%10 == dig){                        
  count++;
}
}
cout<<"Frequency of "<<dig<<" in "<<n<<" is: "<<count;
return 0;
}