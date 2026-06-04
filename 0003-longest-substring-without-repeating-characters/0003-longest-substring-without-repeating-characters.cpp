class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0 ;
        int right = 0 ;
        int ans= 0 ;
        unordered_map <char ,int> mpp ;

        for(int right = 0 ; right < s.size() ;right++){

            if(mpp.find(s[right]) != mpp.end()){
                
                while(mpp.find(s[right]) != mpp.end()){
                    mpp.erase(s[left]);
                    left++;
                }

            }
            mpp[s[right]]++ ;
            ans = max(ans ,right - left +1);



        }

        return ans ;




      
        
    }
};