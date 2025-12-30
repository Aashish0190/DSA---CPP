#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int EvenCount = 0;
    int OddCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            EvenCount++;
        }
        else
        {
            OddCount++;
        }
    }

    cout << "EvenCount : " << EvenCount << endl;
    cout << "OddCount  :" << OddCount << endl;
    return 0;
}