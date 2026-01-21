#include <iostream>
#include <algorithm>
using namespace std;

int maxProductSubarray(int arr[], int n) {
    int maxEnding = arr[0];
    int minEnding = arr[0];
    int maxProduct = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] < 0)
            swap(maxEnding, minEnding);

        maxEnding = max(arr[i], maxEnding * arr[i]);
        minEnding = min(arr[i], minEnding * arr[i]);

        maxProduct = max(maxProduct, maxEnding);
    }

    return maxProduct;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum product subarray: "
         << maxProductSubarray(arr, n);

    return 0;
}
