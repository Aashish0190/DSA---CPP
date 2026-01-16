#include <iostream>
#include <unordered_set>
using namespace std;

bool areConsecutive(int arr[], int n) {
    if (n <= 1)
        return true;

    int minVal = arr[0], maxVal = arr[0];
    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        // Duplicate found
        if (s.find(arr[i]) != s.end())
            return false;

        s.insert(arr[i]);
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // Check range condition
    if (maxVal - minVal + 1 != n)
        return false;

    return true;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (areConsecutive(arr, n))
        cout << "Array elements are consecutive";
    else
        cout << "Array elements are NOT consecutive";

    return 0;
}
