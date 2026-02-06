class Solution {
    list <int>*l;
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<int>color(V,-1);
        queue<int>q;
        l=new list<int>[V];
        
        for(auto &e:edges){
            l[e[0]].push_back(e[1]);
        }
        
        for(int i=0;i<V;i++){
            if(color[i]==-1){
                q.push(i);
                color[i]=0;
            }
            while(!q.empty()){
                int curr=q.front();
                q.pop();
                for(int v:l[curr]){
                    if(color[v]==-1){
                        color[v]=!color[curr];
                        q.push(v);
                    }else{
                        if(color[v]==color[curr]){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
        
    }
};