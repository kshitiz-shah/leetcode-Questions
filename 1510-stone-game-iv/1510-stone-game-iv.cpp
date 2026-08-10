class Solution {
public:
    bool winnerSquareGame(int n) {
       vector<vector<int>>dp(n+1, vector<int>(2,-1));
        return solve(n, true,dp);
    }

    bool solve(int n, bool aliceTurn , vector<vector<int>> &dp) {

        if (!aliceTurn && n == 0)
            return true;

        if (aliceTurn && n == 0)
            return false;
            int turn = aliceTurn?1:0 ;

            if(dp[n][turn] != -1)return dp[n][turn];

        for (int i = 1; i * i <= n; i++) {

            if (aliceTurn) {

                if (solve(n - i * i, false ,dp)) {
                    return dp[n][turn] =  true;
                }

            } else {

                if (!solve(n - i * i, true,dp)) {
                    return dp[n][turn] =  false;
                }
            }
        }

        return dp[n][turn] =  aliceTurn ? false : true;
    }
};