#include <iostream>
using namespace std;

// Function to find and count all pairs with given sum
void findPairs(int arr[], int n, int sum) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
                count++;
            }
        }
    }

    if (count == 0) {
        cout << "No pairs found" << endl;
    } else {
        cout << "Total number of pairs: " << count << endl;
    }
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

    int sum;
    cout << "Enter target sum: ";
    cin >> sum;

    findPairs(arr, n, sum);

    return 0;
}
