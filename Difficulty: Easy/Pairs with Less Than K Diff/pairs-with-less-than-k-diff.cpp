class Solution {
public:
    int countPairs(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());

        int i = 0, j = 0;
        int n = arr.size();
        int count = 0;

        while (j < n) {
            while (arr[j] - arr[i] >= k) {
                i++;
            }

            count += (j - i);
            j++;
        }

        return count;
    }
};