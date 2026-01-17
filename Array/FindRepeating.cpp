#include <iostream>
#include <unordered_set>
using namespace std;

int firstRepeating(int arr[], int n) {
    unordered_set<int> s;
    int result = -1;

    for (int i = n - 1; i >= 0; i--) {
        if (s.find(arr[i]) != s.end()) {
            result = arr[i];
        } else {
            s.insert(arr[i]);
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = firstRepeating(arr, n);

    if (ans == -1)
        cout << "No repeating element";
    else
        cout << "First repeating element: " << ans;

    return 0;
}

