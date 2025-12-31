class Solution {

  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        // Your code goes here
        unordered_map<int,int> mp;
        for(int x:b){
            mp[x]++;
        }
        vector<int> ans;
        for(int x: a){
            if(mp.count(x)==0) ans.push_back(x);
        }
        return ans;
    }
};
