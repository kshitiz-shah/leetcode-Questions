class Solution {
public:
    bool stoneGame(vector<int>& nums) {

       int left = 0 ;
        int right = nums.size()-1;
        bool aliceturn = true ;
        int n = nums.size();

        vector <vector <int>> dp(n , vector <int> (n,-1));


      int ans =  solve(left , right , nums,aliceturn,dp);
        if(ans >= 0)return true ;
        return false ;

        
    }
    long long solve(int left ,int right, vector <int> & nums, bool aliceturn, vector <vector <int>> &dp){

        if(left > right)return 0;
        if(dp[left][right]!= -1)return dp[left][right];
       long long ans = 0 ;
        if(aliceturn){
            ans +=  max(nums[left] + solve(left+ 1 , right , nums,false,dp),
             nums[right] + solve(left ,right-1 , nums ,false,dp));

        }
        else{
            ans -= max(nums[left] + solve(left+ 1 , right , nums,false,dp),
             nums[right] + solve(left ,right-1 , nums ,false,dp));
        }

        return dp[left][right] = ans ;
    }
};