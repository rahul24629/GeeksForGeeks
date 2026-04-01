/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        // Node* prev= nullptr;
        // Node* curr= head;
        // int num=x-1;
        
        // while(curr->next!=nullptr){
            
            
        // }
        
        if(x==1){
            Node* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        
        Node* curr=head;
        Node* prev=nullptr;
        int cur=1;
        while(curr!=nullptr && cur<=x){
            if(cur==x){
                prev->next=curr->next;
                delete curr;
            }
            prev=curr;
            curr=curr->next;
            cur++;
            
        }
        return head;
    }
};