#include <iostream>
using namespace std;

int equilibriumIndex(int arr[], int n) {
    int totalSum = 0;

    // Step 1: total sum
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0;

    // Step 2: check equilibrium
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];   // now totalSum is right sum

        if (leftSum == totalSum)
            return i;

        leftSum += arr[i];
    }

    return -1; // no equilibrium index
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int index = equilibriumIndex(arr, n);

    if (index != -1)
        cout << "Equilibrium Index = " << index;
    else
        cout << "No Equilibrium Index Found";

    return 0;
}
