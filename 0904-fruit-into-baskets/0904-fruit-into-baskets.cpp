class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mpp;

        int left = 0 ;
        int right = 0 ;
        int ans = 0 ;

        while(right < fruits.size()){
            mpp[fruits[right]]++;

            while(mpp.size() >2){
                mpp[fruits[left]]-- ;
            
                if(mpp[fruits[left]]==0){
                    mpp.erase(fruits[left]);

                }
                left++;
            }
            if(mpp.size() <= 2){
                ans = max(ans ,right -left +1);
                
            }
            right++;

            


        }
        return ans ;
        
    }
};