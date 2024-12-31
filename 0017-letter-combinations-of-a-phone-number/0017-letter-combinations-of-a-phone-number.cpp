class Solution {
public:
    vector<string> letterCombinations(string digits) {

        if(digits.size() == 0) return {};

       vector <string> keys = {"" , "","abc" ,"def","ghi" ,"jkl" ,"mno","pqrs","tuv","wxyz"};

       string temp = "" ;
       vector <string> ans ;

       helper(0 , keys ,temp ,ans ,digits);
       return ans;
        
    }

    void helper( int ind , vector <string> keys ,  string temp ,vector <string> &ans , string digits){

    if(ind  == digits.size()){
        ans.push_back(temp);
        return;
    }

    int num = digits[ind] -'0';

    for(int i = 0 ;i< keys[num].size() ; i++){
         helper(ind + 1 , keys ,temp  +  keys[num][i],ans ,digits);

    }

    }

};