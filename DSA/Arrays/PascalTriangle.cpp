#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to generate a single row of Pascal's Triangle
    vector<int> generateRow(int row) {
        vector<int> ansRow;
        long long ans = 1;  // First element is always 1
        ansRow.push_back(1);

        for (int i = 1; i < row; i++) {
            ans = ans * (row - i);
            ans = ans / i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    // Function to generate Pascal's Triangle up to numRows
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> result = sol.generate(numRows);

    cout << "Pascal's Triangle with " << numRows << " rows:" << endl;
    for (auto &row : result) {
        for (auto &num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
