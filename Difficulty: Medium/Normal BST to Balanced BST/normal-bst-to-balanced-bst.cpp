/*Structure of the Node of the BST is as
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    Node* builtBST(vector<int> &ans, int st, int end) {
        if (st > end) return nullptr;

        int mid = st + (end - st) / 2;

        Node* curr = new Node(ans[mid]);
        curr->left = builtBST(ans, st, mid - 1);
        curr->right = builtBST(ans, mid + 1, end);

        return curr;
    }

    void getInOrder(Node* root, vector<int> &ans) {
        if (root == nullptr) return;

        getInOrder(root->left, ans);
        ans.push_back(root->data);
        getInOrder(root->right, ans);
    }

    Node* balanceBST(Node* root) {
        vector<int> ans;
        getInOrder(root, ans);
        return builtBST(ans, 0, ans.size() - 1);
    }
};
