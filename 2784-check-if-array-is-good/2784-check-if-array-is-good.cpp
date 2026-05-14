class Solution {
public:
    bool isGood(vector<int>& nums) {

        int maxi  = 0 ;
        unordered_map<int ,int> mpp ;

        for(int i = 0 ;i< nums.size();i++){
            maxi = max(nums[i],maxi);
            mpp[nums[i]]++;
        }

        for(int i = 1 ;i < maxi ;i++){
            if(mpp[i]!= 1)return false;
        }
        if(mpp[maxi] != 2)return false ;
        return true ;
        
    }
};