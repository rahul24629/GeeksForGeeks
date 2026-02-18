class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        vector<vector<int>> dp(n+1,vector<int> (W+1,0));
        for(int i=1;i<n+1;i++){
            for(int j=1;j<W+1;j++){
                int itWt=wt[i-1];
                int itVal=val[i-1];
                if(itWt<=j){
                    dp[i][j]=max(dp[i-1][j-itWt]+itVal, dp[i-1][j]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][W];
    }
};