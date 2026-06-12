class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0 ;
        for(int x:nums){
            sum += x ;
        }
        int n = nums.size();
        vector <vector <int>> dp(n+1 , vector <int>(sum *2 +1 ,-1));
        
      return  solve(nums,target ,0 , n ,dp, sum);
        
    }

    int solve(vector <int>& nums , int target , int ind ,int n , vector <vector<int>>&dp , int offset){
       
       if(target < -offset || target > offset)return 0;
        if(ind == n)return target == 0 ;
        if(ind > n)return 0 ;

        if(dp[ind][target + offset] != -1)return dp[ind][target + offset] ;

        int plus = solve(nums, target + nums[ind] , ind +1 ,n,dp,offset);
        int minus = solve(nums,target - nums[ind], ind +1 , n,dp,offset);
        return dp[ind][target + offset] =  plus + minus ;
    }
};