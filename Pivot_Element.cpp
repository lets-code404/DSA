//Leetcode Problem: 1502. Can Make Arithmetic Progression From Sequence

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n=4;
    // cin >> n;

    int result = n * (n + 1) / 2;
    int x = sqrt(result);

    if (x * x == result) {
        cout << x;
    } else {
        cout << -1;
    }

    return 0;
}
