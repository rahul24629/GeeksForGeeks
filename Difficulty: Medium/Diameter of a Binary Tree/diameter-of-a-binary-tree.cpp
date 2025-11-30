/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    pair<int,int> dia2(Node* root){
        if(root==nullptr){
            return make_pair(0,0);
        }
        //(diameter,height)
        pair<int,int>leftInfo=dia2(root->left);
        pair<int,int>rightInfo=dia2(root->right);
        
        int currDia=leftInfo.second+rightInfo.second+1;
        int finalDia=max(currDia,max(leftInfo.first,rightInfo.first));
        int finalHeight=max(leftInfo.second,rightInfo.second)+1;
        
        return make_pair(finalDia,finalHeight);
    }
    int diameter(Node* root) {
        // code here
        return dia2(root).first -1;
    }
};