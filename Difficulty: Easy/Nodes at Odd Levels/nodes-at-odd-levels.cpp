/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> nodesAtOddLevels(Node *root) {
        // code here
        
        vector<int> ans;
        
        if(root == NULL) return ans;
        
        queue<Node*> q;
        q.push(root);
        
        int lvl=0;
        while(!q.empty()){
            int size = q.size();
            
            for(int i = 0; i < size; i++){
                
                Node* curr = q.front();
                q.pop();
                
                if(lvl % 2 == 0){
                    ans.push_back(curr->data);
                }
                
                if(curr->left)
                    q.push(curr->left);
                    
                if(curr->right)
                    q.push(curr->right);
            }
            
            lvl++;
            
            
        }
        return ans;
    }
};