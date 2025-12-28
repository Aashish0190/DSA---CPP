#include<iostream>
using namespace std;

void Reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while (start <= end){
        swap(arr[start++], arr[end--]);
    }
}

int main(){

    int n ;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    
    cout<<"Enter the Array : " ;

    int arr [n] ;
    for(int i = 0; i < n; i++){
       cin >> arr[i];
    }
  Reverse(arr, n);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0; 
}