class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n,0);
        int sum;

        for(int i =0; i < nums.size(); i++){
            sum = 0;
            for(int j=0; j< nums.size(); j++){
                if(nums[i]>nums[j]){
                    sum += 1;
                }
            }
            ans[i] = sum;
        }
        return ans;
    }
};