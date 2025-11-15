class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
       unordered_map<int ,int> mpp;
       vector<int> ans;

       for(int i = 0 ;i< nums.size() ;i++){

        mpp[nums[i]]++;
       }

       for(int i =1 ; i <=nums.size();i++){
        if(mpp.find(i) == mpp.end()){
             ans.push_back(i);
        }
        
       }
       return ans;
       
    }
};