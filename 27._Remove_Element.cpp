#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int j = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main() {
    int n = 4, val = 3;
    vector<int> nums = {3, 2, 2, 3};

    int newLength = removeElement(nums, val);

    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
