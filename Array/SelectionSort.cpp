#include <iostream>
using namespace std;

void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)   // Fixed
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Selection_Sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}