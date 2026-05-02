class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        int left = 0;
        int right = column -1;
        int top =0;
        int bottom = row -1;
        int count =0;
        int tne = row * column;
        vector <int> ans;


        while(count < tne){
            for(int i= left ;i<=right && count < tne ;i++){
                ans.push_back(matrix[top][i]);
                count ++;
            }
            top++;

            for(int i= top ;i<=bottom && count < tne ;i++){
                ans.push_back(matrix[i][right]);
                count ++;
            }
            right --;

            for(int i= right ;i>=left && count < tne ;i--){
                ans.push_back(matrix[bottom][i]);
                count ++;
            }
            bottom-- ;

             for(int i= bottom ;i>=top && count < tne ;i--){
                ans.push_back(matrix[i][left]);
                count ++;
            }
            left ++ ;


        }
       return ans;
        
    }
};