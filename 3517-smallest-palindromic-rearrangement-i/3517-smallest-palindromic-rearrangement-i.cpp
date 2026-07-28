class Solution {
public:
    string smallestPalindrome(string s) {

       map <char , int> mpp ;
       
       for(char x : s){
        mpp[x]++ ;
       }
       int i = 0;
       int j = s.size()-1;
     
        for( auto &a: mpp){
        while(a.second > 0 ){
            if(a.second != 1){
                s[i++] = a.first ;
            s[j--] = a.first ;
            a.second -= 2 ;

            }else{
               s[s.size() /2] = a.first ;
               a.second -=1 ; 
            }
            

        }
      }
       
       return s ;

        
    }
};