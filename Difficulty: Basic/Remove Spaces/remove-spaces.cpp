class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        int k=0;
        int i=0;
        while(i<s.size()){
            if(s[i]!=' '){
                s[k]=s[i];
                k++;
            }
                i++;
        }
        s.resize(k);
        return s;
    }
};