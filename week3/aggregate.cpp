#include<iostream>

using namespace std;
main()
{
string name ;
float matricmarks, interMarks, ecatMarks ;
float matricPercent, interPercent, ecatPercent;
float aggregate;

cout<< "Enter student name : " ;
cin>>name;
cout<< "Enter matric marks : " ;
cin>>matricmarks;

cout<< "Enter inter marks : ";
cin>>interMarks;
cout<< "Enter ecat marks : " ;
cin>>ecatMarks;
matricPercent=matricmarks/1100*100;
interPercent=interMarks/1100*100;
ecatPercent=ecatMarks/400*100;
aggregate=(matricPercent*0.10)+(interPercent*0.40)+(ecatPercent*0.50);
cout << " student name : " ;
cout << "uet aggregate : " << aggregate << " % " ;

}
