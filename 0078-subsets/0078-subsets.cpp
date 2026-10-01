class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
          int ind = 0 ;
        vector <vector <int>>ans ;
        vector<int> temp ;
        solve(nums, 0 ,ans, temp );
        return ans ;
    }
    void solve(vector <int> & nums , int ind ,vector <vector <int>> &ans ,  vector<int> temp  ){
        if(ind == nums.size()){
            ans.push_back(temp);
            return ;
        }
        temp.push_back(nums[ind]);
        solve(nums ,ind +1 , ans, temp);
        temp.pop_back();
        solve(nums ,ind +1 , ans, temp);

        return ;
        
    }
};