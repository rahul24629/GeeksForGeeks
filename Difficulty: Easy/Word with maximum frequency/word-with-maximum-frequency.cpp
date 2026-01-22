class Solution {
  public:
    string maximumFrequency(string& s) {
        // Your code foes here.
        unordered_map<string, int> freq;
        vector<string> order;

        string word;
        stringstream ss(s);

        while (ss >> word) {
            if (freq[word] == 0) {
                order.push_back(word);   
            }
            freq[word]++;
        }

        string ans;
        int mx = 0;

        for (string w : order) {
            if (freq[w] > mx) {
                mx = freq[w];
                ans = w;
            }
        }

        return ans + " " + to_string(mx);
    }
};