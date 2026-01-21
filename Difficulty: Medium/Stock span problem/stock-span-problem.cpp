class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        vector<int> span(n, 0);
        stack<int> s;
        
        span[0] = 1;
        s.push(0); 
        
        for (int i = 1; i < n; i++) {
            int currPrice = arr[i];
            
            
            while (!s.empty() && currPrice >= arr[s.top()]) {
                s.pop();
            }
            
           
            if (s.empty()) {
                span[i] = i + 1;
            } else {
                span[i] = i - s.top();
            }
            
            s.push(i);
        }
        
        return span;
    }
};
