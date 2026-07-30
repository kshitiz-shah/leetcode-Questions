class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

         int r = grid.size();
        int c = grid[0].size();

        vector <vector<int>> vis(r , vector<int>(c ,0));
        int count = 0;


        for(int i = 0; i< r ;i++ ){
            for(int j = 0 ;j < c ;j++){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    count++;
                    dfs(grid ,vis ,i ,j , r,c );
                }

            }
        }
        return count ;
    }
    void dfs(vector<vector<char>> &grid , vector <vector<int>> &vis,int i , int j , int r ,int c){
        if(i == r || i < 0 || j == c || j < 0 || vis[i][j]==1|| grid[i][j] == '0')return ;

        vis[i][j]=1;

        dfs(grid ,vis ,i+1 ,j , r,c );
        dfs(grid ,vis ,i ,j+1 , r,c );
        dfs(grid ,vis ,i-1 ,j , r,c );
        dfs(grid ,vis ,i ,j-1 , r,c );







    }
};