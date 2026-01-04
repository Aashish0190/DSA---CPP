#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;

    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}

int main() {
    int n;
    cout << "Enter value of N: ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter array elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number is: " << findMissing(arr, n);

    return 0;
}
