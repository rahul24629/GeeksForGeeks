/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    vector<int> preOrder(Node* root) {
        vector<int> ans;
        if(root == NULL) return ans;   // null check instead of 'N'

        ans.push_back(root->data);     // push current node

        // left subtree
        vector<int> leftAns = preOrder(root->left);
        ans.insert(ans.end(), leftAns.begin(), leftAns.end());

        // right subtree
        vector<int> rightAns = preOrder(root->right);
        ans.insert(ans.end(), rightAns.begin(), rightAns.end());

        return ans;
    }
};
