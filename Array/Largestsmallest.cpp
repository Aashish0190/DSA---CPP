#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minVal = arr[0];
    int maxVal = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < minVal)
            minVal = arr[i];
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;

    return 0;
}
