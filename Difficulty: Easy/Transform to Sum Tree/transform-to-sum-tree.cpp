// User function template for C++

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:

    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int transform(Node* node){
        if(node==nullptr) return 0;
        int leftOld=transform(node->left);
        int rightOld=transform(node->right);
        int currOld=node->data;
        
        node->data=leftOld+rightOld;
        if(node->left!=nullptr){
            node->data+=node->left->data;
        }
        if(node->right!=nullptr){
            node->data+=node->right->data;
        }
        return currOld;
        
    }
    void toSumTree(Node *node) {
        // Your code here
        transform(node);
    }
};