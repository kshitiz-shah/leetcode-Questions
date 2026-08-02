class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {

   int n = nums.size();

      vector<vector<int>> dp(n ,vector<int>(n,-1)) ;

       return solve(0 , n-1 , nums,dp) >= 0 ? true:false;


        
    }
    int solve(int left , int right , vector <int> &piles ,vector<vector<int>> &dp){
        if(left > right)return 0;
        if(dp[left][right] != -1)return dp[left][right];

        int leftmax = piles[left] - solve(left +1 , right, piles,dp) ;
        int rightmax = piles[right] -solve(left , right -1, piles,dp) ;

        return dp[left][right] = max(leftmax ,rightmax);

        
    }
};