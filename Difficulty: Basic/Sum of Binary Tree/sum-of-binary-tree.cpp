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
    int sumBT(Node* root) {
        // code here
        if(root==nullptr) return 0;
        queue<Node*> q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            Node* curr=q.front();
            q.pop();
            ans+=curr->data;
            
            if(curr->left!=nullptr){
                q.push(curr->left);
            }
            
            if(curr->right!=nullptr){
                q.push(curr->right);
            }
        }
        return ans;
    }
};