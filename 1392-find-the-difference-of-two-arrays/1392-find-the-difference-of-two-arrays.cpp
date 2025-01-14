class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<vector<int>> ans(2);

        // Find elements in set1 but not in set2
        for (int num : set1) {
            if (set2.find(num) == set2.end()) {
                ans[0].push_back(num);
            }
        }

        // Find elements in set2 but not in set1
        for (int num : set2) {
            if (set1.find(num) == set1.end()) {
                ans[1].push_back(num);
            }
        }

        return ans;
    }
};
