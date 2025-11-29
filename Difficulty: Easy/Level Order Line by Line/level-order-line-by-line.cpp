/* A binary tree Node

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
 */
class Solution {
  public:
    vector<vector<int>> levelOrder(Node* root) {
        // code here
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int size= q.size();
            vector<int>level;
            while(size--){
                Node* curr=q.front();
                q.pop();
                level.push_back(curr->data);
                if(curr->left!=nullptr) q.push(curr->left);
                if(curr->right!=nullptr) q.push(curr->right);
            }
            ans.push_back(level);
            
        }
        return ans;
        
        
    }
};