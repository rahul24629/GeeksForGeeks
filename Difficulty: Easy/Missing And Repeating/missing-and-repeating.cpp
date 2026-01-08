class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        unordered_map<int,int> mp;
        int mis;
        int dub;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(int i=1;i<=arr.size();i++){
            if(mp[i]==0){
                mis=i;
            }
            if(mp[i]==2){
                dub=i;
            }
        }
        return {dub,mis};
    }
};