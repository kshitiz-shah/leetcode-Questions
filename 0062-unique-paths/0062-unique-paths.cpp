class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector <int >> dp(m+1 , vector <int>(n+1 ,-1));
      int ans =  dppath(m,n,dp);

        return ans ;
        
    }

   int dppath(int m , int n , vector<vector <int  >> &dp ){

        if(m == 1 && n ==1){
           return 1 ;
        }
        if(m == 0 || n == 0)return  0;
        if(dp[m][n] != -1)return dp[m][n];

        return  dp[m][n] =  dppath(m-1 , n , dp) + dppath(m , n-1 , dp);

    }
};