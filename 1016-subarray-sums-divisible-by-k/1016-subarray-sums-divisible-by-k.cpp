class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map <int , int> mpp;
        mpp[0] =1;
        int ans = 0;

       int prefixsum = 0;

        for(int i = 0 ;i < nums.size() ; i++){

           prefixsum += nums[i];

           int x = ((prefixsum % k ) + k ) % k;

           if(mpp.find(x) != mpp.end()){

            ans += mpp[x];

           }

           mpp[x]++;

        }


     return ans;
        
    }
};