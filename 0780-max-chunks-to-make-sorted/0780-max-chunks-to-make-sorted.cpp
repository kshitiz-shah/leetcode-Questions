class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count = 0; 
        int maxSeen = 0; 

        for (int i = 0; i < arr.size(); i++) {
            maxSeen = max(maxSeen, arr[i]); 
            if (maxSeen == i) {
                count++; 
            }
        }

        return count;
    }
};
