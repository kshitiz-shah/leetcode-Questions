class Solution {
public:
    bool isMatch(string s, string p) {
      vector <vector <int>> dp(s.size() , vector <int>(p.size() ,-1));
      return  solve(s ,p , 0 , 0 ,dp);


     
        
    }
    bool solve(string &s , string &p , int i , int j , vector <vector <int>> &dp){

        
        if( i != s.size() && j == p.size()) return false ;
        if( i == s.size() && j == p.size()) return true ;

        if( i == s.size()){
            while(j < p.size()){
                if(p[j] == '*'){
                    j++;
                }else{
                    return false ;
                }
            }
            return true ;
        }
        if(dp[i][j] != -1)return dp[i][j];
        
        if(s[i] == p[j] ||  p[j] == '?'){
            return dp[i][j] =solve(s ,p ,  i + 1, j +1 ,dp);
        }
        
        if(p[j] == '*'){
            return dp[i][j] = (solve(s ,p ,  i + 1, j ,dp) || solve(s ,p ,  i , j +1,dp));
        }

        return dp[i][j] = false ;

    }
};