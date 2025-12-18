/*

Definition for Binary Tree Node
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
    
    void solve(Node* root, vector<int> &path, vector<vector<int>> &ans){
        if(root == nullptr) return;

        path.push_back(root->data);

        // leaf node
        if(root->left == nullptr && root->right == nullptr){
            ans.push_back(path);
        }
        
        solve(root->left, path, ans);
        solve(root->right, path, ans);
        

        path.pop_back(); 
    }

    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> ans;
        vector<int> path;
        solve(root, path, ans);
        return ans;
    }
};
