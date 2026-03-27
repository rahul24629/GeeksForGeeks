class Solution {
  public:
    int findSum(int n) {
        // code here
        int ans=0;
        for(int i=0;i<=n;i++){
            ans+=i;
        }
        return ans;
    }
};
