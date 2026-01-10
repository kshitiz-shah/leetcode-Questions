class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {

        vector <vector<string>> ans ;
       vector<string> board(n, string(n, '.'));


        int row = 0 ;

        helper( row , ans , board,n);
        
       return ans ; 
    }

    void helper(int row ,  vector <vector<string>> &ans ,  vector<string> &board ,int n){


        if(row == n){
            ans.push_back(board);
            return;
        }

        for( int col = 0 ; col < n ; col++){

          if(  ispossible(board , row ,col , n)){
            board[row][col] = 'Q';
             helper(row +1 ,ans , board,n);
             board[row][col] = '.';

          }

        }
       




    }
    bool ispossible( vector< string> &board  , int row , int col , int n){
  int r = row, c = col;

        // Check for upper left diagonal
        while (r >= 0 && c >= 0) {
            if (board[r][c] == 'Q') return false;
            r--;
            c--;
        }

        // Reset to the original position
        r = row;
        c = col;

        // Check for top
        while (r >= 0) {
            if (board[r][c] == 'Q') return false;
            r--;
        }

        // Reset to the original position
        r = row;
        c = col;

        // Check for top right diagonal
        while (r >= 0 && c < board[0].size()) {
            if (board[r][c] == 'Q') return false;
            r--;
            c++;
        }

        // If no queens are found, it's safe
        return true;


    }
};