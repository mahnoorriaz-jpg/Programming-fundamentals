#include<iostream>
using namespace std;
int main(){
    double r,w,t,rp,wp,tp,total,dis;
    cout<<"RED rose:";
    cin>>r;
    cout<<"White rose:";
    cin>>w;
    cout<<"tulip:";
    cin>>t;
    rp=2*r;
    wp=4.10*w;
    tp=2.5*t;
    total=rp+wp+tp;
    if(total>200){
        dis=total*0.20;
        cout<<"original price:" << total<<endl;
        cout<<"Price after discount:" << total-dis;
    }
   
    return 0;
}