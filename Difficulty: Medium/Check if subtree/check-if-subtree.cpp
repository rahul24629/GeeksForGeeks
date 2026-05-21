/*
Structure of a Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isIdenTical(Node* root1, Node* root2){
        if(root1==nullptr && root2==nullptr) return true;
        if(root1==nullptr || root2==nullptr) return false;
        
        if(root1->data!=root2->data) return false;
        
        return isIdenTical(root1->left,root2->left) && isIdenTical(root1->right,root2->right);
    }
    bool isSubTree(Node *root1, Node *root2) {
        // code here
        if(root2==nullptr) return true;
        
        if(root1==nullptr) return false;
        
        if(root1->data==root2->data){
            if(isIdenTical(root1,root2)) return true;
        }
        
        return isSubTree(root1->left, root2) || isSubTree(root1->right,root2);
    }
};