class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int maximum=INT_MIN;
        
        vector<int> ans;
        
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>=maximum){
                ans.push_back(arr[i]);
                maximum=arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};