class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mpp ;

        for(int i = 0 ; i< nums.size();i++){
            int k =  target - nums[i];

            if(mpp.find(k) != mpp.end()){
                return {mpp[k] , i};
            }
            mpp[nums[i]] = i;
        }
        return {-1,-1};
        
    }
};