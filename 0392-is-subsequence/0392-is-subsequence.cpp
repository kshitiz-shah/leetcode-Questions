class Solution {
public:
    bool isSubsequence(string s, string t) {
       vector <vector <int >> dp(s.size() , vector <int> (t.size() ,-1));
      return  solve(s,t, 0,0,dp);
    }
    bool solve(string &s , string &t ,int ptr1 ,int ptr2 ,vector <vector <int>> &dp){

        if(ptr1 == s.size())return true ;
        if(ptr2 == t.size()) return false ;

        if(dp[ptr1][ptr2] != -1)return dp[ptr1][ptr2];

        if(s[ptr1] == t[ptr2]) return  solve(s,t, ptr1 +1 ,ptr2 +1 ,dp);
        else return dp[ptr1][ptr2] = solve(s,t, ptr1  ,ptr2 +1 ,dp);



    }
};