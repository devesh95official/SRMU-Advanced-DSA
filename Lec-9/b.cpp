// Queen permutation
#include <bits/stdc++.h>

using namespace std;


void generate(vector<bool>&boxes, int q, int r, string ans) {
    // base case
    if (q == r) {
        cout << ans << endl;
        return;
    }
    // try placing your current queen in all the boxes
    for (int i = 0; i < boxes.size(); i++) {
        if (!boxes[i]) {
            boxes[i] = true; // choose

            generate(boxes, q + 1, r,
            ans + "Q" + to_string(q + 1) + "B" + to_string(i) + " ");

            boxes[i] = false; // backtrack
        }
    }
}


int main() {

    int n = 6; // boxes
    int r = 5; // queens

    vector<bool> boxes(n, false);

    generate(boxes, 0, r, "");

    return 0;
}