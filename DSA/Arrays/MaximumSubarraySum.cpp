#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;  // stores the maximum sum
        int sum = 0;         // running sum

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            maxi = max(maxi, sum);

            // if sum goes negative, reset it to 0
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxi;
    }
};

// Driver code for testing
int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Input: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    int result = sol.maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
