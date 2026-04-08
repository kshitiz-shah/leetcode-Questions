class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        int r = grid.size();
        int c = grid[0].size();
        int ans = 0 ;
        vector < vector <bool>>vis(r , vector <bool>(c,false));

        for(int i  = 0 ; i < r ; i++){
            for(int j = 0 ; j< c ;j++){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    ans++;
                        dfs(i , j  , grid , vis);
                }

               
            }
        }


        return ans ;

        
    }

    void dfs( int r ,int c ,vector<vector<char>>& grid , vector<vector<bool>> &vis){

        int row = grid.size();
        int col = grid[0].size();


        if(r >= row || c >= col || c < 0 || r < 0 || grid[r][c] == '0' || vis[r][c]== true)return ;

        vis[r][c] = true ;

         dfs(r + 1, c  , grid , vis);
         dfs(r - 1, c  , grid , vis);
         dfs(r , c + 1  , grid , vis);
         dfs(r , c - 1  , grid , vis);
         return ;


           
    }
};