#include <iostream>
using namespace std;

void MoveZero(int arr[], int n) {
    int ZeroIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[ZeroIndex]);
            ZeroIndex++;
        }
    }
}

void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the Size of Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    MoveZero(arr, n);
    PrintArray(arr, n);

    return 0;
}
