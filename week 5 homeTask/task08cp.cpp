#include<iostream>
using namespace std;

int main()
{
  int ag, tp, mp, tc = 0;
  float ts = 0, gf = 10.0;

  cout << "Enter Lilly's age: ";
  cin >> ag;

  cout << "Enter the price of washing machine: ";
  cin >> mp;

  cout << "Enter the unit price of each toy: ";
  cin >> tp;

  for(int i = 1; i <= ag; i++)
  {
    if(i % 2 == 0)
    {
        ts = ts + gf;
        ts = ts - 1.0;
        gf = gf + 10.0;
    }
    else
    {
        tc++;
    }
  } 

  ts = ts + (tc * tp);

  if(ts >= mp)
  {
    cout << "YES! " << ts - mp << endl;
  } 
  else
  {
    cout << "NO! " << mp - ts << endl;
  }

  return 0;
}