class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int ,int> mpp ;
        int prefixsum = 0 ;
        int count = 0 ;
        mpp[0]++;


        for(int i = 0 ; i< nums.size() ;i++){
            prefixsum += nums[i];

            int remove =  prefixsum - k ;
            if(mpp.find(remove) != mpp.end())count += mpp[remove];
            mpp[prefixsum]++;
        }

        return count ;

        
    }
};