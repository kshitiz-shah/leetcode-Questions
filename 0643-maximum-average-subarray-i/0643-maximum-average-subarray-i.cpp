class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0;

        // Calculate the initial sum of the first window
        for (int i = 0; i < k; i++) {
            ans += nums[i];
        }

        double currentSum = ans; // Track the current sum of the window
        int j = 0;

        // Slide the window across the array
        for (int i = k; i < nums.size(); i++) {
            currentSum += nums[i] - nums[j]; // Add the new element and remove the old element
            ans = max(ans, currentSum);     // Update `ans` if `currentSum` is greater
            j++;
        }

        // Return the maximum average
        return ans / k;
    }
};
