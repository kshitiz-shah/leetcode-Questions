class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = INT_MAX ;
        int maxi  = INT_MIN ;
        unordered_map<int,int> mpp;

        for(int x : nums){
            mini = min(x, mini);
            maxi = max(x ,maxi);
            mpp[x]++;

        }
        vector <int> ans ;

        for(int i = mini ; i<= maxi ;i++){
            if(mpp.find(i) == mpp.end())ans.push_back(i);
            
        }
        return ans ;
        
    }
};