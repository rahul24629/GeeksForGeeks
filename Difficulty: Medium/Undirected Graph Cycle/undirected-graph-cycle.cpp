class Solution {
    list<int> *l;

public:
    bool dfsHelper(int src, int parent, vector<bool> &vis){
        vis[src] = true;
        for(int v : l[src]){
            if(!vis[v]){
                if(dfsHelper(v, src, vis))
                    return true;
            }
            else if(v != parent){
                return true;
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<bool> vis(V, false);
        l = new list<int>[V];

        for(auto &e : edges){
            l[e[0]].push_back(e[1]);
            l[e[1]].push_back(e[0]); 
        }

        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(dfsHelper(i, -1, vis))
                    return true;
            }
        }
        return false;
    }
};
