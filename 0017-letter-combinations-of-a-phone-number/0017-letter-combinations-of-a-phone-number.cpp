class Solution {
public:
    vector<string> letterCombinations(string digits) {

         vector <string> keys = { "" , "" , "abc" ,"def","ghi" , "jkl" ,"mno","pqrs" ,"tuv" , "wxyz"};

         vector <string> ans ;
         string temp ;

         helper(0 , keys , ans , temp , digits);

         return ans ;

        
    }

    void helper(int ind , vector <string> keys ,   vector <string> &ans , string temp , string digits){

      if(ind == digits.size()){
        ans.push_back(temp);
        return ;
      }

      int digit = digits[ind] - '0';

      for(int i = 0 ;i < keys[digit].size(); i++ ){

         helper(ind + 1, keys , ans , temp + keys[digit][i], digits);

      }


    }
};