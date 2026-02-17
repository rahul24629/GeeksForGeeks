class Solution {
  public:
    long long int fibSum(long long int N) {
        // code here
        const long long MOD = 1000000007;
        vector<long long>fib(N+1,0);
        fib[0]=0;
        fib[1]=1;
        long long sum=(fib[0]+fib[1])%MOD;
        for(int i=2;i<=N;i++){
            fib[i]=(fib[i-1]+fib[i-2])%MOD;
            sum=(sum+fib[i])%MOD;
        }
        return sum;
    }
};