class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector <int> dp(n , -1);
     return  fun(nums , 0, dp);

        
    }
   int fun( vector <int> nums , int ind , vector <int> &dp){
    if(ind >= nums.size())return 0;
    if(dp[ind] != -1) return dp[ind];
    int take =  nums[ind] + fun(nums , ind+2 ,dp);
    int nottake = fun(nums, ind +1, dp);

   return dp[ind] = max(take ,nottake);

   }
};