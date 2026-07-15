class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char ,int> mpp ;
        int left = 0 ;
        int right = 0 ;
        int ans = 0 ;

        while(right < s.size()){
            mpp[s[right]]++;
            while(mpp[s[right]] > 1){
                mpp[s[left]]-- ;
                left++;
                


            }
            ans = max(ans , right - left +1 );
            right++;

        }
        return ans ;
        
    }
};