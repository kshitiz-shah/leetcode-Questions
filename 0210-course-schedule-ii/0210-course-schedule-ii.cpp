class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& arr) {
        vector <int> indegree(N, 0);

        vector <vector <int>> adj(N) ;

        for(int i = 0 ; i < arr.size();i++){
            int u = arr[i][0];
            int v = arr[i][1];
            adj[u].push_back(v);
        }

  

        for(int i = 0 ;i <N; i++ ){

            for(int x: adj[i]){
                indegree[x]++;
            }
        }
        vector <int> ans ;
        queue <int> q ;
        for(int i = 0; i < N; i++){
            if(indegree[i] == 0){
                q.push(i);
                ans.push_back(i);
            }
        }

        while(!q.empty()){

            int node = q.front();
            q.pop();

            for( int x: adj[node]){
                indegree[x]-- ;
                if(indegree[x] ==0 ){
                    q.push(x);
                    ans.push_back(x);
                }
            }

        }
        reverse(ans.begin(),ans.end());

      vector <int> temp ;
        if(ans.size() != N)return temp;
        return ans ;



        
        
    }
};