class Trie {
private:
    struct Node {
        Node* child[26];
        bool endOfWord;

        Node() {
            endOfWord = false;
            for(int i = 0; i < 26; i++)
                child[i] = NULL;
        }
    };

    Node* root;

public:
    Trie() {
        root = new Node();
    }

    void insert(string &word) {
        Node* temp = root;
        for(char ch : word) {
            int idx = ch - 'a';
            if(temp->child[idx] == NULL)
                temp->child[idx] = new Node();
            temp = temp->child[idx];
        }
        temp->endOfWord = true;
    }

    bool search(string &word) {
        Node* temp = root;
        for(char ch : word) {
            int idx = ch - 'a';
            if(temp->child[idx] == NULL)
                return false;
            temp = temp->child[idx];
        }
        return temp->endOfWord;
    }

    bool isPrefix(string &word) {
        Node* temp = root;
        for(char ch : word) {
            int idx = ch - 'a';
            if(temp->child[idx] == NULL)
                return false;
            temp = temp->child[idx];
        }
        return true;
    }
};
