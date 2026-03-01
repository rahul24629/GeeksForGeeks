class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(arr[0]==1){
            return 0;
        }
        if(arr[n-1]==0){
            return -1;
        }
        int st=0;
        int end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid]==0){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return st;
    }
};