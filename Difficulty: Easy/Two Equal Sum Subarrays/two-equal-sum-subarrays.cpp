class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int totalSum=0;
        for(int a:arr){
            totalSum+=a;
        }
        if(totalSum%2!=0) return false;
        int targetSum=totalSum/2;
        
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==targetSum){
                return true;
            }else if(sum>targetSum){
                break;
            }
        }
        return false;
    }
};
