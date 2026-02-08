#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 5, 7, 9}; 

    int n = arr.size();
    sort(arr.begin(), arr.end());

    int diff = arr[1] - arr[0];

    for (int i = 2; i < n; i++) {
        if (arr[i] - arr[i - 1] != diff) {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    return 0;
}
