// Leetcode problem: 881. Boats to Save People

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {
    // Greedy Method (Optimal)
        int n = people.size(), boat=0;
        sort(begin(people), end(people));
        int i=0, j=n-1;
            while(i<=j) {
                if(people[i] + people[j] <= limit) {
                    i++;
                    j--;
                    boat++;
                }
                else {
                    j--;
                    boat++;
                }
            }
        return boat;
}

int main() {

    vector<int> people = {1,6,4,9};
    int limit = 10;

    cout << "Minimum boats required = " << numRescueBoats(people, limit) << endl;

    return 0;
}
