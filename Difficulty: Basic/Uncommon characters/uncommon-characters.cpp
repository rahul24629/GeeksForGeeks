class Solution {
  public:
    string uncommonChars(string s1, string s2) {

    int f1[26] = {0};
    int f2[26] = {0};

    for(char c : s1) {
        f1[c - 'a'] = 1;
    }

    for(char c : s2) {
        f2[c - 'a'] = 1;
    }

    string result = "";

    for(int i = 0; i < 26; i++) {

        if(f1[i] != f2[i]) {
            result += (i + 'a');
        }
    }

    return result;
}
};
