class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        
        unordered_map<long long, long long> mp;

        for(int i = 0; i < arr.size(); i++) {

            if(arr[i] == 0) {
                if(target == 0) return true;
                continue;
            }

            if(target % arr[i] == 0) {

                long long need = target / arr[i];

                if(mp.find(need) != mp.end()) {
                    return true;
                }

                mp[arr[i]] = 1;
            }
        }

        return false;
    }
};