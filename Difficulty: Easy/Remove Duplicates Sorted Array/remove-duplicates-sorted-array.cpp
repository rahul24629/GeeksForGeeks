class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n=arr.size();
        if(n==0) return {};
        int i=0;
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
            }
        }
        arr.resize(i+1);
        return arr;
    }
};