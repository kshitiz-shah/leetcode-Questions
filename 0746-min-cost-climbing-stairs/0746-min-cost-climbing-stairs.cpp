class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n =  cost.size() ;
        vector <int> dp(n +1 ,-1);
        int zero = solve(0 , n , cost ,dp );
        int one = solve(1, n , cost ,dp );

        return min(zero ,one);
        
    }
    int solve(int start , int end , vector <int>& cost , vector <int> &dp){
       
         if(start == end)return 0;
         if(dp[start] != -1)return dp[start] ;
         int one =  cost[start] + solve(start + 1 , end , cost ,dp);
         int two = INT_MAX ;

         if(start + 2 <= end){
            two = cost[start] + solve(start + 2 , end ,cost ,dp);
         }

         return dp[start] = min(one ,two);

    }
};