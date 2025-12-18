/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* validBST(vector<int> &arr,int st,int end){
        if(st>end){
            return nullptr;
        }
        
        int mid=st+(end-st)/2;
        Node* curr=new Node(arr[mid]);
        
        curr->left=validBST(arr,st,mid-1);
        curr->right=validBST(arr,mid+1,end);
        
        return curr;
    }
    Node* sortedArrayToBST(vector<int>& arr) {
        // code here
        return validBST(arr,0,arr.size()-1);
    }
};