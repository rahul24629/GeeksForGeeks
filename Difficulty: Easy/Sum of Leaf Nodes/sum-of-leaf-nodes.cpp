/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    int leafSum(Node* root) {
        if(root==nullptr) return 0;
        
        if(root->left==nullptr && root->right==nullptr) return root->data;
        
        int ans1=leafSum(root->left);
        int ans2=leafSum(root->right);
        
        return ans1+ans2;
    }
};