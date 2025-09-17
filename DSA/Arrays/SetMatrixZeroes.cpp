#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
UU6uu        
        vector<int> row(m, 0), col(n, 0);
        
        // First pass: mark rows and cols
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        
        // Second pass: set zeroes
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(row[i] == 1 || col[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main() {
    // Example input
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
     u   {1, 1, 1}
    };

    Solution sol;
    sol.setZeroes(matrix);

    // Output result
    cout << "Matrix after setting zeroes:\n";
    for(auto &row : matrix) {
        for(auto &val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
