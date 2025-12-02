class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maximum=INT_MIN;
        for(int i=0;i<arr.size();i++){
            maximum=max(arr[i],maximum);
        }
        return maximum;
    }
};
