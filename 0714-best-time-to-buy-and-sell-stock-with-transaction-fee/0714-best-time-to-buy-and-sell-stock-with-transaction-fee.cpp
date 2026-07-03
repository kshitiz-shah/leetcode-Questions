class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();

         vector<vector<int>>dp(n , vector<int>(2,-1));
       return solve(prices , n , fee ,0 , 1,dp);
   
    }

    int solve(vector <int> &arr , int n , int fee , int ind ,int buy ,vector<vector<int>>&dp){
        if(ind ==  n)return 0;
        int profit = 0;
        if(dp[ind][buy] != -1)return dp[ind][buy] ;
        if(buy){
            profit = max((-arr[ind] + solve(arr,n,fee ,ind +1 , 0 ,dp)),solve(arr,n,fee ,ind +1 , 1 ,dp));

        }else{
            profit = max(((arr[ind]-fee) + solve(arr,n,fee ,ind +1 , 1 ,dp)),solve(arr,n,fee ,ind +1 , 0 ,dp));

        }
        return dp[ind][buy] = profit ;

        
    }
};