// User function Template for C++

class Solution {
  public:
    int largest(int arr[], int n) {
        // code here
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
};
