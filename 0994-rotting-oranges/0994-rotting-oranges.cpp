class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

         int r = grid.size();
        int c = grid[0].size();
        vector <vector <int>> vis(r , vector <int>(c ,0));
        queue<pair<pair<int, int>, int>> q; 

        for(int i = 0 ;i < r ;i++){
            for(int j = 0 ;j<c ;j++){

                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] =1 ;
                }
            }
        }
        int ans = 0 ;

        while(!q.empty()){

            int i = q.front().first.first ;
            int j = q.front().first.second ;
            int minute = q.front().second ;

            q.pop();
            ans = max(ans ,minute);

            int row[4]= {0,1,-1,0};
            int col[4] = {1,0,0,-1};

            for(int k= 0 ; k < 4 ;k++){
                int newr = i + row[k];
                int newc = j + col[k];
               
               if(newr >= 0 && newr < r && newc >= 0 && newc < c && vis[newr][newc] != 1 && grid[newr][newc] ==1){
                q.push({{newr ,newc}, minute+1});
                vis[newr][newc] =1 ;
               }
            }

        }

        for(int i = 0 ;i < r ;i++){
            for(int j = 0 ;j < c ;j++){
                if(vis[i][j] != 1 && grid[i][j] ==1) return -1 ;
            }
        }
        return ans ;

        
    }
};