/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node* lca=lowestCommonAncestor(root,a,b);
        
        int dist1=distance(lca,a);
        int dist2=distance(lca,b);
        
        return dist1+dist2;
    }
    
    Node* lowestCommonAncestor(Node* root, int a, int b){
        
        if(root==nullptr || root->data==a || root->data==b) return root;
        
        Node* leftLCA=lowestCommonAncestor(root->left,a,b);
        Node* rightLCA=lowestCommonAncestor(root->right,a,b);
        
        if(leftLCA!=nullptr && rightLCA!=nullptr) return root;
        return leftLCA==nullptr?rightLCA:leftLCA;
        
    }
    
    int distance(Node* root,int a){
        if(root==nullptr) return -1;
        
        if(root->data==a) return 0;
        
        int leftDist=distance(root->left,a);
        if(leftDist!=-1) return leftDist+1;
        
        int rightDist=distance(root->right,a);
        if(rightDist!=-1) return rightDist+1;
        
        return -1;
        
        
    }
};