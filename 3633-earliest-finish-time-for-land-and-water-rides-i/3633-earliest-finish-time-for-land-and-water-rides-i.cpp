class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

     int land = solve(landStartTime,landDuration, waterStartTime, waterDuration);
     int water = solve(waterStartTime, waterDuration , landStartTime,landDuration);
     return min(land ,water);

           
        
    }
    int solve(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration){
        int landtime= INT_MAX;
        for(int i = 0 ;i < landDuration.size();i++){
            landtime = min(landtime , landStartTime[i] + landDuration[i]);
        }

        int watertime = INT_MAX ;
         for(int i = 0 ;i < waterDuration.size();i++){
            watertime = min(watertime , max(landtime , waterStartTime[i] ) + waterDuration[i]);
        }
        return  watertime ;


    }
 
};