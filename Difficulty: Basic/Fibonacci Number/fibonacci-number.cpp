// User function Template for C++

int fibonacci(int n) {

    // Write your code here to calculate
    // to calculate the nth fibonacci number
    vector<int> dp(n+1,0);
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n-1];
}