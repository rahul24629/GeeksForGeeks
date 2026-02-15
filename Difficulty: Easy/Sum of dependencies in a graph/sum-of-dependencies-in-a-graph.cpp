//Back-end complete function Template for C++

class Solution {
  public:
    // Function to calculate the sum of dependencies.
    int sumOfDependencies(int V, vector<vector<int>> &edges) {
    vector<int> adj[V];

    for(auto &e : edges){
        adj[e[0]].push_back(e[1]);
    }

    int sum = 0;
    for(int i = 0; i < V; i++){
        sum += adj[i].size(); 
    }

    return sum;
}

};