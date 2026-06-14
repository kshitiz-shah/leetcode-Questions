class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        unordered_map <int , int>mpp;
        int prefix_sum = 0 ;
        mpp[0] =1 ;
        int ans = 0 ;

        for(int i = 0 ;i <nums.size() ;i++){

             prefix_sum  += nums[i];
             int remove = prefix_sum - goal ;

             if(mpp.find(remove) != mpp.end())ans += mpp[remove];

             mpp[prefix_sum]++ ;



        }
        return ans ;
        

        
        
    }
};