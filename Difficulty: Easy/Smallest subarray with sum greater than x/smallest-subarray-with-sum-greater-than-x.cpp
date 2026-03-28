class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int i=0;
        int sum=0;
        int ans=INT_MAX;
        for(int j=0;j<arr.size();j++){
            sum+=arr[j];
            while(sum>x){
                ans=min(ans,j-i+1);
                sum-=arr[i];
                i++;
            }
            
        }
        return ans==INT_MAX?0:ans;
    }
};