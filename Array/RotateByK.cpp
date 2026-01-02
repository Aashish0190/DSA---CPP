#include <iostream>
using namespace std;

// Rotate array by 1 position (right)
void rotateOnce(int arr[], int n) {
    int temp = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
}

// Rotate array by K positions
void rotateByK(int arr[], int n, int k) {
    k = k % n;   // handle k > n

    for (int i = 0; i < k; i++) {
        rotateOnce(arr, n);
    }
}

// Print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter K: ";
    cin >> k;

    rotateByK(arr, n, k);
    printArray(arr, n);

    return 0;
}
