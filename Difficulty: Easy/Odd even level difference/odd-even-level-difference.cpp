/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    int getLevelDiff(Node *root) {
        if (root == nullptr) return 0;

        queue<Node*> q;
        q.push(root);
        int level = 1;
        int ans = 0;

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();

                if (level % 2 == 1)
                    ans += curr->data;   // odd level
                else
                    ans -= curr->data;   // even level

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            level++;
        }
        return ans;
    }
};
