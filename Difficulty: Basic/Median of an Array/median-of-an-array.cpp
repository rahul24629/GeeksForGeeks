class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        int n=arr.size();
        sort(arr.begin(),arr.end());
        if(n%2!=0){
            return arr[n/2];
        }else{
            return (arr[n/2]+arr[(n/2)-1])/2.0;
        }
    }
};