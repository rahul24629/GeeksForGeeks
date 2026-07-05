class Solution {
  public:
    int maxPathSum(vector<int> &a, vector<int> &b) {
        // Code here
        int n=a.size();
        int m=b.size();
        
        int aSum=0;
        int bSum=0;
        
        int i=0;
        int j=0;
        
        int ans=0;
        
        while(i<n && j<m){
            if(a[i]<b[j]){
                aSum+=a[i];
                i++;
            }else if(a[i]>b[j]){
                bSum+=b[j];
                j++;
            }else{
                ans+=max(aSum,bSum)+a[i];
                aSum=bSum=0;
                i++;
                j++;
            }
        }
        
        while(i<n){
            aSum+=a[i];
            i++;
        }
        
        while(j<m){
            bSum+=b[j];
            j++;
        }
        
        ans+=max(aSum,bSum);
        
        return ans;
    }
};