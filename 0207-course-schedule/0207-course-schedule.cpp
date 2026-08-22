class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses) ;
        int V = numCourses ;

        for(int i =0 ;i < prerequisites.size() ;i++){
            int u =  prerequisites[i][0];
            int v=  prerequisites[i][1];

            adj[u].push_back(v);
        }

      
        vector <int> vis(V, 0);
        vector <int>pathsum(V, 0);
        for(int i =0 ;i < V ;i++){

            if(vis[i] ==0){
             if  ( bfs(i , adj ,vis, pathsum) ) return false;
            }

        }


    return true;
        
    }

    bool bfs(int node , vector<vector<int>> &adj ,vector <int> &vis  , vector <int> &pathsum){

        vis[node] =1 ;
        pathsum[node] =1 ;

        for(auto x : adj[node]){
            if(vis[x] == 0){
              if(  bfs(x , adj , vis , pathsum) == true) return true ;
            }else{
                if(pathsum[x] == 1)return true ;
            }
        }
        pathsum[node] = 0;
        return false ;
       
    }
};