class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> rows(200, 0), cols(200, 0);
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (!matrix[i][j]) {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            if (rows[i]) {
                for (int j = 0; j < matrix[0].size(); j++) {
                    matrix[i][j] = 0;
                }
            }
        }
        for (int j = 0; j < matrix[0].size(); j++) {
            if (cols[j]) {
                for (int i = 0; i < matrix.size(); i++) {
                    matrix[i][j] = 0;
                }
            }
        } 
    }
};
