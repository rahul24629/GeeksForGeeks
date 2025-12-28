class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int,int> map;
        for(int el:a){
            map[el]++;
        }
        for(int p:b){
            if(map[p]==0){
                return false;
            }
            map[p]--;
        }
        return true;
    }
};