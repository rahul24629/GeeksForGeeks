/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    bool iden(Node* root1, Node* root2){
        if(root1==nullptr && root2==nullptr){
            return 1;
        }
        else if(root1==nullptr || root2==nullptr){
            return 0;
        }
        
        if(root1->data!=root2->data){
            return 0;
        }
        
        return iden(root1->left, root2->left)
            && iden(root1->right, root2->right);
    }

    bool isSubTree(Node* T, Node* S) {
        
        if(T==nullptr && S==nullptr){
            return 1;
        }
        else if(T==nullptr|| S==nullptr){  
            return 0;
        }
        
       
        if(T->data == S->data){
            if(iden(T, S)){
                return 1;
            }
        }
        
        
        bool isLeftSubTree = isSubTree(T->left, S);
        
        if(!isLeftSubTree){
            return isSubTree(T->right, S);   
        }
        
        return 1;   
    }
};
