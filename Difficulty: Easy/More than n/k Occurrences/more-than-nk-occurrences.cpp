class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        unordered_map<int,int> mp;
        for(int i:arr){
            mp[i]++;
        }
        int n=arr.size();
        int count=n/k;
        
        int ans=0;
        
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]>count){
                ans++;
                mp[arr[i]]=0;
            }
        }
        return ans;
    }
};