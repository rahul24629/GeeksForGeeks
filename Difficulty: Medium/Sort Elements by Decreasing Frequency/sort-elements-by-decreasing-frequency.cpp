class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        vector<int> mp(100001, 0);
        for(int el: arr){
            mp[el]++;
        }
        sort(arr.begin(),arr.end(),[&](int a,int b){
            if(mp[a]!=mp[b]){
                return mp[a]>mp[b];
            }
            return a<b;
        });
        return arr;
    }
};