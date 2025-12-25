/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    bool isHeap(Node* root) {
        if(root == NULL) return true;

        queue<Node*> q;
        q.push(root);

        bool nullFound = false;

        while(!q.empty()) {
            Node* curr = q.front();
            q.pop();

            // Left child check
            if(curr->left) {
                if(nullFound) return false;              
                if(curr->left->data > curr->data) return false; 
                q.push(curr->left);
            } else {
                nullFound = true;
            }

            // Right child check
            if(curr->right) {
                if(nullFound) return false;                
                if(curr->right->data > curr->data) return false;
                q.push(curr->right);
            } else {
                nullFound = true;
            }
        }

        return true;
    }
};
