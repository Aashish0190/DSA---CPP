#include <iostream>
using namespace std;

int SecondLargest(int arr[], int n)
{
    int Largest = arr[0];
    int SLargest = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] > Largest){
            SLargest = Largest;
            Largest = arr[i];
        }
        else if(arr[i] < Largest &&  arr[i] >SLargest){
            SLargest = arr[i];
        }
    }
    return SLargest;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter the array: ";
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"Second largest :- " << SecondLargest(arr, n);

    return 0;
}