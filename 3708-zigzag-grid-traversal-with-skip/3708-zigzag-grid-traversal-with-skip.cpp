class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {

        vector <int> ans ;
        int r = grid.size();
        int c = grid[0].size();
        for(int  i= 0 ;i<r;i++){

            for(int j =  0 ;j< c;j++){

                if( i % 2 ==  0){
                    if(j%2 == 0){
                            ans.push_back(grid[i][j]);
                    }
                   
                }
                else{
                    int k= c-j -1;
                    if(k%2 == 1){
                           ans.push_back(grid[i][k]);
                    }
                   
                }
                
            }

        }
        return ans;
        
    }
};