class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {

        int n = nums.size();
        bool aliceturn = true ;
        vector<vector<int>> dp(n ,vector <int>(n ,INT_MIN));

      if(  solve(0 , n-1 , nums ,aliceturn ,dp) >= 0 ) return true;
      return false;


        
    }
    int solve(int left , int right , vector <int> &nums, bool aliceturn , vector<vector<int>> &dp){

        if(left > right)return 0; 
        if(dp[left][right] != INT_MIN)return dp[left][right];

        if(aliceturn){
            return dp[left][right] = max(nums[left] + solve(left +1 , right , nums, false ,dp) , nums[right] + solve(left , right -1 ,nums, false,dp));
        }else{
            return dp[left][right] = min( - nums[left] + solve(left+1 , right , nums, true,dp) , -nums[right]+ solve(left ,right -1 ,nums ,true,dp));
        }



    }
};