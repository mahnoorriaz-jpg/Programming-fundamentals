#include<iostream>
using namespace std;

int main()
{
    int a, b, ch;

    while(true)
    {
        cout << "---SIMPLE CALCULATOR---";
        cout << "1. ADDITION";
        cout << "2. SUBTRACTION";
        cout << "3. MULTIPLICATION";
        cout << "4. DIVISION";
        cout << "5. CLEAR SCREEN";
        cout << "6. EXIT";
        cout << "Enter the choice(1-6) ";
        cin >> ch;

        if(ch >= 1 && ch <= 4)
        {
            cout << "enter the first number ";
            cin >> a;
            cout << "enter the second number ";
            cin >> b;
        }

        if(ch == 1)
        {
            cout << "Result " << a + b ;
        }
        else if(ch == 2)
        {
            cout << "Result " << a - b ;
        }
        else if(ch == 3)
        {
            cout << "Result " << a * b ;
        }
        else if(ch == 4)
        {
            cout << "Result " << a / b ;
        }
        else if(ch == 5)
        {
            system("cls");
        }
        else if(ch == 6)
        {
            cout << "EXIT";
            break;
        }
        else
        {
            cout << "enter the valid choice from 1 to 6";
        }
    }
}