// User function template for C++

class Solution {
  public:
    int maxWater(vector<int>& arr) {
        int n = arr.size();
        if(n == 0) return 0;

        vector<int> leftMax(n);
        vector<int> rightMax(n);

        leftMax[0] = arr[0];
        rightMax[n-1] = arr[n-1];

       
        for(int i = 1; i < n; i++){
            leftMax[i] = max(leftMax[i-1], arr[i]);
        }

        
        for(int i = n-2; i >= 0; i--){
            rightMax[i] = max(rightMax[i+1], arr[i]);
        }

        int water = 0;

        for(int i = 0; i < n; i++){
            water += min(leftMax[i], rightMax[i]) - arr[i];
        }

        return water;
    }
};