class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int start=0;
        int end=arr.size()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[end]){
                start=mid+1;
            }else{
                end=mid;
            }
        }
        return start;
    }
};
