class Solution {
    list<int> *l; 
    int v;
  public:
    bool dfsHelper(int src,vector<bool> &vis, vector<bool>&reactPath){
        vis[src]=true;
        reactPath[src]=true;
        
        for(int v:l[src]){
            if(!vis[v]){
                if(dfsHelper(v,vis,reactPath)){
                    return true;
                }
            }else{
                    if(reactPath[v]){
                        return true;
                    }
                }
        }
        reactPath[src]=false;
        return false;
    }
    bool isCycleDir(){
        vector<bool> vis(v,false);
        vector<bool> reactPath(v,false);
        
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(dfsHelper(i,vis,reactPath)){
                    return true;
                }
            }
        }
        return false;
        
        
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        v=V;
        
        l=new list<int>[V];
        
        for(auto &e:edges){
            l[e[0]].push_back(e[1]);
        }
        
        return isCycleDir();
    }
};