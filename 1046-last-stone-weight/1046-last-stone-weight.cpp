class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq ;

        for(int i =0 ;i < stones.size(); i++){
            pq.push(stones[i]);
        }
        int ans = 0 ;
        while(pq.size() > 1){

            int x = pq.top();
            pq.pop();

            int y = pq.top();
            pq.pop();

            if(pq.empty())return x-y ;

           else{
            if(x-y > 0)pq.push(x-y);
           }

        }
        if(pq.size() ==1)return pq.top();
        return 0 ;
        
    }
};