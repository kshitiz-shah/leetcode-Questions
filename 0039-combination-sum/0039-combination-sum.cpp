class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector <int> temp ;
        vector <vector <int > > ans ;
        int n= candidates.size();


        helper(0, candidates , n , temp ,ans, target );

        return ans ;
        
    }

    void helper(int ind , vector<int>& candidates, int n ,   vector <int> temp ,  vector <vector <int > > &ans , int target  ){

        
       
       if(target == 0){
        ans.push_back(temp);
        return ;

       }
       
       if(target < 0){
        return ;
       }
       if(ind == n)return ;

    

     temp.push_back( candidates[ind] );
     helper(ind, candidates , n , temp ,ans, target - candidates[ind] );
     temp.pop_back();

     helper(ind +1, candidates , n , temp ,ans, target );



    }
};