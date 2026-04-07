class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
    //(x2 - x1)*(y3 - y1) != (y2 - y1)*(x3 - x1)
        if(((points[1][0] - points[0][0]) * (points[2][1] - points[0][1]) ) != ((points[1][1] - points[0][1]) * (points[2][0] - points[0][0]))) {
            return true ;
        }

        return false ;
        
    }
};