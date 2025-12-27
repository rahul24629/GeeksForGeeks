class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        if(a.size()!=b.size()) return false;
        unordered_map<int,int> m;
        for(int el:a) m[el]++;
        for(int el :b){
            if(m.count(el)){
                m[el]--;
                if(m[el]==0){
                    m.erase(el);
                }
            }else{
                return false;
            }
        }
        return m.size()==0;
    }
};