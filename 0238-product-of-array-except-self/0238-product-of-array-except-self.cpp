class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

     int prefix =1 ;
     int suffix = 1 ;
     vector <int> ans(nums.size() ,1);
     int n = nums.size();

     for(int i = 0; i< nums.size();i++){
        ans[i] *= prefix ;
        ans[ n-1 -i] *= suffix ;
        prefix *= nums[i];
        suffix *= nums[n-1-i];
        


     }

    





        return ans ;



        
    }
};