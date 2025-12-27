class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        map<int,int> s;
        for(int i=0;i<arr.size();i++){
            if(s.count(arr[i])){
                s[arr[i]]++;
            }else{
                s[arr[i]]=1;
            }
        }
        vector<int> ans;
        for(pair<int,int>p:s){
            if(p.second> arr.size()/3){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};