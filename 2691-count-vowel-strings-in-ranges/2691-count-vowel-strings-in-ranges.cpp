class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> prefix(words.size(), 0);
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        vector<int> ans(queries.size(), 0);

        // Build the prefix array
        for (int i = 0; i < words.size(); i++) {
            if (vowels.find(words[i][0]) != vowels.end() && 
                vowels.find(words[i].back()) != vowels.end()) {
                prefix[i] = 1;
            }
            if (i > 0) {
                prefix[i] += prefix[i - 1];
            }
        }

        // Answer the queries
        for (int i = 0; i < queries.size(); i++) {
            int start = queries[i][0];
            int end = queries[i][1];
            if (start == 0) {
                ans[i] = prefix[end];
            } else {
                ans[i] = prefix[end] - prefix[start - 1];
            }
        }

        return ans;
    }
};
