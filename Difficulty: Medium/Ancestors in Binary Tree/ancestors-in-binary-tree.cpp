/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/

class Solution {
  public:
    bool dfs(Node* root, int target, vector<int> &ans) {
        if (!root) return false;

        if (root->data == target)
            return true;

        if (dfs(root->left, target, ans) ||
            dfs(root->right, target, ans)) {
            ans.push_back(root->data);  // ancestor
            return true;
        }

        return false;
    }

    vector<int> Ancestors(Node* root, int target) {
        vector<int> ans;
        dfs(root, target, ans);
        return ans;
    }
};
