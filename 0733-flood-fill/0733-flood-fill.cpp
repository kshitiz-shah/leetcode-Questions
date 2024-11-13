class Solution{
    public:
    vector<vector<int>> floodFill(vector<vector<int>> &image,
                                  int sr, int sc, int newColor) {
      

      int r = image.size();
      int c = image[0].size();
      int color = image[sr][sc];

      if(newColor != color){
  dfs(sr,sc , image, newColor , color);
      }

    

    return image;
    }

    void dfs(int sr ,int sc ,vector<vector<int>> &image,int newColor ,int color){
            
            int r = sr ;
            int c = sc ;
            int  row = image.size();
            int col = image[0].size();

            if( r < 0 || r >= row ||  c < 0  || c >= col || image [r][c] != color ){
                return ;
            }

            image[r][c] = newColor;

            dfs(r-1 , c ,image ,newColor,color);
            dfs(r+1 , c ,image ,newColor,color);
            dfs(r , c-1 ,image ,newColor,color);
            dfs(r, c+1 ,image ,newColor , color);



    }

};
