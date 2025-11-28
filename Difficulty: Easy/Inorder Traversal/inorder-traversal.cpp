class Solution {
  public:
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        
        if(root == NULL) return ans;

        // left subtree
        vector<int> leftAns = inOrder(root->left);
        ans.insert(ans.end(), leftAns.begin(), leftAns.end());

        // root
        ans.push_back(root->data);

        // right subtree
        vector<int> rightAns = inOrder(root->right);
        ans.insert(ans.end(), rightAns.begin(), rightAns.end());

        return ans;
    }
};
