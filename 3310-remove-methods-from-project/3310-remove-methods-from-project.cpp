class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
         
         vector<vector <int>> adj(n ) ;

        for(auto &x :invocations ){
            int u = x[0];
            int v = x[1];
            adj[u].push_back(v);
        }

        vector <int> vis(n , 0);
        queue <int> q ;

        q.push(k);

        while(!q.empty()){

            int node = q.front();
            q.pop();

            vis[node] =1 ;

            for(auto x : adj[node]){
                if(vis[x]== 0){
                    q.push(x);
                    vis[x] = 1;
                }
            }
        }

        bool isaffecting = false ;

     
        for (const auto& inv : invocations) {
            int u = inv[0];
            int v = inv[1];
            // If u is NOT suspicious (0) but v IS suspicious (1)
            if (vis[u] == 0 && vis[v] == 1) {
                isaffecting = true;
                break;
            }
        }
       vector <int> ans ;
        if(isaffecting == true){
            for(int i =0 ;i < n; i++){
                ans.push_back(i);
            }
             return ans ;

        }
       

        for(int i =0 ;i< n; i++){
            if(vis[i] == 0)ans.push_back(i);
        }
        return ans ;





    }
};