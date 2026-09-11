class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        stack<int>st;
        
        int n=arr.size()-1;
        vector<int> ans(n,-1);
        
        for(int i=n;i>=0;i--){
            while(!st.empty() && arr[i]<=st.top()) st.pop();
            
            if(!st.empty()){
                ans[i]=st.top();
            }
            
            st.push(arr[i]);
        }
        ans.push_back(-1);
        return ans;
    }
};