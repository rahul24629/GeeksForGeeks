// User function template for C++

class Solution {
public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> res;
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        int l = 0, r = n - 1;
        
        while (l < r) {
            int sum = arr[l] + arr[r];
            
            if (sum == 0) {
                res.push_back({arr[l], arr[r]});
                
                int leftVal = arr[l];
                int rightVal = arr[r];
                
                while (l < r && arr[l] == leftVal) l++;
                while (l < r && arr[r] == rightVal) r--;
            }
            else if (sum < 0) {
                l++;
            }
            else {
                r--;
            }
        }
        
        return res;
    }
};
