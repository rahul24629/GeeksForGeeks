class Solution {
    list<int> *l;
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int,int>>> adj(V);
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            int wt=e[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<bool>mst(V,false);
        pq.push({0,0});
        int ans=0;
        l= new list<int>[V];
        while(!pq.empty()){
            auto [d,u] =pq.top();
            pq.pop();
            if(mst[u]) continue;
            mst[u]=true;
            ans+=d;
            
            for(auto &p:adj[u]){
                int v=p.first;
                int wt=p.second;
                if(!mst[v]){
                    pq.push({wt,v});
                }
            }
        }
        return ans;
    }
};