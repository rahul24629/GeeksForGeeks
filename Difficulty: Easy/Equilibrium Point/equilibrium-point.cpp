class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int totalSum=0;
        for(int i=0;i<arr.size();i++){
            totalSum+=arr[i];
        }
        int leftSum=0;
        int rightSum=0;
        for(int i=0;i<arr.size();i++){
            rightSum=totalSum-leftSum-arr[i];
            if(rightSum==leftSum){
                return i;
            }
            leftSum+=arr[i];
        }
        return -1;
    }
};