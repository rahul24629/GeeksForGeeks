/*
class Node {
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
    vector<int> zigZagTraversal(Node* root) {
        vector<int> ans;
        if (root == nullptr) return ans;

        queue<Node*> q;
        q.push(root);

        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> currLevel(size);

            for (int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();

                int index = leftToRight ? i : size - i - 1;
                currLevel[index] = curr->data;

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }

            for (int x : currLevel)
                ans.push_back(x);

            leftToRight = !leftToRight;
        }
        return ans;
    }
};
