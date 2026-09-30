class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size()-1 ;
        vector <int> dp (nums.size()+1 , -1);
        int can_take = 0;
      return solve(nums, 0 ,n ,  dp);
      
        
    }
    int solve(vector<int>& nums , int start , int end  , vector <int> &dp){

        if(start > end) return 0 ;
        if(dp[start] != -1)return dp[start];

        int take = nums[start] + solve(nums, start +2 , end ,dp);
        int not_take = solve(nums,start+1 , end,dp);

        return dp[start] = max(take , not_take);

      

    }
};