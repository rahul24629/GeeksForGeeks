// User function Template for C++

class Solution {
  public:
    int toyCount(int N, int K, vector<int> arr) {
        sort(arr.begin(), arr.end()); 
        
        int ans = 0;
        
        for(int i = 0; i < N && K > 0; i++){
            if(arr[i] <= K){
                K -= arr[i];
                ans++;
            } else {
                break; 
            }
        }
        
        return ans;
    }
};
