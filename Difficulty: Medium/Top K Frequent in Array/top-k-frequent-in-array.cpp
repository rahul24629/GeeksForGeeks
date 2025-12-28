class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int el:arr){
            mp[el]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto &p:mp){
            pq.push({p.second,p.first});
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
