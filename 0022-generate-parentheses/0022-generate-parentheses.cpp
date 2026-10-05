class Solution {
public:
    vector<string> generateParenthesis(int n) {


        vector <string> ans ;
        int open = 0 ;
        int close = 0 ;
        solve(ans , open , close , n , "");
        return ans ;

        
    }
    void solve(vector <string> &ans , int open ,int close , int n , string temp){

        if(close > open || open > n)return ;
        if(close == open && open == n){
            ans.push_back(temp);
            return ;
        }
         solve(ans , open+1 , close , n , temp +'(');
         solve(ans , open , close+1 , n , temp +')');
         return ;

        
    }
};