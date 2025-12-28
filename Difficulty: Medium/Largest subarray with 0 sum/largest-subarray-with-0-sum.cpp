class Solution {
  public:
    int maxLength(vector<int>& arr) {
        unordered_map<int,int> mp;
        mp[0] = -1;
        int sum = 0;
        int ans = 0;
        for(int j = 0; j < arr.size(); j++){
            sum += arr[j];
            if(mp.count(sum)){
                ans = max(ans, j - mp[sum]);
            } else {
                mp[sum] = j;
            }
        }
        return ans;
    }
};
