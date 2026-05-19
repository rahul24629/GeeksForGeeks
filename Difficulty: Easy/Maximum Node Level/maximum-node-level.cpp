/*Complete the function below
Node is as follows:
struct Node {
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

    // Return the level (0-indexed) with maximum number of nodes.
    int maxNodeLevel(Node *root) {
        // Add your code here
        if(root==nullptr) return 0;
        int ans=0;
        int lvl=0;
        int maxi=0;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            
            while(size--){
                Node* curr= q.front();
                q.pop();
                
                level.push_back(curr->data);
                
                if(curr->left !=nullptr){
                    q.push(curr->left);
                }
                
                if(curr->right!=nullptr){
                    q.push(curr->right);
                }
            }
            if(level.size() > maxi){
                maxi = level.size();
                ans = lvl;
            }
            
            lvl++;
        }
        
        return ans;
    }
};