class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int min_ind = 0 ;
        int max_ind = 0 ;
        int n =nums.size();
        int mini = nums[0];
        int maxi = nums[0];

        for(int i = 0 ;i < nums.size() ;i++){
            if( mini < nums[i]){
                mini = nums[i];
                min_ind = i ;

            }
            if(maxi > nums[i]){
                maxi = nums[i];
                max_ind = i ;
            }

        }
        cout<<min_ind<<endl ;
        cout<<max_ind ;
        int ans = INT_MAX ;
        if(min_ind >= max_ind){
            ans = min(n - max_ind , ans);
            ans = min( min_ind +1 , ans);
            ans = min( (max_ind + 1 )+ (n- min_ind) , ans);

        }else{
            ans = min(n- min_ind , ans);
            ans = min( max_ind +1 , ans);
            ans = min( (min_ind + 1) + (n- max_ind) , ans);


        }
        return ans ;
        
    }
};