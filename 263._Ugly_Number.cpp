// LeetCode Problem 263: Ugly Number


// Brute Force
#include <iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;

        while (n > 1) {
            if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0)
                break;

            if (n % 2 == 0)
                n /= 2;

            if (n % 3 == 0)
                n /= 3;

            if (n % 5 == 0)
                n /= 5;
        }

        return (n == 1);
    }
};

int main() {
    int n = 6;   

    Solution obj;
    bool result = obj.isUgly(n);

    if (result)
        cout << n << " is an Ugly Number" << endl;
    else
        cout << n << " is NOT an Ugly Number" << endl;

    return 0;
}
