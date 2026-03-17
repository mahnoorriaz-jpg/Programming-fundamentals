#include<iostream>
using namespace std;
int main(){
 string word1,word2;
    cout<<"Please Enter the first word:";
    cin>>word1;
    cout<<"Please Enter the second  word:";
    cin>>word2;
    if (word1==word2)
    {
    cout<<"yes, the word are same ";
    }
    else{
        cout<<"No,the words are different ";
    }
    return 0;
}