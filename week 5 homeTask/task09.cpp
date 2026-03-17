#include<iostream>
using namespace std;

int main()
{
    int mn, yl, ag = 18;

    cout << "enter money ";
    cin >> mn;

    cout << "enter year ";
    cin >> yl;

    for(int cy = 1800; cy <= yl; cy++)
    {
        if(cy % 2 == 0)
        {
            mn -= 12000;
        }
        else
        {
            mn -= 12000 + 50 * ag;
        }
        ag++;
    }

    if(mn >= 0)
    {
        cout << "Yes! He will live a carefree life and will have  " << mn << " dollars left.";
    }
    else
    {
        cout << " He will need " << -mn << " dollars to survive.";
    }
}