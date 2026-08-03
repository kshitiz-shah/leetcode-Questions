class Solution {
public:
    bool stoneGame(vector<int>& piles) {

        int left = 0 ;
        int right =  piles.size()-1 ;
          int n = piles.size();
        vector <vector <int>> dp(n , vector <int> (n ,INT_MIN));
      
       int k =  solve(true , left ,right , n, piles ,dp);
        if(k > 0)return true ;
        return false ;
        
    }
    int solve(bool aliceturn , int left , int right , int n , vector<int>& piles,
     vector <vector <int>> &dp){
         if(left > right)return 0; 
         int anx = 0 ;
         if(dp[left][right] != INT_MIN)return dp[left][right];

         if(aliceturn){
            anx += max(piles[left] + solve(false, left+1 ,right , n, piles,dp) ,piles[right] + solve(false, left ,right-1 , n, piles,dp)) ;
            
         }else{
            anx -= min(anx -= piles[left] + solve(true, left+1 ,right , n, piles,dp) , anx -= piles[right] + solve(true, left ,right-1 , n, piles,dp));
            
         }
         return dp[left][right] = anx ;
    }
};