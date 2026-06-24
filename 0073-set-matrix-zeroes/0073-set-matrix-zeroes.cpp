class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int r = matrix.size();
        int c= matrix[0].size();

        vector <vector <int>> temp(r , vector <int> (c , -1));
        for(int i = 0 ;i < r ;i++){
            for(int j = 0 ; j < c;j++){
                 temp[i][j] = matrix[i][j];
            }
        }

         for(int i = 0 ;i < r ;i++){
            for(int j = 0 ; j < c;j++){
                 if(matrix[i][j] == 0){
                    
                int k = 0 ;
                while( k < r){
                    temp[k][j] = 0 ;
                    k++;
                }
                k =0;
                 while( k < c){
                    temp[i][k] = 0 ;
                    k++ ;
                }

                 }
            }
        }

        

      for(int i = 0 ;i < r ;i++){
            for(int j = 0 ; j < c;j++){
                 matrix[i][j] = temp[i][j] ;
            }
        }
  

        
    }
};