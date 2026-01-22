#include <iostream>
using namespace std;

int trap(int arr[], int n) {
    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while (left < right) {
        if (arr[left] <= arr[right]) {
            if (arr[left] >= leftMax)
                leftMax = arr[left];
            else
                water += leftMax - arr[left];
            left++;
        } else {
            if (arr[right] >= rightMax)
                rightMax = arr[right];
            else
                water += rightMax - arr[right];
            right--;
        }
    }
    return water;
}

int main() {
    int n;
    cout << "Enter number of bars: ";
    cin >> n;

    int arr[n];
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Trapped rain water: " << trap(arr, n);

    return 0;
}
