// Leetcode problem: 11. Container With Most Water

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int maxwt = 0;
    int n = height.size();
    int L = 0, R = n - 1;

    while (L < R) {
        int maxht = min(height[L], height[R]);
        int width = R - L;
        int area = maxht * width;

        maxwt = max(maxwt, area);

        if (height[L] < height[R])
            L++;
        else
            R--;
    }
    return maxwt;
}

int main() {

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int result = maxArea(height);

    cout << "Maximum water container area = " << result << endl;

    return 0;
}
