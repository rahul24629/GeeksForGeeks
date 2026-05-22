/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int> arr;
        map<int, int> m;
        queue<pair<Node*, int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            auto curr=q.front();
            q.pop();
            
            Node* currNode= curr.first;
            int currHD=curr.second;
            
            if(m.count(currHD)==0){
                m[currHD]=currNode->data;
            }else{
                m[currHD]=currNode->data;
            }
            
            if(currNode->left){
                q.push({currNode->left,currHD-1});
            }
            
            if(currNode->right){
                q.push({currNode->right,currHD+1});
            }
        }
        
        for (auto it : m) {
            arr.push_back(it.second);
        }

        return arr;
    }
};