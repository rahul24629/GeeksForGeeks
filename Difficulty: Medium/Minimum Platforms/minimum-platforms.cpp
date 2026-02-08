class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        
        int i=0;
        int j=0;
        int platform=0;
        int ans=0;
        
        while(i<arr.size() && j<dep.size()){
            if(arr[i]<=dep[j]){
                i++;
                platform++;
                ans=max(ans,platform);
            }else{
                j++;
                platform--;
            }
        }
        return ans;
    }
};
