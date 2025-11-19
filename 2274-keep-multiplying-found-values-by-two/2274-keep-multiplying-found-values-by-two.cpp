class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {


        while(true){
            bool flag = false ;

            for(int i = 0 ;i < nums.size(); i++){
                if(nums[i] == original){
                    // nums[i] *= 2;
                    original = 2 * nums[i];
                    flag = true ;
                    break;
                }

            }
            if(flag == false){
              return original ;
            }

        }
        return original ;
        
    }
};