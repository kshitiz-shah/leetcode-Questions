class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int r = grid.size();
        int c = grid[0].size();

            vector<vector<int>> vis(r , vector<int>(c ,0));
        
        queue<pair<pair<int,int> ,int >> q;
        int time =0;
        int count =0;


        for(int i=0;i<r;i++){
            for(int j = 0; j< c;j++){
                if(grid[i][j] == 2 ){
                    q.push({{i,j},time});
                    vis[i][j] = 2;
                }
                else if(grid[i][j] == 1){
                    count++;
                }

            }
        }
       

        int drow[] ={1,0,-1,0};
        int dcol[] ={0,-1,0,1};
        while(!q.empty()){
            int m = q.front().first.first ;
            int n = q.front().first.second ;
            int t = q.front().second ;
            q.pop();

             time = max(time ,t);


            for(int i=0 ;i < 4 ;i++){
                int row = m + drow[i];
                int col = n + dcol[i];

                if( row >= 0 && col >= 0 && row < r && col < c &&
                 vis[row][col] != 2 && grid[row][col] == 1 ){
                 
                    q.push({{row ,col} , t +1});
                    --count ;
                    vis[row][col] =2;


                 }
                 
            

            }


        }
        if( count != 0){
            return -1;
        }
        else{
            return time;
        }
        
        
        
    }
};