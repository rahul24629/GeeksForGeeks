class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>mp;//(sum,count);
        int ans=0;
        int sum=0;
        mp[0]=1;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(mp.count(sum-k)){
                ans+=mp[sum-k];
            }
            if(mp.count(sum)){
                mp[sum]++;
            }else{
                mp[sum]=1;
            }
        }
        return ans;
    }
};