class Solution {
public:
    vector<vector<int> > subsetsWithDup(vector<int>& nums) {
        //your code goes here

        sort(nums.begin(), nums.end());
        vector<int> temp ;
        vector <vector <int>> ans ;
        helper(0 , nums , temp , ans);

        return ans;
    
    }

  void helper( int ind , vector <int> nums , vector <int> &temp  , vector <vector<int>> &ans){

    if(ind == nums.size()) {
        ans.push_back(temp);
        return ;
    }

    
     temp.push_back(nums[ind]);

      helper(ind +1 , nums , temp , ans);
      temp.pop_back();
    //skipping all the duplicates
    while( ind +1 < nums.size() && nums[ind] == nums[ind +1]){
        ind++;
    }

        helper(ind +1 , nums , temp , ans);
    }

  

};