class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char> st;
        for(int i=0;i<S.size();i++){
            st.push(S[i]);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};