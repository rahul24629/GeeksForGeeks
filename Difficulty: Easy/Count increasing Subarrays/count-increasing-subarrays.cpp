class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        int n = arr.size();
        
        int count = 0;
        int curr = 0;  
        
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i-1]) {
                curr++;       
                count += curr; 
            } 
            else {
                curr = 0;     
            }
        }
        
        return count;
    }
};
