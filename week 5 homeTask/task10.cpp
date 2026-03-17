#include<iostream>
using namespace std;

int main()
{
    int ch;

    while(true)
    {
        cout << "-----RESTURANT MANGEMENT SYSTEM-----";
        cout << "1. View Food Menu";
        cout << "2. Place Order";
        cout << "3. View Order Status";
        cout << "4. Generate Bill";
        cout << "5. Contact Staff";
        cout << "6. Exit";
        cout << "Enter your choice ";
        cin >> ch;

        if(ch == 1)
        {
            cout << "You selected: View Food Menu";
        }
        else if(ch == 2)
        {
            cout << "You selected: Place Order";
        }
        else if(ch == 3)
        {
            cout << "You selected: View Order Status";
        }
        else if(ch == 4)
        {
            cout << "You selected: Generate Bill";
        }
        else if(ch == 5)
        {
            cout << "You selected: Contact Staff";
        }
        else if(ch == 6)
        {
            cout << "You EXIT";
            break;
        }
        else
        {
            cout << "enter the valid choice";
        }
    }
}