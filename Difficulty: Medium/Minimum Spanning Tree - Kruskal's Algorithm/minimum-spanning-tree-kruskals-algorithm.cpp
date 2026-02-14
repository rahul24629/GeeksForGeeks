// User function Template for C++
class Solution {
  public:
    vector<int> par,rank;
    int find(int x){
        if(par[x]==x){
            return x;
        }
        return par[x]=find(par[x]);
    }
        
    void unionFind(int a,int b){
        int parA=find(a);
        int parB=find(b);
        
        if(parA==parB) return;
        
        if(rank[parA]==rank[parB]){
            par[parB]=parA;
            rank[parA]++;
        }else if(rank[parA]>rank[parB]){
            par[parB]=parA;
        }else{
            par[parA]=parB;
        }
    }
        
    int kruskalsMST(int V, vector<vector<int>> &edges) {
        // code here
        par.resize(V);
        rank.resize(V,0);
        
        for(int i=0;i<V;i++){
            par[i]=i;
        }
        
        sort(edges.begin(),edges.end(),[](auto &a, auto &b){
            return a[2]<b[2];
        });
        
        int minCost=0;
        int count=0;
        
        for(int i=0;i<edges.size() && count<V-1;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            
            if(find(u)!=find(v)){
                unionFind(u,v);
                minCost+=wt;
                count++;
            }
        }
        return minCost;
    }
};