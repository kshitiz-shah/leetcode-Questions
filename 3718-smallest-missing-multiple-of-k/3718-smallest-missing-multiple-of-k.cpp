class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        unordered_set<int> st ;
        for(int i = 0 ;i < nums.size();i++){
            st.insert(nums[i]);
        }
        for(int i = k ; k <= 100 ;i++){
            if(i% k == 0  && st.find(i) == st.end())return i ;
        }

        return -1 ;
        
    }
};