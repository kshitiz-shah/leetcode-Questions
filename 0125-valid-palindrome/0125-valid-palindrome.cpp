class Solution {
public:
    bool isPalindrome(string s) {

        string container = "";

        for(char c : s){
            
            if(c >= 'A' && c <= 'Z'  ){
                container += tolower(c);
            }
            else if (c >= 'a' && c <= 'z'){
                container += c;
            }
            else if(c >= '0' && c <= '9'){
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