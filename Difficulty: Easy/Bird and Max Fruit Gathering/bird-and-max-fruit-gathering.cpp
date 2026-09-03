class Solution {
  public:
    int maxFruits(vector<int>& arr, int m) {
        // code here
        int sum=0;
        
        for(int i=0;i<m;i++){
            sum+=arr[i];
        }
        int maxSum=sum;
        
        
        for(int i=m;i<arr.size()+m-1;i++){
            sum+=arr[i%arr.size()];
            sum-=arr[(i-m)%arr.size()];
            
            maxSum=max(maxSum,sum);
        }
        
        
        return maxSum;
    }
};