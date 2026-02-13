// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        vector<pair<int,int>>adj[V];
        for(auto &e:edges){
            adj[e[0]].push_back({e[1],e[2]});
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int>dist(V,INT_MAX);
        dist[0]=0;
        pq.push({0,0});
        while(!pq.empty()){
            auto [d,u]=pq.top();
            pq.pop();
            
            if(d>dist[u]) continue;
            
            for(auto it:adj[u]){
                int v=it.first;
                int w=it.second;
                
                if(dist[v]> w+dist[u]){
                    dist[v]=dist[u]+w;
                    pq.push({dist[v],v});
                }
            }
        }
        for(int i=0;i<dist.size();i++){
            if(dist[i]==INT_MAX){
                dist[i]=-1;
            }
        }
        return dist;
    }
};
