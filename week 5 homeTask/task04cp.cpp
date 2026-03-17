#include<iostream>
using namespace std;
int main()
{
    int n,di;
    cout<<"Enter a number ";
    cin >> n;
    cout<<"enter the digit to check : ";
    cin >> di;
    int count,f=0;
    for(int i=n; n>0;n=n/10)
    {
        count=n%10;
        
        if(di==0&&count==0)
        {
          f=f+1;
        }
         else if(di==1&&count==1)
        {
          f=f+1;
        } else if(di==2&&count==2)
        {
           f=f+1;
        } else if(di==3&&count==3)
        {
           f=f+1;
        }  else if(di==4&&count==4)
        {
          f=f+1;
        } else if(di==5&&count==5)
        {
           f=f+1;
        } else if(di==6&&count==6)
        {
          f=f+1;
        } else if(di==7&&count==7)
        {
          f=f+1;
        } else if(di==8&&count==8)
        {
           f=f+1;
        } else if(di==9&&count==9)
        {
        f=f+1;}
        
       }
    cout<<" Frequency = "<<f;
}