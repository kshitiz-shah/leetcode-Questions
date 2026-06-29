class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {


       int m = obstacleGrid.size();
       int n = obstacleGrid[0].size();
        vector <vector <int>> dp(m , vector <int> (n , -1));
        
       return solve(0 , 0 , m , n ,dp ,obstacleGrid);
        

    }
    int solve(int i , int j , int m ,int n , vector <vector <int>> &dp,
    vector<vector<int>>& matrix){

       
        if( i == m || j == n  || matrix[i][j] == 1)return 0;
      
         if(i == m-1 && j == n-1)return 1 ;
        if(dp[i][j] != -1)return dp[i][j] ;

        int right = solve( i+1 , j ,m , n , dp,matrix);
        int down = solve( i , j +1 , m , n, dp ,matrix);

        return dp[i][j] =  right + down ;

        
    }
};