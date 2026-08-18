class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        unordered_map<int, int> mpp ;
        if(k ==nums.size()){
            int largest = -1 ;
            for(int i =0 ;i < nums.size();i++){
                largest = max(largest , nums[i]);

            }
            return largest ;
        }

        for(int i = 0 ; i < nums.size()-k +1;i++){

            for(int j = i ;j < i+ k ;j++){
                mpp[nums[j]]++ ;
            }

        }
        int ans = -1 ;
        for(auto it : mpp){

            if(it.second == 1){
                if(it.first > ans) ans = it.first ;
            }

        }
        return ans ;
        
    }
};