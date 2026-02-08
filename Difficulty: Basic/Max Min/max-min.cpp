// User function Template for C++

class Solution {
  public:
    int findSum(int A[], int N) {
        // code here.
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<N;i++){
            maxi=max(maxi,A[i]);
            mini=min(mini,A[i]);
        }
        return maxi+mini;
    }
};