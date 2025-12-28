class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int> map;
        map[0]=-1;
        int ans=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(map.count(sum-k)){
                ans=max(ans,i-map[sum-k]);
            }
            if(!map.count(sum)){
                map[sum]=i;
            }
        }
        return ans;
        
    }
};