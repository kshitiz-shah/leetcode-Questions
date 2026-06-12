class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

     
      int n = coins.size();
       vector <vector <int>> dp(n , vector <int>(amount +1 ,-1));
        int ans =   solve(coins , amount, 0,dp);

      return(ans == 1e9)?-1:ans ;

        
    }

   int  solve(vector<int>& coins , int amount , int ind , vector <vector <int>> &dp ){


     
      if(ind > coins.size() || amount < 0) return 1e9  ;
       if(ind == coins.size()){
        if(amount == 0)return 0;
        else return 1e9;
       }
       if(dp[ind][amount] != -1)return dp[ind][amount];
    
      int take = 1 + solve(coins ,amount - coins[ind] , ind , dp);
      int nottake = solve(coins ,amount , ind  +1 ,dp);

      return dp[ind][amount] = min(take , nottake);

    

   }
};