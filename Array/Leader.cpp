#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {16,17,4,3,5,2};
    int n = 6;

    vector<int> leader;

    int maxRight = arr[n-1];
    leader.push_back(maxRight);

    for(int i = n-2; i >= 0; i--){
        if(arr[i] >= maxRight){
            maxRight = arr[i];
            leader.push_back(maxRight);
        }
    }

    // print in correct order
    for(int i = leader.size() - 1; i >= 0; i--){
        cout << leader[i] << " ";
    }

    return 0;
}