class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector <int> smaller ;
        vector <int> bigger ;
        vector <int> equal ;

        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] < pivot)smaller.push_back(nums[i]);
            else if (nums[i] == pivot)equal.push_back(nums[i]);
            else bigger.push_back(nums[i]);

        }
        int k = 0 ;
        for(int i = 0 ; i < smaller.size();i++){
            nums[k++] = smaller[i];
        }
         for(int i = 0 ; i < equal.size();i++){
            nums[k++] = equal[i];
        }
         for(int i = 0 ; i < bigger.size();i++){
            nums[k++] = bigger[i];
        }
        return nums;
        
    }
};