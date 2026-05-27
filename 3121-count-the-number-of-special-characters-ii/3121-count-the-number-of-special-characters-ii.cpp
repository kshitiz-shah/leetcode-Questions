class Solution {
public:
    int numberOfSpecialChars(string word) {


         unordered_map<char, int> firstUpper;
        unordered_map<char, int> lastLower;
        
        for (int i = 0; i < word.size(); i++) {

            char ch = word[i];

            if (islower(ch)) {
                lastLower[ch] = i;
            }
            else {
                if (firstUpper.find(ch) == firstUpper.end()) {
                    firstUpper[ch] = i;
                }
            }
        }

        int count = 0;

        for (char c = 'a'; c <= 'z'; c++) {

            char upper = toupper(c);

            if (lastLower.find(c) != lastLower.end() &&
                firstUpper.find(upper) != firstUpper.end() &&
                lastLower[c] < firstUpper[upper]) {

                count++;
                  }
        }

        return count;
    }
};