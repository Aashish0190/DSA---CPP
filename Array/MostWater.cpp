#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        int width = right - left;
        int currHeight = min(height[left], height[right]);
        int area = width * currHeight;

        maxWater = max(maxWater, area);

        // Move pointer with smaller height
        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return maxWater;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++)
        cin >> height[i];

    cout << "Maximum water container: " << maxArea(height);
    return 0;
}
