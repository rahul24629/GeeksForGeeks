

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> ans;
        ans.push_back(arr[arr.size()-1]);
        int maximum=arr[arr.size()-1];
        for(int i=arr.size()-2;i>=0;i--){
            if(maximum<=arr[i]){
                ans.push_back(arr[i]);
                maximum=arr[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};