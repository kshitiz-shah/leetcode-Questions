class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector <int> temp ;
         vector<vector<int> > ans ;
         int n=  nums.size();

         helper(0 , n , nums , ans ,temp);


      return ans;  
    }

    void helper( int ind , int n , vector <int> nums , vector<vector<int> > &ans , vector <int> temp   ){

        if( ind == n)
        {
            ans.push_back(temp);
             
            return ;
        }

         helper(ind + 1, n , nums , ans ,temp);
         temp.push_back(nums[ind]);

         helper(ind + 1, n , nums , ans ,temp);
       temp.pop_back();
      
    }
};