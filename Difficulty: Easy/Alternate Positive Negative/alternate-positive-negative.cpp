class Solution {
  public:
    void rearrange(vector<int>& arr) {
        vector<int> pos, neg;

        // Step 1: separate
        for (int x : arr) {
            if (x >= 0) pos.push_back(x);
            else neg.push_back(x);
        }

        int i = 0, j = 0, k = 0;

        while (i < pos.size() && j < neg.size()) {
            arr[k++] = pos[i++];
            arr[k++] = neg[j++];
        }

        // Step 3: remaining
        while (i < pos.size()) {
            arr[k++] = pos[i++];
        }

        while (j < neg.size()) {
            arr[k++] = neg[j++];
        }
    }
};