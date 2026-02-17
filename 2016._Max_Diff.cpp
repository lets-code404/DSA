// LeetCode Problem 2016: Maximum Difference Between Increasing Elements

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minVal = nums[0];
        int maxdiff = -1;
        int n = nums.size();
        
        for(int i = 1; i < n; i++) {
            if(nums[i] > minVal) {
                int diff = nums[i] - minVal;
                maxdiff = max(maxdiff, diff);
            }
            else {
                minVal = nums[i];
            }
        }
        return maxdiff;
    }
};

int main() {

    vector<int> nums = {7, 1, 5, 4};

    Solution obj;
    int result = obj.maximumDifference(nums);

    cout << "Maximum Difference: " << result << endl;

    return 0;
}
