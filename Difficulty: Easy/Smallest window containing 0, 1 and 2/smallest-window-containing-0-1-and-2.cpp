class Solution {
  public:
    int smallestSubstring(string s) {
        // code here
        int zero=0;
        int one=0;
        int two=0;
        
        int flag=0;
        
        int ans=INT_MAX;
        
        for(int i=0;i<s.size();i++){
    
    if(s[i]=='0') zero++;
    else if(s[i]=='1') one++;
    else two++;

    while(zero!=0 && one!=0 && two!=0){
        ans = min(ans, i - flag + 1);  // +1 important
        if(s[flag]=='0') zero--;
        else if(s[flag]=='1') one--;
        else two--;
        flag++;
    }
}
        return ans==INT_MAX? -1:ans;
    }
};
