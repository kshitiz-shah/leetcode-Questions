class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        int row = grid.size();
        int col = grid[0].size();
       vector<vector<int>> check(row, vector<int>(col, 0));
        int count = 0 ;

        for(int i = 0 ;i < row;i++){
            for(int j = 0 ; j< col;j++){

                if(check[i][j] == 0 && grid[i][j] == '1'){
                    count++;
                      solve(i ,j ,row ,col , check ,grid );

                }          

            }
        }

        return count;

    
        
    }
    void solve(int i ,int j ,int row  , int col , vector<vector<int >>& check , vector<vector<char >>&grid ){

       if(i < 0 || j < 0 || i >= row || j >= col || grid[i][j] == '0' || check[i][j] ==1)return ;

        check[i][j] = 1 ;

        solve(i +1, j ,row ,col , check ,grid );
        solve(i -1, j ,row ,col , check ,grid );
        solve(i , j  +1 ,row ,col , check ,grid );
         solve(i , j   -1 ,row ,col , check ,grid );

         return ;





    }
};