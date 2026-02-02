class Solution {
public:
    void dfsHelper(int u, vector<vector<int>>& adj,
                   vector<bool>& vis, vector<int>& ans) {
        vis[u] = true;
        ans.push_back(u);

        for (int v : adj[u]) {
            if (!vis[v]) {
                dfsHelper(v, adj, vis, ans);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<bool> vis(n, false);
        vector<int> ans;

        dfsHelper(0, adj, vis, ans); 
        return ans;
    }
};
