class Solution {
  public:
    int countKdivPairs(vector<int>& arr, int k) {
        // code here
        for(int i = 0; i < arr.size(); i++){
            arr[i] = arr[i] % k;
        }

        unordered_map<int,int> mp;

        int count = 0;

        for(int i = 0; i < arr.size(); i++){
            if(mp.find((k - arr[i]) % k) == mp.end()){
                if(mp.find(arr[i]) != mp.end()){
                    mp[arr[i]]++;
                }else{
                    mp[arr[i]] = 1;
                }
            }else{
                count += mp[(k - arr[i]) % k];

                if(mp.find(arr[i]) != mp.end()){
                    mp[arr[i]]++;
                }else{
                    mp[arr[i]] = 1;
                }
            }
        }
        return count;
    }
};