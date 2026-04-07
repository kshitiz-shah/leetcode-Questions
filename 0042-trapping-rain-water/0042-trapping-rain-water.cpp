class Solution {
public:
    int trap(vector<int>& height) {

        int leftmax = -1;
        int rightmax = -1 ;

        int n = height.size();
        int left = 0 ; 
        int right = n-1 ;
        
        int ans = 0 ;

      while(left < right){

       if(height[left] < height[right]){
        if(leftmax > height[left]){
            ans += leftmax - height[left];
        }
        else{
            leftmax = height[left];
        }
        left++ ;
       }
       else{
          if(rightmax > height[right]){
            ans += rightmax - height[right];
          }
          else{
            rightmax = height[right];
          }
          right--;
      

       }
      }

       return ans ;


        
        
    }
};