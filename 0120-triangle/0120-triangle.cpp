class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {

        int r = triangle.size();
        vector<vector<int>> dp(r, vector<int>(r, INT_MAX));

        return solve(0, 0, triangle, dp);
    }

    int solve(int i, int j, vector<vector<int>>& triangle,
              vector<vector<int>>& dp) {

        if (i == triangle.size() - 1)
            return triangle[i][j];

        if (dp[i][j] != INT_MAX)
            return dp[i][j];

        int down = triangle[i][j] +
                   solve(i + 1, j, triangle, dp);

        int diagonal = triangle[i][j] +
                       solve(i + 1, j + 1, triangle, dp);

        return dp[i][j] = min(down, diagonal);
    }
};