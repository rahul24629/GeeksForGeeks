// User function Template for C++
class Solution {
  public:
    int areAnagram(string S1, string S2) {
        // code here
        if(S1.size()!=S2.size()) return 0;
        int count[26]={0};
        int n=S1.size();
        for(int i=0;i<n;i++){
            int idx=S1[i]-'a';
            count[idx]++;
        }
        for(int i=0;i<S2.size();i++){
            int idx=S2[i]-'a';
            if(count[idx]==0) return 0;
            count[idx]--;
        }
        return 1;
    }
};