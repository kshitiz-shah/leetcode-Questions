class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map <int ,int > mpp1;
       

        for(auto n : nums2){
            mpp1[n]++;
        }

       

        vector <int > ans ;

        for( int i = 0 ;i < nums1.size() ;i++){
            if(mpp1.find(nums1[i]) != mpp1.end()){
                if(mpp1[nums1[i]] > 0){
                    ans.push_back(nums1[i]);
                    mpp1[nums1[i]]--;
                }
                
                
            }
        }

    return ans;

        
    }
};