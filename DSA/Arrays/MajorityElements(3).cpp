#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int el1 = INT_MIN, el2 = INT_MIN;
        int c1 = 0, c2 = 0;

        // Step 1: Find potential candidates
        for (int i = 0; i < n; i++) {
            if (el1 == nums[i]) {
                c1++;
            } 
            else if (el2 == nums[i]) {
                c2++;
            } 
            else if (c1 == 0) {
                el1 = nums[i];
                c1 = 1;
            } 
            else if (c2 == 0) {
                el2 = nums[i];
                c2 = 1;
            } 
            else {
                c1--;
                c2--;
            }
        }

        // Step 2: Verify candidates
        int cn1 = 0, cn2 = 0;
        for (int num : nums) {
            if (num == el1) cn1++;
            else if (num == el2) cn2++;
        }

        vector<int> result;
        int minFreq = (n / 3) + 1;

        if (cn1 >= minFreq) result.push_back(el1);
        if (cn2 >= minFreq) result.push_back(el2);

        return result;
    }
};

int main() {
    Solution s;

    vector<int> nums1 = {3,2,3};
    vector<int> ans1 = s.majorityElement(nums1);
    cout << "Output for [3,2,3]: ";
    for (int x : ans1) cout << x << " ";
    cout << endl;

    vector<int> nums2 = {1,1,1,3,3,2,2,2};
    vector<int> ans2 = s.majorityElement(nums2);
    cout << "Output for [1,1,1,3,3,2,2,2]: ";
    for (int x : ans2) cout << x << " ";
    cout << endl;

    return 0;
}
