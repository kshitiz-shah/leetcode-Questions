class Solution {
public:
    vector<string> generateParenthesis(int n) {

        vector <string> ans ;
        // int ind = 0;
        int left = 0 ;
        int right = 0;
        string s = "" ;

        solver( left, right , n ,s, ans);


        return ans ;
        
    }

    void solver(int left ,int right ,int n, string s , vector <string> &ans){

        if(left < right) return ;
        if(left + right > 2 * n )return ;
        if(left > n || right > n)return ;

        if((left + right == 2 * n) && (left == right)){
           ans.push_back(s);
           return ;
        } 

        solver(left + 1 , right , n, s + '(' , ans);
        solver(left , right + 1, n, s + ')' , ans);

    }
};