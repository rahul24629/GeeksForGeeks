class Solution {
  public:
    string countSort(string s) {
        // code here
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int freq[256] = {0};
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            maxi=max(maxi,(int)s[i]);
            mini=min(mini,(int)s[i]);
        }
        int j=0;
        for(int i=mini;i<=maxi;i++){
            while(freq[i]>0){
                s[j++]=i;
                freq[i]--;
            }
        }
        return s;
    }
};