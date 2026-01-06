#include <iostream>
using namespace std;

void findIntersection(int a[], int n, int b[], int m) {
    cout << "Intersection elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                b[j] = -1;   // mark used
                break;
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;

    int a[n];
    cout << "Enter first array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    int b[m];
    cout << "Enter second array elements: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    findIntersection(a, n, b, m);

    return 0;
}
