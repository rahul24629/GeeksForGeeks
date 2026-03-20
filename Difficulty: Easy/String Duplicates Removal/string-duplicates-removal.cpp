// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_map<char,int> map;
        for(char c:s){
            map[c]++;
        }
        int j=0;
        for(int i=0;i<s.size();i++){
            if(map[s[i]]>=1){
                s[j]=s[i];
                map[s[i]]=0;
                j++;
            }
        }
        s.resize(j);
        return s;
    }
};