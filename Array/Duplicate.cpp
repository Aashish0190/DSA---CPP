#include <iostream>
#include <unordered_map>
using namespace std;

void findDuplicates(int arr[], int n) {
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Duplicate elements: ";
    bool found = false;

    for (auto it : freq) {
        if (it.second > 1) {
            cout << it.first << " ";
            found = true;
        }
    }

    if (!found)
        cout << "None";
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

    findDuplicates(arr, n);

    return 0;
}
