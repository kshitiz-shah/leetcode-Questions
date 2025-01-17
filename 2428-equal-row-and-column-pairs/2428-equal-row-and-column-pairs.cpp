class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        int n = grid.size();
        int ans =0 ;


        map < vector <int>, int> mpp;

        for(int i =0 ;i< n; i++){
            mpp[grid[i]]++ ;
        }

        for(int i =0 ;i< n ;i++){

           vector <int> col ;

           for(int j = 0 ;j < n ; j++){
              
              col.push_back(grid[j][i]);
              
           }

           if(mpp.find(col) != mpp.end()){
             ans += mpp[col];
           }


        }

        return ans;
        
    }
};