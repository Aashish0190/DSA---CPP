#include <iostream>
#include <unordered_map>
using namespace std;

int longestZeroSumSubarray(int arr[], int n) {
    unordered_map<int, int> mp;
    int prefixSum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        // If sum becomes zero
        if (prefixSum == 0) {
            maxLen = i + 1;
        }

        // If prefix sum seen before
        if (mp.find(prefixSum) != mp.end()) {
            maxLen = max(maxLen, i - mp[prefixSum]);
        } else {
            // Store first occurrence
            mp[prefixSum] = i;
        }
    }

    return maxLen;
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

    cout << "Length of longest subarray with sum 0: "
         << longestZeroSumSubarray(arr, n);

    return 0;
}
