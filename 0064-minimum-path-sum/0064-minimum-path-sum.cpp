class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        int r = grid.size();
        int c= grid[0].size();
        int ans = INT_MAX ;
        vector <vector <int>> dp(r , vector <int>(c , -1));

      return  solve(0,0, r ,c ,grid ,dp);
      
        
    }
    int solve(int i , int j , int r ,int c , vector<vector<int>>&grid , vector <vector <int>> &dp ){

        if(i == r-1 && j == c-1)return grid[i][j] ;
        if(i == r || j == c) return 1e9 ;

        if(dp[i][j] != -1)return dp[i][j];
         

        int right = grid[i][j] +  solve( i+ 1,j, r ,c ,grid ,dp);
        int down = grid[i][j] +  solve( i ,j +1, r ,c ,grid ,dp);
        
       return dp[i][j]= min(right ,down);

    


    }
};