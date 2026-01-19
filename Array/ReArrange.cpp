#include <iostream>
#include <vector>
using namespace std;

void rearrange(int arr[], int n) {
    vector<int> pos, neg;

    // Separate positives and negatives
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    int i = 0, p = 0, ne = 0;

    // Alternate positive and negative
    while (p < pos.size() && ne < neg.size()) {
        arr[i++] = pos[p++];
        arr[i++] = neg[ne++];
    }

    // Add remaining positives
    while (p < pos.size())
        arr[i++] = pos[p++];

    // Add remaining negatives
    while (ne < neg.size())
        arr[i++] = neg[ne++];
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    rearrange(arr, n);

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
