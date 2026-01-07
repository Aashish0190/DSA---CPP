#include <iostream>
#include <unordered_set>
using namespace std;

void findUnion(int a[], int n, int b[], int m) {
    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        s.insert(a[i]);
    }

    for (int i = 0; i < m; i++) {
        s.insert(b[i]);
    }

    cout << "Union elements: ";
    for (auto x : s) {
        cout << x << " ";
    }
}

int main() {
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) cin >> b[i];

    findUnion(a, n, b, m);
    return 0;
}
