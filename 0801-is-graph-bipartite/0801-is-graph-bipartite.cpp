class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {

        int V = graph.size();

        vector <int> vis(V,-1);

        for(int i=0 ;i< V ;i++){
            if(vis[i] == -1){
               if( bfs(i , vis ,graph ) == false){
                return false ;
               }
            }
        }

        
    return true ;
    }
 bool bfs(int i , vector <int> &vis ,vector<vector<int>>& graph ){
    vis[i] =0;

    queue<int> q ;
    q.push(i);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it : graph[node]){
            if(vis[it] == -1){
                vis[it] = !vis[node] ;
                q.push(it);
            }
            else if(vis[it] != -1){
                if(vis[it] == vis[node]) return false;
            }
        }
    }
    return true;
 }

};