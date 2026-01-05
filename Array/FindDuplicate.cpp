#include <iostream>
using namespace std;

// Function to find duplicate number using brute force
int findDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];   // duplicate found
            }
        }
    }
    return -1;  // no duplicate
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

    int duplicate = findDuplicate(arr, n);

    if (duplicate != -1) {
        cout << "Duplicate number is: " << duplicate << endl;
    } else {
        cout << "No duplicate found" << endl;
    }

    return 0;
}
