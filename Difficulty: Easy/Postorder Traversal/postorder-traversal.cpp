/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> ans;
        if(root==nullptr) return ans;
        
        vector<int> leftAns;
        leftAns=postOrder(root->left);
        
        
        vector<int> rightAns;
        rightAns=postOrder(root->right);
        
        ans.insert(ans.end(),leftAns.begin(),leftAns.end());
        ans.insert(ans.end(),rightAns.begin(),rightAns.end());
        ans.push_back(root->data);
        return ans;
        
        
    }
};