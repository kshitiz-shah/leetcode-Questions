class Solution {
public:
    int maxScore(string s) {

        int sum = 0;
        // prefix sum of one
        for(int  i = 0 ;i < s.size() ;i++){
            if(s[i] == '1'){
                sum++;
            }
        }
     
        int ans = 0;
    // split the string into two parts . if it is 0 (leftpart)then sum++ else sum--.
      for(int i =0 ;i< s.size()-1 ;i++){
        if(s[i] == '0') sum++;
        else sum-- ;
        ans = max(ans , sum);
      }

    return ans ;
        
    }
};