class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix[0].size();
        int col = matrix.size();
        int low = 0 ; 
        int high = (row * col) -1 ;

        while(low <= high){
            int mid = low + (high - low)/2;

            int r = mid / row ;
            int c = mid % row ;;

            if(matrix[r][c] == target) return true ;
            else if(matrix[r][c] < target) low = mid +1 ;
            else high = mid -1 ;




        }
        return false;


        
    }
};