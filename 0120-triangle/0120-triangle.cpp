class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {

        int r = triangle.size();
        int c = 1;
      vector <vector <int>> dp(r , vector <int>(r , INT_MAX));
      return  solve(0 ,0 ,r,c , triangle ,dp);


    }
    int solve(int i ,int  j, int r ,int c , vector<vector<int>>& matrix , 
     vector <vector <int>> &dp){

        if(i == r-1 ) return matrix[i][j];
        if(i == r || j == c) return 1e9 ;
        if(dp[i][j] != INT_MAX)return dp[i][j];

        int bottom = matrix[i][j] + solve(i +1 , j , r , c+1 , matrix ,dp);
        int bottomright = matrix[i][j] + solve(i +1 , j+1 , r , c+1 , matrix,dp);

        return dp[i][j]= min(bottom ,bottomright);
        
    }
};