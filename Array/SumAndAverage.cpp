#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of Arrya: ";
    cin >> n;

    int arr[n];
    cout<<"Enter the Array Elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int Sum = 0;
    for (int i = 0; i < n; i++)
    {
        Sum += arr[i];
    }
    float Average = (float)Sum / n;

    cout << "Sum = " << Sum << endl;
    cout << "Average = " << Average << endl;

    return 0;
}