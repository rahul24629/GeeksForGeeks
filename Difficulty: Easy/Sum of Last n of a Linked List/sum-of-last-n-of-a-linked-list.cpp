/*Structure of the node of the linled list is as
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};  */

class Solution {
  public:

    // your task is to complete this function
    int getSize(Node* head){
        Node* curr=head;
        int size=0;
        
        while(curr!=nullptr){
            size++;
            curr=curr->next;
        }
        return size;
    }
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(Node* head, int n) {
        // Code here
        int size= getSize(head);
        
        Node* curr=head;
        int i=0;
        
        int sum=0;
        
        while(curr!=nullptr){
            if(size-i<=n){
                sum+=curr->data;
            }
            i++;
            curr=curr->next;
            
        }
        return sum;
    }
};