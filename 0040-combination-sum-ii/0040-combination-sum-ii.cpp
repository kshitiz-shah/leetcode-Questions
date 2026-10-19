class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

       vector<vector<int>> ans ;
 
        vector <int> temp ;
        sort(candidates.begin(), candidates.end());
 
        solve(candidates , target , ans , temp , 0);
       
       
        return ans ;
 
        
 
 
 
    }
    void solve(vector<int>& candidates, int target , vector<vector<int>> &ans , vector <int> temp , int i){
 
         
 
        if(target == 0){
            
            ans.push_back(temp);
            return ;
        }
        if( i == candidates.size() || target < 0 )return ;
 
         temp.push_back(candidates[i]);
          
         solve(candidates , target - candidates[i] , ans , temp , i+1 );
          temp.pop_back();

         while(i + 1 < candidates.size() && candidates[i+1] == candidates[i])i++ ;
        solve(candidates , target  , ans , temp , i+1 );
        
        
         
 
        
    }
};