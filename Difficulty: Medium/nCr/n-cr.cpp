class Solution {
  public:
    int nCr(int n, int r) {
        // code here
        vector<vector<int>> dp(n+1,vector<int>(r+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=r;j++){
                if(i>j){
                    dp[i][j]=dp[i-1][j-1]+ dp[i-1][j];
                }else if(i<j){
                    dp[i][j]=0;
                }else{
                    dp[i][j]=1;
                }
            }
        }
        return dp[n][r];
    }
};