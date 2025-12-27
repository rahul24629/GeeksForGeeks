class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        //if size is not equal
        if(s1.size()!=s2.size()) return false;
        
        unordered_map<char,int> freq;
        
        //for the 1st string calculate the freq
        for(int i=0;i<s1.size();i++){
            if(freq.count(s1[i])){
                freq[s1[i]]++;
            }else{
                freq[s1[i]]=1;
            }
        }
        
        // now if same char is second string then decrease the freq
        for(int i=0;i<s2.size();i++){
            if(freq.count(s2[i])){
                freq[s2[i]]--;
                if(freq[s2[i]]==0) freq.erase(s2[i]);
            }else{
                return false;
            }
        }
        
        //check if map size is 0
        return freq.size()==0;
    }
};