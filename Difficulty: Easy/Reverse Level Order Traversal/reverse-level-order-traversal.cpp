/*
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        vector<int> result;
        
        if(root==nullptr){
            return result;
        }
        
        queue<Node*> q;
        stack<int> s;
        
        q.push(root);
        
        while(!q.empty()){
            Node* curr=q.front();
            q.pop();
            
            s.push(curr->data);
            
            if(curr->right) q.push(curr->right);
            if(curr->left) q.push(curr->left);
            
        }
        
        while(!s.empty()){
            result.push_back(s.top());
            s.pop();
        }
        
        return result;
    }
};