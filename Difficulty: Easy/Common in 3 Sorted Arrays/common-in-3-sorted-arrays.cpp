class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        // code here
        vector<int> ans;
        int i=0;
        int j=0;
        int k=0;
        
        while(i<a.size() && j<b.size() && k<c.size()){
            if(a[i]<b[j] || a[i]<c[k]){
                i++;
            }else if(b[j]<a[i] || b[j]<c[k]){
                j++;
            }else if(c[k]<a[i] || c[k]<b[j]){
                k++;
            }else if(a[i]==b[j] && c[k]==a[i]){
                if(ans.empty() || ans.back()!=a[i]){
                ans.push_back(a[i]);
                }
                i++;
                j++;
                k++;
            }
        }
        return ans;
    }
};