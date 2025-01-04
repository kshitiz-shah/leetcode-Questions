class Solution {
public:
    int maxArea(vector<int>& height) {

        int  ptr1 = 0 ;
        int ptr2 = height.size()-1;
        int maxwater = -1;


        while(ptr1 < ptr2){
            int distance  = ptr2 - ptr1 ;
            int  minwater =  min (height[ptr1] , height[ptr2]) ;
            long long watercollected = minwater * distance ;

            if(watercollected  > maxwater){
                maxwater = watercollected;

            }
            if(height[ptr1] >= height[ptr2] ){
                ptr2--;
            }
            else{
                ptr1++;
            }

        }
        return maxwater;
    }
};