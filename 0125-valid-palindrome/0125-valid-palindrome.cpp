class Solution {
public:
    bool isPalindrome(string s) {

        string container = "";

        for(char c : s){
            int x = c;
            if(x >= 65 && x <= 90  ){
                container += tolower(c);
            }
            else if (x >= 97 && x <= 122){
                container += c;
            }
            else if(x >= 48 && x <= 57){
                container += c;

            }
        }
        int k = container.size()-1;
        int i = 0;
       while(i <= k){
            if(container[i++] != container[k--])return false ;

        }
        return true ;

        
    }
};