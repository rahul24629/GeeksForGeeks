class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n=adj.size();
        vector<bool>vis(n,false);
        vector<int> ans;
        queue<int>Q;
        Q.push(0);
        vis[0]=true;
        while(Q.size()>0){
            int u=Q.front();
            Q.pop();
            ans.push_back(u);
            for(int v:adj[u]){
                if(!vis[v]){
                    vis[v]=true;
                    Q.push(v);
                }
            }
        }
        return ans;
        
    }
};