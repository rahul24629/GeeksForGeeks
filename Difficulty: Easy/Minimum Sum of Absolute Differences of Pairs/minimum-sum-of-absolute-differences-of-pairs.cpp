// User function Template for C++

class Solution {
  public:
    long long findMinSum(vector<int> &A, vector<int> &B, int N) {
        
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        long long absDiff=0;
        
        for(int i=0;i<A.size();i++){
            
            absDiff+=abs(A[i]-B[i]);
            
        }
        
        return absDiff;
    }
};