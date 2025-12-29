class Solution {
  public:
    // Function to count the number of subarrays with a sum that is divisible by K
    int subCount(vector<int>& arr, int k) {
        // Your code goes here
        unordered_map<int,int> mp;
        mp[0]=1;
        long long sum=0;
        long long ans=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            long long rem= (sum%k +k)%k;
            ans+=mp[rem];
            mp[rem]++;
        }
        return ans;
    }
};
