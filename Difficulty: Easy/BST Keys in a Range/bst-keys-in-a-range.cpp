class Solution {
  public:
    vector<int> printNearNodes(Node *root, int low, int high) {
        vector<int> ans;
        solve(root, low, high, ans);
        return ans;
    }
    
    void solve(Node* root, int low, int high, vector<int> &ans){
        if(root == nullptr) return;
        
        if(root->data >= low && root->data <= high){
            solve(root->left, low, high, ans);
            ans.push_back(root->data);
            solve(root->right, low, high, ans);
        }
        else if(root->data < low){
            solve(root->right, low, high, ans);
        }
        else{
            solve(root->left, low, high, ans);
        }
    }
};
