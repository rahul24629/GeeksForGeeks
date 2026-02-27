class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        
        int m = arr1.size();
        int n = arr2.size();
        
        int i = 0;
        int j = n - 1;
        
        int bestDiff = INT_MAX;
        int first = -1, second = -1;
        
        while (i < m && j >= 0) {
            
            int sum = arr1[i] + arr2[j];
            int diff = abs(sum - x);
            
            // Update best pair
            if (diff < bestDiff) {
                bestDiff = diff;
                first = arr1[i];
                second = arr2[j];
            }
            
            if (sum > x) {
                j--;
            } 
            else if (sum < x) {
                i++;
            } 
            else {
                break;
            }
        }
        
        return {first, second};
    }
};