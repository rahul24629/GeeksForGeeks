class Solution {
  public:
    string findLargest(vector<int> &arr) {
        // code here
        vector<string> v;
        for(int el:arr){
            v.push_back(to_string(el));
        }
        sort(v.begin(),v.end(),[](string &a,string &b){
            return a+b>b+a;
        });
        if(v[0]=="0") return "0";
        string ans="";
        for(string s:v){
            ans+=s;
        }
        return ans;
    }
};