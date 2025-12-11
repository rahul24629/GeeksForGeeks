/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int> arr;
        if(root==nullptr){
            return arr;
        }
        queue<pair<Node*,int>> q;
        map<int,int>m;
        
        q.push({root,0});
        
        while(!q.empty()){
            auto curr=q.front();
            q.pop();
            
            Node* currNode=curr.first;
            int currHD=curr.second;
            
            m[currHD]=currNode->data;
            
            if(currNode->left!=nullptr){
                q.push({currNode->left,currHD-1});
            }
            
            if(currNode->right!=nullptr){
                q.push({currNode->right,currHD+1});
            }
        }
        
        for(auto it:m){
            arr.push_back(it.second);
        }
        
        return arr;
        
    }
};