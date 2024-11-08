class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row =  grid.size();
        int col = grid[0].size();

        vector<vector<int>> vis(row , vector <int> (col , 0));
        int count =0;

        for(int i=0;i< row;i++){
            for(int j= 0;j< col ;j++){
              if(grid[i][j] == '1' && vis [i][j] == 0){
                count++ ;

                dfs(i , j , grid , vis);
              }
            }
        }

      return count;  
    }
    void dfs(int r , int c , vector<vector<char>>& grid ,vector<vector<int>> &vis){

        int rows = grid.size();
        int cols = grid[0].size();

        if( r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == '0' || vis[r][c] == 1){
            return ;

        }
        vis[r][c] =1 ;
// checking in all the 4 directions
        dfs(r -1 , c ,grid ,vis);
        dfs(r + 1, c ,grid ,vis);
        dfs(r  , c-1,grid ,vis);
        dfs(r , c + 1,grid ,vis);


    }
};