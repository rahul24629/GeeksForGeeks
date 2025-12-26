class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            int comp=target-arr[i];
            if(m.count(comp)){
                return true;
            }
            m[arr[i]]=i;
        }
        return false;
    }
};