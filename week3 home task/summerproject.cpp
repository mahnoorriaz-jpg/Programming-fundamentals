#include<iostream>
using namespace std;
int main() {
int bagweight,bagcost,areacovered ;
cout<<" Enter the size of fertilizer bag in pounds : ";
cin>>bagweight;
cout<<" Enter the cost of the bag :";
cin>>bagcost;
cout<<" Enter the area in saquare feet that can be covered by the bag :";
cin>>areacovered;
int costpound,costsaquarefoot;
costpound=bagcost/bagweight;
cout<<" Cost of fertilizer per pound:"<<costpound;
costsaquarefoot=bagcost/areacovered;

cout<< " Cost of fertilizing per saquare foot is:"<<costsaquarefoot;
}