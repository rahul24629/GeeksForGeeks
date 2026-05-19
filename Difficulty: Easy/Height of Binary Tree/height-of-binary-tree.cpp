/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    int height(Node* root) {
        
        if(root == nullptr) return -1;
        
        int leftSide = height(root->left);
        int rightSide = height(root->right);
        
        return max(leftSide, rightSide) + 1;
        
        
    }
};