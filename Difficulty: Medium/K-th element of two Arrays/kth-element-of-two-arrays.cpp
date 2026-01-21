class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int i = 0, j = 0;

        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) {
                k--;
                if (k == 0) return a[i];
                i++;
            } else {
                k--;
                if (k == 0) return b[j];
                j++;
            }
        }
        while (i < a.size()) {
            k--;
            if (k == 0) return a[i];
            i++;
        }

        while (j < b.size()) {
            k--;
            if (k == 0) return b[j];
            j++;
        }

        return -1; 
    }
};
