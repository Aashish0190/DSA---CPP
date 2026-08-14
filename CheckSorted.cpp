#include <iostream>
using namespace std;

bool checkSorted(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter the array: ";
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << checkSorted(arr, n);

    return 0;
}