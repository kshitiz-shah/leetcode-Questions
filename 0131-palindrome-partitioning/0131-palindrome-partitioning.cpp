class Solution {
public:
    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans ;
         vector <string > container ;
         

          helper(0 , ans , container ,  s);

          return ans ;
        
    }

    void helper(int ind , vector<vector<string>> &ans ,vector <string > &container ,  string s ){

        if(ind == s.size()){
            ans.push_back(container);
            return ;
        }

        
        for(int i = ind ; i<s.size();i++){

            if(ispalindrome( ind ,i ,s )){
                container.push_back(s.substr(ind , i - ind + 1));
                helper(i + 1 , ans , container  , s);
                container.pop_back();
            }
        }

    }

    bool ispalindrome(int left , int right , string s ){
       
        while( left <= right){
            if(s[left++] != s[right--] )return false;
        }
       

        return true;
    }



};