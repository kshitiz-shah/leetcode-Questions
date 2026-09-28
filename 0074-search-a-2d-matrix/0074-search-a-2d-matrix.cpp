class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int r = matrix.size();
        int c = matrix[0].size();


        int tle = (r * c) -1;

        int low = 0 ;
        int high = tle ;

        while(low <= high){
            int mid = low + (high - low)/2 ;
            cout<< mid;

           int r1  = mid / c ;
           int c1 = mid % c ;
         
             if(matrix[r1][c1] == target) return true ;
           else if(matrix[r1][c1] < target) low = mid +1;
           else high = mid -1 ;

          
          


        }
        return false ;



        
    }
};