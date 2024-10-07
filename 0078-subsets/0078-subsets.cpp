class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int totalsets = (1<<n);

        vector<vector<int>> ans;

        for(int i=0;i< totalsets; i++){
            vector <int> subsets;

            for(int j=0;j< n;j++){
                 if( i &(1<<j)){
                    subsets.push_back(nums[j]);

                 }

            }
            ans.push_back(subsets);
        }

    return ans;
        
    }
};