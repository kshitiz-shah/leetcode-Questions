class Solution {
public:
    int minInsertions(string s) {

         int n = s.size();
    vector <vector <int>> dp(n , vector <int> (n ,-1));

    return solve(s , 0 , s.size()-1 , dp);
      
  }
  int solve(string &s , int start , int end ,vector <vector <int>> &dp ){

    if(start >= end )return 0 ;

    if(dp[start][end] != -1)return dp[start][end] ;

    int take = INT_MAX;

    if(s[start] == s[end]){
         take = solve(s , start +1 , end -1 ,dp);
    }

    int nottake = 1 + min(solve(s , start  , end -1 ,dp) , solve(s , start +1 , end  ,dp));
     

     return dp[start][end] = min(take ,nottake);

    
        
    }
};