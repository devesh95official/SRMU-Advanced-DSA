#include <bits/stdc++.h>

using namespace std;


vector<int> temp;

void subsets(int idx, vector<int>&nums) {
    if (idx == nums.size()) {
        for (int i = 0; i < temp.size(); i++) {
            cout << temp[i] << " ";
        }
        cout << endl;
        return;
    }


    //take
    temp.push_back(nums[idx]);
    subsets(idx + 1, nums);

    //refuse
    temp.pop_back(); // backtrack
    subsets(idx + 1, nums);

}

int main() {

    vector<int> nums = {1, 2, 3, 4, 5};

    subsets(0, nums);

    return 0;
}