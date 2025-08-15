class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map < char , int > freq ;
        int result = 0;

        for(int i = 0 ;i< s.size();i++){
            freq[s[i]]++;

        }
        bool center = false;
        for( auto x : freq){
            if((x.second % 2) == 0){
                result += x.second ;
            }
            else{
                result +=  x.second -1 ;
               center =true ;
            
            }
        }

        if(center == true) return result +1 ;

        return  result ;

        
     

    }
};