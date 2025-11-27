// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        
        return arr[arr.size()-1]*arr[arr.size()-2];
    }
};