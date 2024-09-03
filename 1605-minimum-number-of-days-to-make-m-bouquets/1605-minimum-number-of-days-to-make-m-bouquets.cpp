class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
         long long val = m * 1ll * k * 1ll; 
        if ( val > nums.size()) return -1;

        // Find the minimum and maximum bloom days in the array
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        // Initialize answer to -1
        int ans = -1;

        // Binary search approach to find the minimum number of days
        while (mini <= maxi) {
             int mid = mini +(  maxi - mini ) /2;

            if (canMakeBouquets(nums, m, k, mid)) {  // Check if we can make m bouquets in 'mid' days
                ans = mid;
                maxi = mid - 1;  // Try to find a smaller number of days
            } else {
                mini = mid + 1;  // Increase the number of days
            }
        }

        return ans;
    }

private:
    // Function to check if m bouquets can be made with k flowers each in 'days' days
    bool canMakeBouquets(vector<int>& nums, int m, int k, int days) {
        int count = 0;  // Count of consecutive flowers that can bloom
        int bouquets = 0;  // Number of bouquets made

        // Loop through all flower bloom days
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] <= days) {  // If the flower can bloom by 'days'
                count++;  // Increment the count of flowers for a bouquet
                if (count == k) {  // If we have enough flowers for one bouquet
                    bouquets++;  // Make a bouquet
                    count = 0;  // Reset count for the next bouquet
                }
            } else {
                count = 0;  // Reset count if a flower cannot bloom by 'days'
            }

            // If we have made the required number of bouquets
            if (bouquets >= m) return true;
        }

        return false;
    }
    
};