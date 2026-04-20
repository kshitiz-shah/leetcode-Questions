class Solution {
public:
    int maxDistance(vector<int>& colors) {

        int n = colors.size();

        int left= 0 ;
        int right = n-1 ;
        int ans = -1 ;

        while(left <= right){

            if(colors[left] != colors[right]){
                ans = abs(left-right);
                break;
            }
            right-- ;

        }
        left= 0 ;
        right = n-1 ;
         while(left <= right){

            if(colors[left] != colors[right]){
                ans = max(ans ,abs(left-right));
                break;
            }
            left++ ;

        }


    return ans;
        
    }
};