class Solution {
    list<int>* l;

  public:
    void dfsHelper(int src, vector<bool>& vis, stack<int>& s) {
        vis[src] = true;

        for (int v : l[src]) {
            if (!vis[v]) {
                dfsHelper(v, vis, s);
            }
        }
        s.push(src);
    }

    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<bool> vis(V, false);
        stack<int> s;
        l = new list<int>[V];

        for (auto &e : edges) {
            l[e[0]].push_back(e[1]);  
        }

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfsHelper(i, vis, s);
            }
        }

        vector<int> ans;
        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};
