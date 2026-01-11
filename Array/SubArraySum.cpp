#include <iostream>
using namespace std;

void subarraySum(int arr[], int n, int sum) {
    int currSum = arr[0];
    int start = 0;

    for (int end = 1; end <= n; end++) {

        // Shrink window if sum exceeds target
        while (currSum > sum && start < end - 1) {
            currSum -= arr[start];
            start++;
        }

        // Check if sum matches
        if (currSum == sum) {
            cout << "Subarray found from index "
                 << start << " to " << end - 1 << endl;
            return;
        }

        // Add next element
        if (end < n)
            currSum += arr[end];
    }

    cout << "No subarray found" << endl;
}

int main() {
    int n, sum;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> sum;

    subarraySum(arr, n, sum);
    return 0;
}
