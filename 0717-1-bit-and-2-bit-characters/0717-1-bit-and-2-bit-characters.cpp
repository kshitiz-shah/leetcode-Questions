class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
       int i = 0;
        int n = bits.size();
        
        while (i < n - 1) {   // stop before last bit
            if (bits[i] == 1)
                i += 2;      // skip 2 bits
            else
                i += 1;      // skip 1 bit
        }
        
        // If we are exactly at last index → one-bit character
        return i == n - 1;
    }
};