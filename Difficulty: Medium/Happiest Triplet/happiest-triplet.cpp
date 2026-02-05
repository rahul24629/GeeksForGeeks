class Solution {
public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());

        int i = 0, j = 0, k = 0;
        int best_diff = INT_MAX;
        int best_sum = INT_MAX;
        vector<int> best_triplet(3);

        while (i < a.size() && j < b.size() && k < c.size()) {
            int x = a[i], y = b[j], z = c[k];
            int mini = min({x, y, z});
            int maxi = max({x, y, z});
            int diff = maxi - mini;
            int sum = x + y + z;

            if (diff < best_diff || (diff == best_diff && sum < best_sum)) {
                best_diff = diff;
                best_sum = sum;
                best_triplet = {x, y, z};
            }

          
            if (mini == x) i++;
            else if (mini == y) j++;
            else k++;
        }

        sort(best_triplet.rbegin(), best_triplet.rend());
        return best_triplet;
    }
};
