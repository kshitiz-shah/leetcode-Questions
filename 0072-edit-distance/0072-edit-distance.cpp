class Solution {
public:
    int minDistance(string word1, string word2) {
        vector <vector <int>>dp(word1.size() , vector <int>(word2.size() , -1) );
      return  solve(word1, word2 , 0 , 0,dp);
        
    }
    int solve(string &word1 , string &word2 , int i ,int j , vector <vector <int>> &dp ){

        if(i == word1.size() ){
            // s1 got exusted 
            return word2.size()-j ;
        }

        if( j == word2.size()) {
            // s1 got exusted 
            return word1.size()- i ;
        }
        if(dp[i][j] != -1)return dp[i][j];

        if(word1[i] == word2[j]){
          return  solve(word1, word2 , i +1 , j +1 ,dp);

        }

        int insertion = 1 + solve(word1, word2 , i  , j +1 ,dp);
        int deletion = 1 + solve(word1, word2 , i+1  , j ,dp);
        int replace = 1 + solve(word1, word2 , i+1  , j +1,dp );

        return  dp[i][j] = min({insertion  , deletion , replace});



        
    }
};