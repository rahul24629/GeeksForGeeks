class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        set<int> s;

        for(int x : arr1) s.insert(x);
        for(int x : arr2) s.insert(x);

        return vector<int>(s.begin(), s.end());
    }
};
