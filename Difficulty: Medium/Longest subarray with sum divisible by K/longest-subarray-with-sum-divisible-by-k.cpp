// User function template for C++
class Solution {
  public:
    int longestSubarrayDivK(vector<int>& arr, int k) {
        // Complete the function
        unordered_map<int,int> map;
        map[0]=-1;
        long long sum=0;
        int maxLen=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            int rem=(sum%k +k)%k;
            // if(rem==0){
            //     maxLen=i+1;
            // }
            if(map.count(rem)){
                maxLen=max(maxLen,i-map[rem]);
            }else{
                map[rem]=i;
            }
        }
        return maxLen;
    }
};