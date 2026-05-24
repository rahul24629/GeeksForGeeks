class Solution {
  public:
    int coin(vector<int>& arr) {
        // code here
        int st=0;
        int end=arr.size()-1;
        
        while(st<=end){
            if(arr[st]==arr[end]){
                st++;
            }else{
                if(arr[st]<arr[end]){
                    end--;
                }else{
                    st++;
                }
            }
        }
        return arr[end];
    }
};