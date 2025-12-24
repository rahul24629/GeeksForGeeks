class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        vector<int> result;
        deque<int> window;
        for(int i=0;i<arr.size();i++){
            //if element is out of window
            if(!window.empty() && window.front()==i-k){
                window.pop_front();
            }
            if(arr[i]<0){
                window.push_back(i);
            }
            
            if(i>=k-1){
                if(window.empty()){
                    result.push_back(0);
                }else{
                    result.push_back(arr[window.front()]);
                }
            }
        }
        return result;
    }
};