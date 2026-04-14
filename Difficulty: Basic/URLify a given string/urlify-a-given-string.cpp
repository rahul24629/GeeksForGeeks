class Solution {
public:
    string URLify(string &s) {
        int spaceCount = 0;
        int n = s.size();

        // Count spaces
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ')
                spaceCount++;
        }

        // New length after replacement
        int newLength = n + 2 * spaceCount;
        s.resize(newLength);

        int i = n - 1;
        int j = newLength - 1;
        while (i >= 0) {
            if (s[i] == ' ') {
                s[j--] = '0';
                s[j--] = '2';
                s[j--] = '%';
            } else {
                s[j--] = s[i];
            }
            i--;
        }

        return s;
    }
};