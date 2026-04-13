class Solution {
  public:
    int remAnagram(string &str1, string &str2) {
        // code here
        int freq[26]={0};
        for(int i=0;i<str2.size();i++){
            int idx=str2[i]-'a';
            freq[idx]++;
        }
        
        int count=0;
        for(int i=0;i<str1.size();i++){
            int idx=str1[i]-'a';
            if(freq[idx]==0) count++;
            else freq[idx]--;
        }
        
        for(int i=0;i<26;i++){
            count += freq[i];
        }
        return count;
    }
};
