class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin() ,cost.end());
        int n = cost.size() ;
        int right = cost.size()-1 ;
        int ans = 0 ;
        if(n ==2) return (cost[0] + cost[1]);
        if(n == 1)return cost[0];
        while (right >= 0){
            ans += cost[right--];
            if(right <0)break ;
            else{
                ans += cost[right--];
                right--;
            }
           
           
        }
        return ans ;


        
    }
};