// User function Template for C++

class Solution {
  public:
    bool canReach(vector<int> &arr) {
        int maxReach = 0;
        int n = arr.size();
        int i = 0;

        while(i < n) {
            if(i > maxReach) return false;

            maxReach = max(maxReach, i + arr[i]);

            if(maxReach >= n - 1) return true;
            i++; 
        }

        return true;
    }
};