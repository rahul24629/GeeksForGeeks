class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int a=-1;
        int b=-1;
        int ans=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                a=i;
                if(b!=-1){
                    ans=min(ans,abs(a-b));
                }
            }else if(arr[i]==y){
                b=i;
                if(a!=-1){
                    ans=min(ans,abs(a-b));
                }
            }
        }
        if(a==-1 || b==-1) return -1;
        else return ans;
    }
};