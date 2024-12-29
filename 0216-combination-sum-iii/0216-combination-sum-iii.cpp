class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {

        vector <int> temp ;
        vector <vector<int>> ans ;
        int m=k;

        helper(1 , k,n , temp ,ans , m);
        return ans;
        
    }

 void helper(int ind , int k ,int  n, vector <int> &temp ,  vector <vector<int>> &ans ,int m){

    if( k == 0 && n == 0 && temp.size() == m ){
        ans.push_back(temp);
    }

    if(k == 0 || n < 0) return ;

    if( ind  > 9 )return;

    temp.push_back(ind);
    helper( ind + 1, k -1 , n - ind, temp ,ans,m);
    temp.pop_back();
     helper( ind + 1 , k , n , temp ,ans,m);









 }


};