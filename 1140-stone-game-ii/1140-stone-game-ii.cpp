class Solution {
public:
    int stoneGameII(vector<int>& piles) {

         int n = piles.size();

        vector<int> suffix(n);
        suffix[n - 1] = piles[n - 1];

        for (int i = n - 2; i >= 0; i--)
            suffix[i] = suffix[i + 1] + piles[i];

        vector<vector<vector<int>>> dp(
            2,
            vector<vector<int>>(n, vector<int>(n + 1, INT_MIN))
        );

        return solve(true, 0, 1, piles, suffix, dp);
    }

    int solve(bool aliceTurn,
              int index,
              int M,
              vector<int>& piles,
              vector<int>& suffix,
              vector<vector<vector<int>>>& dp) {

        if (index >= piles.size())
            return 0;

        if (dp[aliceTurn][index][M] != INT_MIN)
            return dp[aliceTurn][index][M];

        int ans;

        if (aliceTurn) {

            ans = INT_MIN;
            int stones = 0;

            for (int X = 1; X <= 2 * M && index + X <= piles.size(); X++) {

                stones += piles[index + X - 1];

                ans = max(
                    ans,
                    stones + solve(false,
                                   index + X,
                                   max(M, X),
                                   piles,
                                   suffix,
                                   dp)
                );
            }

        } else {

            ans = INT_MAX;

            for (int X = 1; X <= 2 * M && index + X <= piles.size(); X++) {

                ans = min(
                    ans,
                    solve(true,
                          index + X,
                          max(M, X),
                          piles,
                          suffix,
                          dp)
                );
            }
        }

        return dp[aliceTurn][index][M] = ans;
    }
        
    
};