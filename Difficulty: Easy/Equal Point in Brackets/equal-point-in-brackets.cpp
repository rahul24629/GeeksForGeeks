class Solution {
  public:
    int findIndex(string &s) {
        // code here
        int n=s.size();
        vector<int>left(n+1,0),right(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            left[i+1]=count;
        }
        count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')'){
                count++;
            }
            right[i]=count;
        }
        for(int i=0;i<n;i++){
            if(left[i]==right[i]) return i;
        }
        return n;
        
    }
};