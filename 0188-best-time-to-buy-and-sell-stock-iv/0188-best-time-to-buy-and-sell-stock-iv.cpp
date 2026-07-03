class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n= prices.size();
          vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k +1, -1)));
      return  solve( prices , n , 1 , k , 0 ,dp);

    }

 int solve(vector <int> &arr , int n , int buy , int chances ,  int ind , vector <vector <vector<int>>> &dp ){
           
           if(ind == n || chances == 0)return 0;
           int profit = 0 ;

           if(dp[ind][buy][chances] != -1)return dp[ind][buy][chances];

           if(buy){
            profit = max((-arr[ind] + solve(arr , n , 0 , chances , ind +1 , dp)) , solve(arr ,n , 1 , chances  , ind +1  ,dp));

           }else{
            profit = max((arr[ind] + solve(arr , n , 1 , chances-1, ind +1 ,dp)) , solve(arr ,n , 0 , chances   , ind +1 ,dp) );


           }
           return dp[ind][buy][chances] = profit ;
  
        
    }
};