class Solution {
    class Node {
      public:
        Node* children[26];
        Node() {
            for (int i = 0; i < 26; i++)
                children[i] = nullptr;
        }
    };

    class Trie {
      public:
        Node* root;
        Trie() {
            root = new Node();
        }

        void insert(string &s) {
            Node* cur = root;
            for (char c : s) {
                int idx = c - 'a';
                if (cur->children[idx] == nullptr) {
                    cur->children[idx] = new Node();
                }
                cur = cur->children[idx];
            }
        }

        int countNodes(Node* node) {
            int cnt = 0;
            for (int i = 0; i < 26; i++) {
                if (node->children[i])
                    cnt += countNodes(node->children[i]);
            }
            return cnt + 1;
        }

        int getCount() {
            return countNodes(root);
        }
    };

  public:
    int countSubs(string &s) {
        Trie trie;
        for (int i = 0; i < s.size(); i++) {
            string suffix = s.substr(i);
            trie.insert(suffix);
        }
        return trie.getCount() - 1;
    }
};
