class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        
        vector<int> temp;
        
        // First store all positive elements
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= 0){
                temp.push_back(arr[i]);
            }
        }
        
        // Then store all negative elements
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] < 0){
                temp.push_back(arr[i]);
            }
        }
        
        // Copy back to original array
        for(int i = 0; i < arr.size(); i++){
            arr[i] = temp[i];
        }
    }
};