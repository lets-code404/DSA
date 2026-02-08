//Leetcode Problem: 9. Palindrome Number

#include <iostream>
using namespace std;

int main() {
    int x = 121;   

    int num = x, rem;
    long long digit = 0;

    while (x > 0) {
        rem = x % 10;
        digit = digit * 10 + rem;
        x = x / 10;
    }

    if (digit == num) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
