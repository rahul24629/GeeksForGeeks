class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        int count = 0;
        int maxi = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= maxi){
                count++;
            }
            maxi = max(maxi, arr[i]);
        }
        return count;
    }
};