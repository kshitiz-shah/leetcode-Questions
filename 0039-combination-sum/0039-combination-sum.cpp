class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

          set<vector<int>> ans ;

        vector <int> temp ;

        solve(candidates , target , ans , temp , 0);
       
       vector <vector<int>> final_ans(ans.begin(), ans.end());
        return final_ans ;

        



    }
    void solve(vector<int>& candidates, int target , set<vector<int>> &ans , vector <int> &temp , int i){

         

        if(target == 0){
           
            ans.insert(temp);
            return ;
        }
        if( i == candidates.size() ||  target < 0)return ;

         temp.push_back(candidates[i]);
         solve(candidates , target- candidates[i] , ans , temp , i );
         temp.pop_back();
         solve(candidates , target , ans , temp , i +1);


        
    }
};