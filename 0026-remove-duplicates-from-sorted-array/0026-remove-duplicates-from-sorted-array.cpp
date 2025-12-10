class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        unordered_map<int , int> mpp;

        for(int x :nums){
            mpp[x]++;
        }
        int k = mpp.size();
        
        int i = 0;
        for(auto &p : mpp){
            nums[i++] = p.first;
        }
        sort(nums.begin(), nums.begin()+k);

        return k;
        
    }
};