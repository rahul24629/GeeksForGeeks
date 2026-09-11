class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int> st;
        vector<int> ans(arr.size(),-1);
        
        
        int n=arr.size();
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]>=st.top()) st.pop();
            
            if(st.empty()){
                ans[i]=-1;
            }    
            else{
                ans[i]=st.top();
            }  
            st.push(arr[i]);
            
            
        }
        return ans;
    }
};