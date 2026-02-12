class Solution {
public:
    int minCost(vector<vector<int>>& houses) {
        int V = houses.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<bool> mst(V, false);
        vector<int> dist(V,INT_MAX);
        
        pq.push({0, 0});
        int minCost = 0;

        while(!pq.empty()){
            auto [wt, u] = pq.top();
            pq.pop();

            if(mst[u]) continue;

            mst[u] = true;
            minCost += wt;

            for(int v = 0; v < V; v++){
                if(!mst[v]){
                    int w = abs(houses[u][0] - houses[v][0]) + abs(houses[u][1] - houses[v][1]);
                    if(w<dist[v]){
                        dist[v]=w;
                        pq.push({w, v});
                    }
                }
            }
        }
        return minCost;
    }
};
