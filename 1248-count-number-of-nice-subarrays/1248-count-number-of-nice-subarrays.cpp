class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        unordered_map <int,int> mpp ;

        int left = 0 ;
        int right = 0;
        int prefix = 0;
        mpp[0] =1 ;
        int ans= 0;

        while(right < nums.size()){

            prefix += nums[right]%2 ;

            int more = prefix - k ;

           if( mpp.find(more) != mpp.end())ans += mpp[more];

           mpp[prefix]++ ;
           right++ ;
           
        }
        return ans ;
        
    }
};