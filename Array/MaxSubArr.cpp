#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        currSum += arr[i];

        if (currSum > maxSum)
            maxSum = currSum;

        if (currSum < 0)
            currSum = 0;
    }

    return maxSum;
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

    cout << "Maximum Subarray Sum = "
         << maxSubarraySum(arr, n);

    return 0;
}
