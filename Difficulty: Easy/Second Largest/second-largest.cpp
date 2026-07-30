class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi=INT_MIN;
        int secMaxi=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi){
                secMaxi=maxi;
                maxi=arr[i];
            }else if(arr[i]<maxi && secMaxi<arr[i]){
                secMaxi=arr[i];
            }
        }
        
        if(secMaxi==INT_MIN){
            return -1;
            
        }else{
            return secMaxi;
        }
    }
};