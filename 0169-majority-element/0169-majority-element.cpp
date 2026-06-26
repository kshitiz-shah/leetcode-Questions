class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mj = nums[0] ;
        int count = 1;

        for(int i = 1 ;i < nums.size();i++){

            if(nums[i] == mj){
                count++;
            }else{
                if(count == 0){
                    mj = nums[i];
                    count++;
                }else{
                    count--;
                }
            }

        }
        return mj ;
        
    }
};