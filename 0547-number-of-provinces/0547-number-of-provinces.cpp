class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();

        vector <vector<int>> adjls(V);

        for(int i=0;i< V;i++){
            for(int j=0;j<V;j++){
                if( isConnected[i][j] == 1 && i != j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
         vector <int> vis(V , 0);
         int count =0;

         for(int i=0;i< V;i++){
            if(vis[i] == 0){
                count++;
                bfs(i,vis ,adjls);

            }
         }
        return count;
    }

private:
    void bfs(int node , vector<int> &vis , vector<vector<int>> adjls){
         
         vis[node] = 1;

         queue <int> q;

         q.push(node);

         while(!q.empty()){
            int i = q.front();
            q.pop();

            for(auto neighbour : adjls[i]){
                if(vis[neighbour] != 1){
                    vis[neighbour] =1;
                    q.push(neighbour);
                }
            }

         }
    }
};