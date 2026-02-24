class Solution {
  public:
    bool equalPartition(vector<int>& arr) {
        // code here
        int sum=0;
        for(int x:arr){
            sum+=x;
        }
        int w=sum/2;
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(w+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=max(arr[i-1]+ dp[i-1][j-arr[i-1]], dp[i-1][j]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return sum-dp[n][w]==dp[n][w];
    }
};