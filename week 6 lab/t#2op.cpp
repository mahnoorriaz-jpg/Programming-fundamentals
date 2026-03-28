#include<iostream>
using namespace std;
int main()
{
    string w;
    cout<<"Enter a string ";
    cin>>w;
    cout<<"Reversed string  ";
    for(int i=w.length() ; i>=0 ;i--)
    {
        cout<<w[i];
    }
}