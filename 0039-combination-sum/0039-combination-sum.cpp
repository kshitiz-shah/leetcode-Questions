class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {


        vector <vector <int>> ans;
        vector <int> temp ;

         dfs(ans , temp , candidates ,target , 0);
        return ans ;
        
    }
    void dfs(vector<vector <int>> &ans , vector <int> &temp , vector <int> &candidates , int target ,int ind){


        if ( target == 0){
            ans.push_back(temp);
            return ;
        }

        if(target < 0 || ind == candidates.size()){
            return;
        }
        temp.push_back(candidates[ind]);
        dfs(ans , temp , candidates ,target - candidates[ind] , ind );
        temp.pop_back();
         dfs(ans , temp , candidates ,target , ind  +1 );

         return ;






    }
};