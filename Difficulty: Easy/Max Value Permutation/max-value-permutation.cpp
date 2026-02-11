class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        const int MOD = 1e9 + 7;
        sort(arr.begin(),arr.end());
        long long ans=0;
        for(int i=0;i<arr.size();i++){
            ans=(ans+((1LL*i*arr[i])%MOD))%MOD;
        }
        return ans;
    }
};