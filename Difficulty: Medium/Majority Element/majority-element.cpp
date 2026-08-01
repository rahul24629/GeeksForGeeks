class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int el;
        int count=0;
        
        for(int i=0;i<arr.size();i++){
            if(count==0){
                el=arr[i];
                count=1;
            }else if(el==arr[i]){
                count++;
            }else{
                count--;
            }
        }
        
        int cnt1=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==el){
                cnt1++;
            }
        }
        
        if(cnt1>arr.size()/2){
            return el;
        }
        else return -1;
    }
};