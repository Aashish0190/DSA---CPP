#include <iostream>
using namespace std;

void Rotate(int arr[], int n) {
    int temp = arr[n - 1];   // store last element

    for (int i = n - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    arr[0] = temp;   // put last element at first
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Rotate(arr, n);

    cout << "Array after right rotation by 1: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
