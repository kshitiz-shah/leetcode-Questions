class Solution {
public:
    int stoneGameII(vector<int>& piles) {

        int n = piles.size();
        bool aliceturn = true ;
        vector<vector<vector<int>>> dp(n+1 , vector<vector<int>>(n+1 , vector<int>(2,-1)));

       return solve(0 , n , piles ,1 ,true,dp);

     



    }
    int solve(int ind , int n , vector <int> &piles, int M ,bool aliceturn , vector<vector<vector<int>>> &dp){

        if(ind >= n)return 0 ;
        int turn = (aliceturn)?1:0 ;
        if(dp[ind][M][turn] != -1)return dp[ind][M][turn];
       
         int totalstones = (aliceturn)? -1 : INT_MAX ;
         int stones = 0 ;
        for(int X = 1 ;ind + X <= n &&  X <= 2*M ; X++){
            stones += piles[ind + X -1];

            if(aliceturn){
                totalstones = max(totalstones , stones + solve(ind + X , n , piles , max(M, X), false , dp ));

        
            }else{
                totalstones = min(totalstones ,solve( ind +X , n , piles , max(M, X), true,dp ));

            }


        }
      return dp[ind][M][turn] = totalstones ;
    }
};