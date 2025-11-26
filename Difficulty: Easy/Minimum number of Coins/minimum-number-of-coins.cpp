class Solution {
  public:
    int findMin(int n) {
        int coins[] = {10, 5, 2, 1};
        int v = n;
        int ans = 0;

        
        for (int i = 0; i < 4; i++) {
            if (v >= coins[i]) {
                ans += v / coins[i];
                v = v % coins[i];
            }
        }
        return ans;
    }
};
