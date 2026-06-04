class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

      int land =  solve(landStartTime , landDuration , waterStartTime , waterDuration);
      int water =  solve( waterStartTime , waterDuration , landStartTime , landDuration );

        return min(land ,water);
        
    }
    int solve(vector<int>& ride1, vector<int>& landDuration, vector<int>& ride2, vector<int>& waterDuration){
          int t_time = INT_MAX;
        for(int i = 0 ;i < ride1.size();i++){
           t_time = min(t_time ,(ride1[i] + landDuration[i]));
        }
           int w_time = INT_MAX;
         for(int i = 0 ;i < ride2.size();i++){
           w_time = min(w_time ,(waterDuration[i]+ max(t_time , ride2[i])));
        }

      return w_time ;
    }
};