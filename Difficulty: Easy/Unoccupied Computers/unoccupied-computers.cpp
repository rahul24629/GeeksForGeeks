class Solution {
  public:
    int solve(int n, string s) {
        // code here
        unordered_map<int,int> mp;
        
        int ansCount=0;
        
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                if(n==0){
                    ansCount++;
                    mp[s[i]]=2;
                }else{
                    mp[s[i]]=1;
                    n--;
                }
            }else{
                if(mp[s[i]]==2){
                    continue;
                }else{
                    n++;
                    mp.erase(s[i]);
                }
            }
        }
        return ansCount;
    }
};
