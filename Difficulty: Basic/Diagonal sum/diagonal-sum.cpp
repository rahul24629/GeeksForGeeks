// User function Template for C++

class Solution {
  public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        // Code here
        int n= matrix.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            ans+=matrix[i][i];
            ans+=matrix[i][n-i-1];
        }
        
        return ans;
    }
};