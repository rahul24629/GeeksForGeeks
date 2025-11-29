// User function Template for C++

class Solution {
  public:
    int countNodes(Node* root) {
        // Write your code here
        if(root==nullptr) return 0;
        
        int leftHeight= countNodes(root->left);
        int rightHeight=countNodes(root->right);
        
        return leftHeight+rightHeight+1;
    }
};