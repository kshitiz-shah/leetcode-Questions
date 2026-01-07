class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int>& candidates, int target) {
        //your code goes here

        sort(candidates.begin() , candidates.end());
        vector<vector<int> > ans ;
        vector <int> temp ;

        helper(0 , candidates , target , ans , temp);

        return ans ;

           
    }

    void helper(int i , vector<int>& candidates, int target ,  vector<vector<int> > &ans, vector <int> temp){

        if(target == 0){
            ans.push_back(temp);
            return;
        }

        if(i == candidates.size() || target < 0){
            return ;
        }

        temp.push_back(candidates[i]);
       helper(i + 1 , candidates , target- candidates[i] , ans , temp);
       temp.pop_back();

        while(i+1 < candidates.size() && candidates[i] == candidates[i+1]){
            i++;
        }

        helper(i + 1 , candidates , target , ans , temp);


      

       









    }
};