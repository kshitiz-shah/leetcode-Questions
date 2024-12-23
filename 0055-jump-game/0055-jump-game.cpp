class Solution {
public:
    bool canJump(vector<int>& nums) {

        int ptr=0;

        if(nums.size() == 1)return true;

       while( ptr < nums.size()-1){
       

            if(nums [ptr] != 0 ){
                ptr++;
              
            }

            else{
               int indx = ptr;
               
                while(1){
                     --ptr ;

                     if(ptr < 0)return false ;

                     if((nums[ptr] + ptr ) > indx ){
                     ptr = nums[ptr] + ptr  ;
                     break;
                }
                
                } 
               
            }

        }
        return true;
        
    }
};