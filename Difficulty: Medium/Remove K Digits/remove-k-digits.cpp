class Solution {
  public:
    string removeKdig(string &s, int k) {
        // code here
        if(s.empty()) return "0";
        string s2="";
        for(int i=0;i<s.size();i++){
            char curr=s[i];
            
            while(!s2.empty()&& k>0&& curr<s2.back()){
                s2.pop_back();
                k--;
            }
            
            //for non leading zero
            if(!s2.empty() || curr!='0'){
                s2.push_back(curr);
            }
        }
        
        //for ex-12345
        while(k>0 && !s2.empty()){
            s2.pop_back();
            k--;
        }
        
        if(s2.empty()) return "0";
        
        return s2;
    }
};