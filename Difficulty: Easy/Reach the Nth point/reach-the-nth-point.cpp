class Solution {
  public:
    int nthPoint(int n) {
        const int MOD = 1e9 + 7;
        if(n == 0) return 1;

        vector<long long> dp(n+1);
        dp[0] = dp[1] = 1;

        for(int i = 2; i <= n; i++){
            dp[i] = (dp[i-1] + dp[i-2]) % MOD;
        }

        return dp[n];
    }
};