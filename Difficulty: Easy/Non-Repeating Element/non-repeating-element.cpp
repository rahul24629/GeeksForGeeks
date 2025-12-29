
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        unordered_map<int,int> mp;
        for(int el:arr){
            mp[el]++;
        }
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
                return arr[i];
            }
        }
        return 0;
    }
};
