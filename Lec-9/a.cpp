// permutation
#include <bits/stdc++.h>

using namespace std;


void generate(vector<int>&nums, vector<bool>&used, vector<int>&curr) {
    // base case
    if (curr.size() == nums.size()) {
        for (auto x : curr)cout << x << " ";
        cout << endl;
        return;
    }
    // look for each element, if not used then use
    for (int i = 0; i < nums.size(); i++) {
        if (!used[i]) {
            used[i] = true, curr.push_back(nums[i]); // choose

            generate(nums, used, curr);

            used[i] = false, curr.pop_back(); //undo
        }
    }
}


int main() {

    vector<int> nums = {1, 2, 3, 4, 5};
    vector<bool> used(nums.size(), false);
    vector<int> curr;

    generate(nums, used, curr);

    return 0;
}