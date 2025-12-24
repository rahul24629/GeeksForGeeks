class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        vector<int>result;
        deque<int>window;
        for(int i=0;i<arr.size();i++){
            if(!window.empty() && window.front()==i-k){
                window.pop_front();
            }
            while(!window.empty() && arr[window.back()]<arr[i]){
                window.pop_back();
            }
            window.push_back(i);
            if(i>=k-1){
                result.push_back(arr[window.front()]);
            }
        }
        return result;
    }
};