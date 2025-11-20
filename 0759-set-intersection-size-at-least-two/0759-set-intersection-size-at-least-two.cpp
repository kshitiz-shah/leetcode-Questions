class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(),
             [](auto &a, auto &b){
                 if(a[1] == b[1]) return a[0] > b[0];
                 return a[1] < b[1];
             });

        vector<int> pick;

        for (auto &in : intervals) {
            int l = in[0], r = in[1];

            int cnt = 0;
            // count how many of last 2 picked points lie in the interval
            for (int i = pick.size() - 1; i >= 0 && cnt < 2; i--) {
                if (pick[i] >= l && pick[i] <= r) cnt++;
            }

            // need 2 points
            if (cnt == 0) {
                pick.push_back(r - 1);
                pick.push_back(r);
            }
            // need 1 more point
            else if (cnt == 1) {
                pick.push_back(r);
            }
        }

        return pick.size();
    }
};
