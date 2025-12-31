class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        vector<int> freq(26,0);
        for(char c:s){
            if(freq[c-'a']==1) return string(1,c);
            freq[c-'a']++;
        }
        return "-1";
    }
};