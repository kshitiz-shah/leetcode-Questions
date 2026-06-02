class Solution {
public:
    int climbStairs(int n) {

       
         vector <int> dp ( n+1 , -1);

      return  testfun(n  , dp);

       

     


        
    }
    int testfun(int n ,  vector <int> &dp){
      
        if(n <= 1)return 1 ;

        if(dp[n]!= -1)return dp[n];

            
        

      return dp[n] = testfun(n-1  ,dp ) + testfun(n-2,dp );
    }
    

};