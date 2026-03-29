/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

#include <unordered_set>

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        
        if(head == nullptr) return head;

        unordered_set<int> seen;

        Node* curr = head;
        Node* prev = nullptr;

        while(curr != nullptr){

            if(seen.find(curr->data) != seen.end()){
                // duplicate found
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }
            else{
                seen.insert(curr->data);
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};