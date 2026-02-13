class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
        // code here
        vector<vector<int>> adj(V);
        for(auto &e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        queue<int> q;
        vector<int> dist(V,-1);
        dist[src]=0;
        q.push(src);
        
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            
            for(auto &a:adj[curr]){
                if(dist[a]==-1){
                    dist[a]=dist[curr]+1;
                    q.push(a);
                }
            }
        }
        return dist;
    }
};
