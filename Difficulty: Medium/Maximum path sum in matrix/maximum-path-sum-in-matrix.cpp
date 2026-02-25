// User function Template for C++

class Solution {
  public:
    int maximumPath(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        if(n==1 && m==1) return mat[0][0];
        int ans = INT_MIN;
        
        vector<vector<int>> dp(n, vector<int>(m, 0));
        
       
        for(int j = 0; j < m; j++){
            dp[0][j] = mat[0][j];
            ans=max(ans,dp[0][j]);
        }
        
        
        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                
                if(j == 0){
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j+1]) + mat[i][j];
                }
                else if(j == m-1){   
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + mat[i][j];
                }
                else{
                    dp[i][j] = max({dp[i-1][j], dp[i-1][j-1], dp[i-1][j+1]}) + mat[i][j];
                }
                
                ans = max(ans, dp[i][j]);
            }
        }
        return ans;
    }
};