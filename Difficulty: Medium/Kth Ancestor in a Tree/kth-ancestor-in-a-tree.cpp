/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left, *right;
};
*/
// your task is to complete this function
class Solution {
  public:
    int ans = -1;  // store answer globally for recursion

    int helper(Node* root, int node, int k) {
        if(!root) return -1;
        if(root->data == node) return 0;

        int left = helper(root->left, node, k);
        int right = helper(root->right, node, k);

        if(left == -1 && right == -1) return -1;

        int dist = (left != -1 ? left : right) + 1;
        if(dist == k) ans = root->data;  // ancestor found

        return dist;
    }

    int kthAncestor(Node *root, int k, int node) {
        ans = -1;
        helper(root, node, k);
        return ans;
    }
};

