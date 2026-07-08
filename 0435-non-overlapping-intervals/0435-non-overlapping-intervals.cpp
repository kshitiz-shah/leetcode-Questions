class Solution {
public:
   static bool comperator( vector<int>& a , vector<int>& b){
     return a[1] < b[1] ;
   }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin() , intervals.end() , comperator);


        int count = 0 ;
        int endtime = intervals[0][1];

        for(int i = 1 ; i< intervals.size() ;i++){
            if(intervals[i][0]  < endtime) count++;
            else{
                endtime = intervals[i][1];
            }
        }


return count ;
        
    }
};