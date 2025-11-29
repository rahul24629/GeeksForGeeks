/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root) {
        // code here
        if(root==nullptr) return -1;
        
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        
        int currHeight=max(leftHeight, rightHeight)+1;
        
        return currHeight;
    }
};