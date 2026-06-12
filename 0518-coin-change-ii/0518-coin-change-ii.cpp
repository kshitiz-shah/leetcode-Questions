class Solution {
public:
    int change(int amount, vector<int>& coins) {
          int n = coins.size();
        vector <vector <int>> dp(n , vector <int>(amount +1, -1));

       return solve(amount ,coins , 0,dp);
        
    }
    int solve(int amount , vector<int>& coins , int ind  , vector <vector <int>> &dp){

        if(amount == 0)return 1 ;

        if(amount < 0 || ind >= coins.size())return 0;

        if(dp[ind][amount] != -1)return dp[ind][amount];

        int take = solve(amount - coins[ind] , coins ,ind ,dp );
        int nottake = solve(amount , coins , ind +1 , dp );

        return dp[ind][amount] =  take + nottake ;


    }
};