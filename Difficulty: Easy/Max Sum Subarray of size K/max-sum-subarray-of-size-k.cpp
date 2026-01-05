class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        long long sum=0;
        long long mx= INT_MIN;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        mx=sum;
        for(int i=k;i<arr.size();i++){
            sum+=arr[i]-arr[i-k];
            mx=max(sum,mx);
        }
        return mx;
        
    }
};