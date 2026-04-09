class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> arr;
        int i=0;
        int j=0;
        
        int n=a.size();
        int m=b.size();
        
        while(i<n && j<m){
            if(a[i]==b[j]){
                if(!arr.empty() && arr.back()!=a[i]){
                    arr.push_back(a[i]);
                }else if(arr.empty()){
                    arr.push_back(a[i]);
                }
                i++;
                j++;
            }else if(a[i]<b[j]){
                i++;
            }else{
                j++;
            }
        }
        return arr;
    }
};