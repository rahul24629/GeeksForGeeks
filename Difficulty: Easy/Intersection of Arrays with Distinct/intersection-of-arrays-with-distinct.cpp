class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        // code  here
        unordered_set<int> map;
        for(int x:a){
            map.insert(x);
        }
        int ans=0;
        for(int el:b){
            if(map.find(el)!=map.end()){
                ans++;
                map.erase(el);
            }
        }
        return ans;
    }
};