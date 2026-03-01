class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
        // Code here
        unordered_map<int,int> mp;
        for(int x:arr2){
            mp[x]++;
        }
        vector<pair<int,int>> ans;
        for(int x:arr1){
            int need=target-x;
            if(mp.find(need)!=mp.end()){
                int freq=mp[need];
                
                while(freq--){
                    ans.push_back({x,need});
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};