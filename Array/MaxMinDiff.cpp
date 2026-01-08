#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minDiff = INT_MAX;
    int maxDiff = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(arr[i] - arr[j]);
            minDiff = min(minDiff, diff);
            maxDiff = max(maxDiff, diff);
        }
    }

    cout << "Minimum Difference: " << minDiff << endl;
    cout << "Maximum Difference: " << maxDiff << endl;

    return 0;
}
