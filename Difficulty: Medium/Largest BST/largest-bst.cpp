/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    struct Info{
        public:
        bool isBST;
        int max;
        int min;
        int sz;
        
        Info(bool isBST,int min,int max,int sz){
            this->isBST=isBST;
            this->min=min;
            this->max=max;
            this->sz=sz;
        }
    };
    
    int maxSize=0;
    
    Info* solve(Node* root){
        if(root==nullptr) return new Info(true,INT_MAX,INT_MIN,0);
        
        Info* left=solve(root->left);
        Info* right=solve(root->right);
        
        int currMin=min(root->data,min(left->min,right->min));
        int currMax=max(root->data,max(left->max,right->max));
        
        int currSize=left->sz+right->sz +1;
        
        if(left->isBST && right->isBST
            && root->data >left->max
            && root->data <right->min){
                maxSize=max(maxSize,currSize);
                return new Info(true,currMin,currMax,currSize);
        }
        return new Info(false,currMin,currMax,currSize);
        
        
    }
    
    
    int largestBst(Node *root) {
        // Your code here
        solve(root);
        return maxSize;
        
    }
};