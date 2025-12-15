class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> pq ;
     for (int x : stones) {
    pq.push(x);
}
        while( pq.size() > 1){
            int x =pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            if(x > y){
                int k = x-y ;
                pq.push(k);
            }
            else if( y > x){
                 int k = y-x ;
                pq.push(k);

            }
            if(pq.empty())return 0;
            
            
        }
        return pq.top();
    }
};