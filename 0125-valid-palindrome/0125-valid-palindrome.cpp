class Solution {
public:
    bool isPalindrome(string s) {

        string  k = "";

        for(int i = 0 ; i< s.size() ;i++){
           
           if(s[i] >= 'a' && s[i] <= 'z' ||  s[i] >='0' && s[i] <= '9'  ){
            k += s[i];
           }
           else if(s[i] >= 'A' && s[i] <= 'Z'){
          char x =  tolower(s[i]);
          k += x ;

           }


        }
        

        int left = 0 ;
        int right = k.size()-1 ;

        while(left <= right){
            if(k[left] != k[right])return false;
            left++;
            right-- ;
        }
        return true ;
        
    }
};