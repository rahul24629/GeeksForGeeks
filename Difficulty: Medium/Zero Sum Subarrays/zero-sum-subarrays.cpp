class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        unordered_map<int,int> mp; //sum,count
        mp[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(mp.count(sum)){
                ans+=mp[sum];
                mp[sum]++;
            }else{
                mp[sum]=1;
            }
        }
        return ans;
    }
};