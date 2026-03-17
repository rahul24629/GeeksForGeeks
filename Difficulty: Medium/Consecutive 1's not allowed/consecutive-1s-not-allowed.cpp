// User function template for C++
class Solution {
  public:
    // #define ll long long
    int countStrings(int n) {
        // code here
        int dp[n];
        dp[0]=1;
        dp[1]=2;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};