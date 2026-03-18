class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int freq[26]={0};
        for(char c:s){
            freq[c-'a']++;
        }
        int maxFreq=0;
        char result='a';
        for(int i=0;i<26;i++){
            if(freq[i]>maxFreq){
                maxFreq=freq[i];
                result=i+'a';
            }
        }
        return result;
    }
};