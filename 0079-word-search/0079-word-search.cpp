class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {

        int rows =  board.size(); 
        int cols = board[0].size();

        
      
       for(int i = 0 ; i< rows ; i++){

        for(int j = 0 ; j < cols ;j++){
            int ind = 0;
            if(board[i][j] == word[0]){
             if(helper( i, j , rows ,cols , board , word ,ind))return true;  

            }
        }
       }
      
  return false;
        
    }

    bool helper(int i , int j , int rows , int cols ,vector<vector<char>> &board, string word  ,int ind){

        if(ind == word.size()){
            return true ;
        }

        if( (i >= rows) || ( j >= cols) || (i < 0) || (j<0)|| (word[ind] != board[i][j]) )return false ;
       char x = board[i][j] ;
        board[i][j] = '#';


       bool ans =  ( helper( i + 1, j , rows ,cols , board , word ,ind +1 ) || helper( i, j +1 , rows ,cols , board , word ,ind +1) || helper( i - 1, j , rows ,cols , board , word ,ind +1 ) || helper( i, j - 1 , rows ,cols , board , word ,ind +1));

     board[i][j] = x;
     return ans ;


    }
};