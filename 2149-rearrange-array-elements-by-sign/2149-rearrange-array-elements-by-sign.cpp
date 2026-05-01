class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

         vector<int> ans ;

        int pos = 0 ;
        int neg= 0 ;
       

        for(int i = 0 ;i < nums.size() ;i++){
            if(i %2 == 0){
                 if(nums[pos] >= 0){
                   
                    ans.push_back(nums[pos++]);

            }else{
                while(nums[pos] < 0){
                    pos++;
                }
                ans.push_back(nums[pos++]);
            }
            }

            else{
                 if(nums[neg] < 0){
                    ans.push_back(nums[neg++]);

            }else{
                while(nums[neg] > 0){
                    neg++;
                }
                ans.push_back(nums[neg++]);
            }

            }
        }
        return ans ;
        
    }
};