class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int ,int > mpp ;
        int prefixsum = 0 ;
        mpp[0] = 1;
        int anscount = 0;

        for(int i = 0; i < nums.size() ;i++){
           
           prefixsum += nums[i];
           int x =  prefixsum - k ;

           if(mpp.find(x) != mpp.end()){
             
             anscount += mpp[x] ;
           }
           mpp[prefixsum]++; 
           
        }
        return anscount ;
    }
};