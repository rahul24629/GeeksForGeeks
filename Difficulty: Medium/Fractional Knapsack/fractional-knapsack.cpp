class Solution {
  public:

    static bool compare(pair<double,int> p1, pair<double,int> p2) {
        return p1.first > p2.first;
    }

    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        
        int n = val.size();
        vector<pair<double,int>> ratio(n);
        
        for(int i = 0; i < n; i++){
            double r = val[i] / (double)wt[i];
            ratio[i] = make_pair(r, i);
        }

        sort(ratio.begin(), ratio.end(), compare);

        double ans = 0.0;

        for(int i = 0; i < n; i++) {

            int idx = ratio[i].second;

            if(wt[idx] <= capacity) {
                ans += val[idx];
                capacity -= wt[idx];
            } 
            else {
                ans += ratio[i].first * capacity;
                break;
            }
        }

        return ans;
    }
};
