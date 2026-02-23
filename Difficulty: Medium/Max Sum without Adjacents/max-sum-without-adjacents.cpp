// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr, int n) {
        // code here
        vector<int> dp(n);
        dp[0]=arr[0];
        dp[1]=max(arr[0],arr[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(arr[i]+dp[i-2], dp[i-1]);
        }
        return dp[n-1];
    }
};