class Solution {
public:
    long long countLessEqual(vector<int>& arr, int x) {
        long long count = 0;
        int n = arr.size();

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                long long sum = 1LL * arr[i] + arr[j] + arr[k];

                if (sum <= x) {
                    // arr[j] ... arr[k] sobgulo diye valid triplet hobe
                    count += (k - j);
                    j++;
                } else {
                    k--;
                }
            }
        }

        return count;
    }

    long long countTriplets(vector<int>& arr, int l, int r) {
        sort(arr.begin(), arr.end());

        return countLessEqual(arr, r) - countLessEqual(arr, l - 1);
    }
};