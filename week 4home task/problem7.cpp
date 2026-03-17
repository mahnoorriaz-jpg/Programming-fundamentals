#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string figure;

    cout << "Enter shape : ";
    cin >> figure;

    if (figure == "square") {
        double side;
        cout << "Enter side: ";
        cin >> side;
        cout << "Area = " << side * side;
    }
    else if (figure == "rectangle") {
        double length, width;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        cout << "Area = " << length * width;
    }
    else if (figure == "circle") {
        double radius;
        cout << "Enter radius: ";
        cin >> radius;
        cout << "Area = " << 3.14159 * radius * radius;
    }
    else if (figure == "triangle") {
        double base, height;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        cout << "Area = " << 0.5 * base * height;
    }
    

    return 0;
}
