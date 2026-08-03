class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();

        vector<vector<int>> dp(2, vector<int>(n, INT_MIN));

        int score = solve(true, 0, stoneValue, dp);

        if (score > 0) return "Alice";
        if (score < 0) return "Bob";
        return "Tie";
    }

    int solve(bool aliceTurn,
              int index,
              vector<int>& stoneValue,
              vector<vector<int>>& dp) {

        if (index >= stoneValue.size())
            return 0;

        if (dp[aliceTurn][index] != INT_MIN)
            return dp[aliceTurn][index];

        int ans;

        if (aliceTurn) {

            ans = INT_MIN;
            int stones = 0;

            for (int X = 1; X <= 3 && index + X <= stoneValue.size(); X++) {

                stones += stoneValue[index + X - 1];

                ans = max(
                    ans,
                    stones + solve(false,
                                   index + X,
                                   stoneValue,
                                   dp)
                );
            }

        } else {

            ans = INT_MAX;
            int stones = 0;

            for (int X = 1; X <= 3 && index + X <= stoneValue.size(); X++) {

                stones += stoneValue[index + X - 1];

                ans = min(
                    ans,
                    solve(true,
                          index + X,
                          stoneValue,
                          dp) - stones
                );
            }
        }

        return dp[aliceTurn][index] = ans;
    }
};