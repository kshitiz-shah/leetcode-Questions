class Solution {
public:
    int characterReplacement(string s, int k) {
      int maxlen = 0 ;
      int maxfreq = 0 ;

      int left = 0 ;
      int right = 0 ;
      unordered_map <char , int> mpp ;


      while(right < s.size()){

        mpp[s[right]]++;

        maxfreq = max(maxfreq , mpp[s[right]]);

        if(right - left + 1 - maxfreq > k){
            mpp[s[left]]-- ;
            left++;
        }

        maxlen = max(maxlen , right -left +1);
        right++ ;

      }
      return maxlen ;

        
    }
};