class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        bool checkrow = false;
        bool checkcol = false;

        int r = matrix.size();
        int c = matrix[0].size();

        // check first row
        for(int i = 0; i < c; i++){
            if(matrix[0][i] == 0){
                checkrow = true;
                break;
            }
        }

        // check first column
        for(int i = 0; i < r; i++){
            if(matrix[i][0] == 0){
                checkcol = true;
                break;
            }
        }

        // mark
        for(int i = 1; i < r; i++){
            for(int j = 1; j < c; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        // set rows to zero
        for(int i = 1; i < r; i++){
            if(matrix[i][0] == 0){
                for(int j = 0; j < c; j++){
                    matrix[i][j] = 0;
                }
            }
        }

        // set cols to zero
        for(int j = 1; j < c; j++){
            if(matrix[0][j] == 0){
                for(int i = 0; i < r; i++){
                    matrix[i][j] = 0;
                }
            }
        }

        // first row
        if(checkrow){
            for(int i = 0; i < c; i++){
                matrix[0][i] = 0;
            }
        }

        // first column
        if(checkcol){
            for(int i = 0; i < r; i++){
                matrix[i][0] = 0;
            }
        }
    }
};