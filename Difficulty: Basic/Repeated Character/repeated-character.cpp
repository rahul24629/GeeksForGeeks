class Solution {
  public:
    char firstRep(string s) {
        // code here.
        vector<int> arr(26,0);
        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            arr[idx]++;
        }
        for(int i=0;i<s.size();i++){
            if(arr[s[i]-'a']>=2) return s[i];
        }
        return '#';
    }
};