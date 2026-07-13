class Solution {
public:
    int climbStairs(int n) {
       vector <int>dp(n+1 ,-1);
       return solve(n ,dp);
        
    }

    int solve(int n , vector <int> &dp){
        if(n == 0) return 1 ;
        if(dp[n] != -1)return dp[n];
        int one = solve(n-1 ,dp);
        int two = 0;
        if(n-2 >= 0){
            two = solve(n-2,dp);
        }
        return dp[n] = one + two ;
    }
};