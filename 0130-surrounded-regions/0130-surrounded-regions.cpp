class Solution {
public:
    void solve(vector<vector<char>>& mat) {
          int r = mat.size();
       int c = mat[0].size();

       vector<vector<char>> vis(r,vector<char>(c,'X'));

       for(int i=0;i< r;i++){
        for(int j=0;j< c;j++){
            if( i ==0 || j ==0 || i == r-1 || j == c-1 ){
                if(mat[i][j] == 'O' && vis[i][j] == 'X'){
                    dfs(i,j,vis,mat);
                }
            }
        }
       }
     for(int i=0;i< r;i++){
        for(int j=0;j<c;j++){
            mat[i][j] = vis[i][j];
        }
     }
        
    }
      void dfs(int i ,int j ,vector<vector<char>> &vis ,vector<vector<char>> &mat){
            
            int r = mat.size();
             int c = mat[0].size();

             if(i < 0 || j <0 || i>= r ||j >=c || mat[i][j] == 'X' || vis[i][j] == 'O'){
                return;
             }

             vis[i][j]= 'O';

             dfs(i+1,j,vis ,mat);
             dfs(i-1,j,vis ,mat);
             dfs(i,j+1,vis ,mat);
             dfs(i,j-1,vis ,mat);
             
      }
};