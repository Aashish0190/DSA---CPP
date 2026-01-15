#include <iostream>
#include <unordered_set>
using namespace std;

int longestConsecutive(int arr[], int n) {
    unordered_set<int> s;

    // Insert elements into set
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    int longest = 0;

    for (int i = 0; i < n; i++) {

        // Check if it's the start of a sequence
        if (s.find(arr[i] - 1) == s.end()) {
            int current = arr[i];
            int count = 1;

            // Count consecutive elements
            while (s.find(current + 1) != s.end()) {
                current++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    return longest;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Longest Consecutive Subsequence Length: "
         << longestConsecutive(arr, n);

    return 0;
}
