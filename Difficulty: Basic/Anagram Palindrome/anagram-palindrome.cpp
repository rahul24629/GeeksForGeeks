class Solution {
  public:
    bool canFormPalindrome(string &s) {
        // code here
        int freq[26]={0};
        
        for(char c:s){
            int idx=c-'a';
            freq[idx]++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){
                count++;
            }
        }
        if(s.size()%2==0 && count==0){
            return true;
        }else if(s.size()%2==1 && count==1){
            return true;
        }else{
            return false;
        }
    }
};