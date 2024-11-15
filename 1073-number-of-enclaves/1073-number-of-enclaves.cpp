class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {

        int r = grid.size();
        int c= grid[0].size();
        int count =0;
        
        vector<vector<int>> vis(r, vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i == 0 || j == 0 || i == r-1 || j == c-1 ){
                    if(vis[i][j] == 0 && grid[i][j] == 1){
                        dfs( vis,grid ,i ,j);
                    }
                }
            }
        }
       

        for(int i=0 ; i< r;i++){
            for(int j=0;j<c;j++){
                if(vis[i][j] == 0 && grid[i][j] ==1){
                    count++;
                }
            }
        }
        return count;
        
    }

    void dfs(vector<vector<int>> &vis , vector<vector<int>>& grid ,int i , int j){
        
        int r = grid.size();
        int c= grid[0].size();

        if( i < 0 || j < 0 || i >= r || j >= c || vis[i][j] == 1 ||  grid[i][j] == 0){
            return;
        }
        vis[i][j]=1;

        dfs(vis , grid , i-1 ,j);
        dfs(vis , grid , i+1 ,j);
        dfs(vis , grid , i ,j+1);
        dfs(vis , grid , i ,j-1);
    }
};