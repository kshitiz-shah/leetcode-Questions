class Solution {
public:
    int jump(vector<int>& nums) {
      
      int jump =0 ;
      int left =0 , right =0  , farthest =0;
      

    
    while( right < nums.size()-1){

        for(int i=left ; i <= right ;i++){

              farthest = max(farthest , i + nums[i]) ;
              

        } 
        jump++ ;   
              left = right +1 ;
               right = farthest ; 
    }
      
     return jump ;  

        
    }
};