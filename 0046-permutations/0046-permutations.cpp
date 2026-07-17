class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        int n = nums.size();

        vector<vector<int>> ans ;
        vector <int> temp ;
        vector <bool>visited(n ,false);

        solve(  ans ,  temp , nums , visited);

        return ans ;     
    }
    void solve( vector<vector<int>> &ans , vector <int> temp , vector<int>& nums , vector <bool> &visited){

        if(temp.size() == nums.size()){
            ans.push_back(temp);
            return ;
        }

        for(int i = 0 ;i < nums.size();i++){

            if(visited[i] == true)continue ;

            visited[i] = true ;
            temp.push_back(nums[i]);
            solve(ans , temp , nums,visited);

            temp.pop_back();
            visited[i] = false ;
        }



        

    }

};