#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        // Step 1: Find first decreasing element from the right
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // Step 2: If no such index found → reverse whole array
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the element just larger than nums[index] from right side
        for (int i = n - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Step 4: Reverse the elements to the right of index
        reverse(nums.begin() + index + 1, nums.end());
    }
};

// Driver code for testing
int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 4, 2};

    cout << "Before: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    sol.nextPermutation(nums);

    cout << "After:  ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}
