class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int ptr1 = 0;
        int ptr2 =0;
      int zeros =0;
        int ans = -1;
      int  zerocount =0;
        

        while(ptr2 < nums.size()){
            if(nums[ptr2] == 0){
                zeros++;
                zerocount++;

            }
            
                
                while(zeros > 1){
                    if(nums[ptr1] == 0)zeros--;
                    ptr1++;
                }

        
           
        ans = max(ans , ptr2-ptr1 );
             ptr2++;
        

        }
       

        return ans;
    }
};