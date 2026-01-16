class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int max=arr[0];
        int min=arr[0];
        for(int i=1;i<arr.size();i++){
            if(max>arr[i]) max=arr[i];
            if(min<arr[i]) min=arr[i];
        }
        return {max,min};
    }
};