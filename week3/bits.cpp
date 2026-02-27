#include<iostream>
using namespace std;
main() {
float MB, bits;
cout<<" Enter the size in megabytes(MB) : ";
cin>>MB;
bits=MB*1024*1024*8;
cout<<MB<< "MB in bits = " << bits;
}