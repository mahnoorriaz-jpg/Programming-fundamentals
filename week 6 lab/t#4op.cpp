#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " numbers, one per line: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Numbers in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}