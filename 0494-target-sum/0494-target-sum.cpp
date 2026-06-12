class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0 ;
        for(int x:nums){
            sum += x ;
        }
        int n = nums.size();
        
      return  solve(nums,target ,0 , n);
        
    }

    int solve(vector <int>& nums , int target , int ind ,int n){

        if(ind == n)return target == 0 ;
        if(ind > n)return 0 ;

        int plus = solve(nums, target + nums[ind] , ind +1 ,n);
        int minus = solve(nums,target - nums[ind], ind +1 , n);
        return plus + minus ;
    }
};