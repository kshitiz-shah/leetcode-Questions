class Solution {
public:
    string longestPalindrome(string s) {

        int k = s.size();
        int maxLen = 0;
        string ans = "";

        for (int i = 0; i < k; i++) {

            // 🔹 Odd length palindrome
            int left = i, right = i;
            while (left >= 0 && right < k && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    maxLen = right - left + 1;
                    ans = s.substr(left, maxLen);
                }
                left--;
                right++;
            }

            // 🔹 Even length palindrome
            left = i;
            right = i + 1;
            while (left >= 0 && right < k && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    maxLen = right - left + 1;
                    ans = s.substr(left, maxLen);
                }
                left--;
                right++;
            }
        }

        return ans;
    }
};
