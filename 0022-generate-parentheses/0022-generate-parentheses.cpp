class Solution {
public:
    vector<string> generateParenthesis(int n) {
        

   vector<string> ans ;

helper( 0, 0 , n , "" , ans);

return ans;  
    }

void helper (int open ,int close , int n , string s ,vector <string> &ans){

    if( close > open || open > n )return ;

    if( (close + open ) == (2* n)  ){
        ans.push_back(s);
        return ;
    }

    if( open < n){
        helper(open+1 ,close , n , s + '(' ,ans);
    }

    if( close < open ){
        helper(open ,close+1 , n , s + ')' ,ans);
    }

}
};