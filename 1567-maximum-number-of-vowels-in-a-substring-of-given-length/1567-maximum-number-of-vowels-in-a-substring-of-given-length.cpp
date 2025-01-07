class Solution {
public:
    int maxVowels(string s, int k) {

        long long ans =0;

       for(int i = 0 ;i<k ;i++){

        if(s[i] == 'a' ||  s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
            ans++;
        }
       }

        long long tempans =ans;

        for(int i = k ;i<s.size() ;i++){
        if(s[i] == 'a' ||  s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
           tempans++;

        }
       if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u') {
                tempans--;
            }
        ans= max(tempans ,ans);



       }
       return ans;
        
    }
};