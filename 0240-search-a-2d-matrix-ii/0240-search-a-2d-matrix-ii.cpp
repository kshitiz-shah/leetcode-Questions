class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int r = matrix.size();
        int c = matrix[0].size();

        int right = c-1;
        int left =0;

        while(left < r && right >= 0){
            if(matrix[left][right] == target ) return true;
            else if(matrix[left][right] < target) left ++;
            else right--;
        }
        return false;
    }
};