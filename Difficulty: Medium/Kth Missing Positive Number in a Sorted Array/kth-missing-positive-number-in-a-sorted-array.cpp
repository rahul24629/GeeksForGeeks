class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        int last=arr[arr.size()-1];
        int j=0;
        
        for(int i=1;i<=last;i++){
            if(arr[j]==i){
                j++;
            }else{
                k--;
            }
            if(k==0) return i;
            
        }
        while(k!=0){
            last++;
            k--;
        }
        return last;
    }
};