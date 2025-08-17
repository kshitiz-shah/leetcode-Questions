class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int right = 0;
        int left = 0;
        int ans = 0;

        unordered_map<char, int> mpp;

        while (right < s.size()) {
            if (mpp.find(s[right]) != mpp.end()) {
                // move left only if duplicate inside current window
                left = max(left, mpp[s[right]] + 1);
            }

            mpp[s[right]] = right;           
            ans = max(ans, right - left + 1); 
            right++;
        }
        return ans;
        
    }
};