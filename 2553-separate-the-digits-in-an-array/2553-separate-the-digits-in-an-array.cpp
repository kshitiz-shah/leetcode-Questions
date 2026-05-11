class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector <int> ans ;

        for(int i = 0 ; i< nums.size() ; i++){
            string s = to_string(nums[i]);

             for(char x : s){
                int k = x - '0';
                ans.push_back(k);
             }
            
           
        }
        return ans ;
        
    }
};