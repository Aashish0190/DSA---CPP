#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int X;
    cout << "Enter the number to search: ";
    cin >> X;

    int flag = 0;   // to check found or not

    for (int i = 0; i < n; i++) {
        if (arr[i] == X) {
            cout << "Element found at index: " << i << endl;
            flag = 1;
            break;   // stop after first occurrence
        }
    }

    if (flag == 0) {
        cout << "Element not found";
    }

    return 0;
}
