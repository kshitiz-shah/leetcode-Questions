class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map < char , int > freq ;
        int oddfreq = 0;

        for(int i = 0 ;i< s.size();i++){
            freq[s[i]]++;

            if((freq[s[i]] % 2) == 1){
                oddfreq++;
            }
           else{
            oddfreq-- ;
           }


        }
        if(oddfreq > 0){
            return s.size()- oddfreq + 1 ;
        }
        else{
            return s.size();
        }
       
     

    }
};