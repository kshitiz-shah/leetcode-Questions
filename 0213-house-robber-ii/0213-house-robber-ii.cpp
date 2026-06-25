class Solution {
public:
    int rob(vector<int>& nums) {

     vector <int> dp(nums.size()+1 , -1);
     vector <int> dp2(nums.size()+1 , -1);
    //   bool flag = false ;

    int n = nums.size();
    if(n == 1)return nums[0];
       int first =  solve(nums , 0 , dp , n-1);
       int second = solve(nums , 1 , dp2 , n);

       return max(first , second);
       
        
      

    }

    int solve(vector <int> &nums ,int ind ,  vector <int> &dp ,int n ){

        if(ind >= n)return 0 ;
        if(dp[ind] != -1 )return dp[ind];
        
        int take = nums[ind] + solve(nums, ind +2 ,dp , n);

        int nottake = solve(nums, ind +1 ,dp , n); 


        return dp[ind] = max(take ,nottake);



    }
};