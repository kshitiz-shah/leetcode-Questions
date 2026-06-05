class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map <int ,int> mpp ;

        for(auto x :nums){
            mpp[x]++;
        }

        priority_queue <pair <int ,int>>pq ;

        for(auto x :mpp){
            pq.push({x.second , x.first});
        }
        vector <int> ans ;

        while(!pq.empty() && k > 0){
           int x = pq.top().second;
           ans.push_back(x);
            pq.pop();
            k--;
        }
        return ans ;
        
    }
};