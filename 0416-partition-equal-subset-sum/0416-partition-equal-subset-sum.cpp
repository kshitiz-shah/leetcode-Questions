class Solution {
public:
    bool canPartition(vector<int>& arr) {
         int sum = 0;
         int n = arr.size();
        for(int i =0 ;i < arr.size();i++){
            sum += arr[i];
        }
        if(sum % 2 == 1)return false ;
        sum /= 2 ;

        vector <vector <int>> dp(n+1 , vector <int>(sum +1, -1));


      return  solve(n , arr ,sum , 0, dp);

    }
    bool solve(int n , vector <int> &arr , int sum , int ind,vector <vector <int>> &dp ){
        if(sum < 0)return false ;
        if(sum == 0) return true ;
        if(ind >=  n)return false ;
        if(dp[ind][sum] != -1)return  dp[ind][sum];



        return dp[ind][sum] =(solve(n , arr , sum - arr[ind], ind + 1, dp) || solve(n , arr ,sum , ind + 1 ,dp )) ;
    }
        
    
};