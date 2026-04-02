/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int getSize(Node* head){
        Node* curr=head;
        int size=0;
        while(curr!=nullptr){
            size++;
            curr=curr->next;
        }
        return size;
    }
    Node* swapKth(Node* head, int k) {
        // code here
        Node* curr=head;
        int size=getSize(head);
        
        if(k>size) return head;
        if(2*k - 1 == size) return head;
        
        Node* first = head;

    for(int i=1; i<k; i++){
        first = first->next;
    }

    // kth from end
    Node* second = head;

    for(int i=1; i<size-k+1; i++){
        second = second->next;
    }

    // swap data
    swap(first->data, second->data);

    return head;
    }
};