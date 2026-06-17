class Solution {
public:
    int longestPalindromeSubseq(string s) {

           if(s.size() == 0 )return 0 ;
            int n = s.size()-1;
         vector <vector <int>> dp(n+1 , vector <int>(n+1 , -1));
          return  solve( s , 0 , n,dp);

        }
        int solve(string &s , int start , int end , vector <vector <int>> &dp){

            if(start == end) return  1 ;
            if(start > end)return 0 ;
            int  take = 0 ;
            
          if(dp[start][end] != -1)return dp[start][end];
            if(s[start] == s[end]){
               take = 2 + solve(s , start +1 ,end -1 ,dp);
            }

            int nottake = max(solve(s , start ,end -1 ,dp) ,solve(s , start + 1 ,end , dp));

            return dp[start][end] = max(take ,nottake);

        
        }
};