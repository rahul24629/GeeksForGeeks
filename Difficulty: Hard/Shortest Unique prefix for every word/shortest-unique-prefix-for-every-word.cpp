class Solution {
    class Node {
    public:
        Node* children[26]; 
        bool endOfWord;
        int freq;

        Node() {
            endOfWord = false;
            freq = 0;
            for (int i = 0; i < 26; i++)
                children[i] = nullptr;
        }
    };

    class Trie {
        Node* root;

    public:
        Trie() {
            root = new Node();
        }

        void insert(const string &word) {
            Node* curr = root;
            for (char c : word) {
                int idx = c - 'a';
                if (!curr->children[idx])
                    curr->children[idx] = new Node();
                curr = curr->children[idx];
                curr->freq++; 
            }
            curr->endOfWord = true;
        }

        string getPrefix(const string &word) {
            Node* curr = root;
            string prefix = "";
            for (char c : word) {
                int idx = c - 'a';
                curr = curr->children[idx];
                prefix += c;
                if (curr->freq == 1) 
                    break;
            }
            return prefix;
        }

        void freeTrie(Node* node) {
            if (!node) return;
            for (int i = 0; i < 26; i++)
                freeTrie(node->children[i]);
            delete node;
        }

        ~Trie() {
            freeTrie(root); 
        }
    };

public:
    vector<string> findPrefixes(string arr[], int n) {
        Trie trie;

        for (int i = 0; i < n; i++)
            trie.insert(arr[i]);

        vector<string> ans;
        for (int i = 0; i < n; i++)
            ans.push_back(trie.getPrefix(arr[i]));

        return ans;
    }
};
