class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int r = board.size();
        int c = board[0].size();

        vector<vector <int>> vis(r ,vector <int>(c ,0));

        for(int i = 0 ; i < r ;i++){
            for(int j = 0 ; j < c ;j++){

                if(i ==0 || i == r-1 || j== 0 || j == c-1 ){
                    if(vis[i][j] == 0 && board[i][j] == 'O'){
                        
                        solve(i , j , vis , board);
                    }
                }

            }
        }

          for(int i = 0 ; i < r ;i++){
            for(int j = 0 ; j < c ;j++){

               if(board[i][j] == 'O' && vis[i][j] == 0){
                board[i][j] = 'X';
               }

            }
        }


       

        
    
    }
    void solve(int i , int j , vector <vector <int>> &vis , vector <vector <char>> &board){

        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || vis[i][j]==1 || board[i][j]== 'X')return ;

        vis[i][j] = 1 ;
         solve(i +1 ,j ,vis ,board);
         solve(i-1, j ,vis ,board);
         solve(i , j-1 ,vis,board);
         solve(i , j+1 ,vis ,board );



    }
};