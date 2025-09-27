#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, el = 0;
        for (int num : nums) {
            if (cnt == 0) {
                el = num;
                cnt = 1;
            } 
            else if (el == num) {
                cnt++;
            } 
            else {
                cnt--;
            }
        }
        return el; // Guaranteed to exist
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << s.majorityElement(nums) << endl; // Output: 2
    return 0;
}
