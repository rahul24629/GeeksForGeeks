/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node* slow=head;
        Node* fast=head;
        
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast) break;
        }
        
        if(slow!=fast) return;
        
        slow=head;
        
        if(slow==fast){
            while(fast->next!=slow){
                fast=fast->next;
            }
        }else{
            while(slow->next!=fast->next){
                slow=slow->next;
                fast=fast->next;
            }
        }
        fast->next=nullptr;
        
    }
};