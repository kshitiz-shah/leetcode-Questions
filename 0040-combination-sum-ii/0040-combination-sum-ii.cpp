class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       
       //to store the temp 1-D array 
        vector<int> temp ;
     // to store the final answer
      vector<vector<int>> ans;

      //sorting the candidates for skipping the duplicates;

      sort(candidates.begin() , candidates.end());
      
        helper(0 , candidates, target , temp , ans );

        return ans;
        
        
    }

    void helper(int ind , vector <int> &candidates , int target , vector <int> &temp , vector <vector <int>> &ans){

        if(target == 0){
            ans.push_back(temp);
            return ;
        }

        if(  ind == candidates.size() || target < 0)return ;

      for(int i =ind +1 ;i < candidates.size();i++){
        if(candidates[i] != candidates[ind]){
              helper(i, candidates, target , temp , ans);
              break;


        }

       
      }
        


        temp.push_back(candidates[ind]);
         helper(ind +1, candidates, target - candidates[ind] , temp , ans);
         temp.pop_back() ;

         






    }
};