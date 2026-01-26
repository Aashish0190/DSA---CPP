#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubarrayWithSumK(int arr[], int n, int K) {
    unordered_map<int, int> mp;
    int prefixSum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        // Case 1: sum from 0 to i
        if (prefixSum == K) {
            maxLen = i + 1;
        }

        // Case 2: sum exists before
        if (mp.find(prefixSum - K) != mp.end()) {
            maxLen = max(maxLen, i - mp[prefixSum - K]);
        }

        // Store first occurrence only
        if (mp.find(prefixSum) == mp.end()) {
            mp[prefixSum] = i;
        }
    }

    return maxLen;
}

int main() {
    int n, K;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter K: ";
    cin >> K;

    cout << "Longest subarray length with sum K: "
         << longestSubarrayWithSumK(arr, n, K);

    return 0;
}
