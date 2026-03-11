class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        
        int st=0;
        int end=n-1;
        
        while(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid]==k) return true;
            
            if(arr[mid]<k) st=mid+1;
            else end=mid-1;
        }
        return false;
    }
};