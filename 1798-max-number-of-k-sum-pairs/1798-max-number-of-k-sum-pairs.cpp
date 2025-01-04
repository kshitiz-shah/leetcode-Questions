class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        unordered_map<int ,int> freq ;
        int count =0 ;

        for(int i =0 ;i<nums.size();i++){

            int x = k- nums[i];

            if(freq[x] > 0){
                count++;
                freq[x]--;
            }
            else{
                freq[nums[i]]++;
            }


        }return count ;
        
    }
};