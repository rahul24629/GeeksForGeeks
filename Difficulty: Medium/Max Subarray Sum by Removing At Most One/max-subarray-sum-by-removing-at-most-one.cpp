class Solution {
  public:
    int maxSumSubarray(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        int noDel=arr[0];
        int oneDel=INT_MIN;
        
        int res=arr[0];
        
        for(int i=1;i<arr.size();i++){
            int prevNoDel=noDel;
            
            noDel=max(noDel+arr[i],arr[i]);
            
            if (oneDel == INT_MIN)
                oneDel = prevNoDel;
            else
                oneDel = max(prevNoDel, oneDel + arr[i]);
            
            res=max(res,max(noDel,oneDel));
        }
        
        return res;
    }
};