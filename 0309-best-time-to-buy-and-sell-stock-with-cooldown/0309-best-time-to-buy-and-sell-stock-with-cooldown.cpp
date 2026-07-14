class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 1 ;
        vector <vector <int>> dp(prices.size() , vector <int>(2 ,-1));
       return solve(prices , 0 , buy , dp);
        
    }
    int solve(vector <int> & prices , int ind , int flag , vector <vector <int>> &dp){
        if(ind >= prices.size())return 0;
        if(dp[ind][flag] != -1)return dp[ind][flag];
        int buy = 0 ;
        int sell = 0 ;
        if(flag == 1){
             buy = max(-prices[ind] + solve(prices, ind +1 , 0,dp), solve(prices, ind +1 , 1,dp));

        }else{
            
                sell = max(
                     prices[ind] + solve(prices , ind + 2 , 1,dp) 
        , solve(prices , ind + 1, 0,dp));

            
              


        }

        return dp[ind][flag]= max(buy ,sell);


        
       
      

    }
};