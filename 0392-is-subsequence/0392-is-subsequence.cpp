class Solution {
public:
    bool isSubsequence(string s, string t) {

      return  solve(s,t, 0,0);
    }
    bool solve(string s , string t ,int ptr1 ,int ptr2){

        if(ptr1 == s.size())return true ;
        if(ptr2 == t.size()) return false ;

        if(s[ptr1] == t[ptr2]) return  solve(s,t, ptr1 +1 ,ptr2 +1);
        else return  solve(s,t, ptr1  ,ptr2 +1);



    }
};