class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {

       
       int ptr1 = 0 ;
       int ptr2 = 0;
       
        while(ptr1 < nums1.size() && ptr2 < nums2.size()){
            if(nums1[ptr1] == nums2[ptr2]) return nums1[ptr1];
            else if(nums1[ptr1] < nums2[ptr2]) ptr1++;
            else ptr2++;
        }
        return -1;

        
    }
};