/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
    pair<bool,int> solve(Node* root){
        if(root == nullptr) return {true, 0};

        // leaf node
        if(root->left == nullptr && root->right == nullptr){
            return {true, root->data};
        }

        pair<bool,int> leftSide = solve(root->left);
        pair<bool,int> rightSide = solve(root->right);

        int leftSum = leftSide.second;
        int rightSum = rightSide.second;

        bool isLeftTree = leftSide.first;
        bool isRightTree = rightSide.first;

        bool currOk = (root->data == leftSum + rightSum);

        int totalSum = leftSum + rightSum + root->data;

        return {isLeftTree && isRightTree && currOk, totalSum};
    }

    bool isSumTree(Node* root) {
        return solve(root).first;
    }
};
