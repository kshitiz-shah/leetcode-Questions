class Solution {
public:
    int missingInteger(vector<int>& nums) {

      int count = nums[0] ;
     

      for(int i = 1; i< nums.size();i++){
        if(nums[i] == nums[i-1] +1)count += nums[i];
        else break ;

      }
      set<int>st ;
       for(int i = 0 ;i<nums.size();i++){
        st.insert(nums[i]);
       }
       for(int i =count ;i <= 50*50 ;i++){
       if( st.find(i) == st.end()) return i ;
       }
       return -1 ;
        
    }
};