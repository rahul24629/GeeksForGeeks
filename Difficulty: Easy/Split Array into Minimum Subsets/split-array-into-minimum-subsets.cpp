class Solution {
  public:
    int minSubsets(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        
        int count=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]!=arr[i]-1){
                count++;
            }
        }
        
        return count+1;
    }
};
