/*
Structure of the node of the linked list is as
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_map<int,int> mp;
        
        Node* curr=head1;
        while(curr!=nullptr){
            mp[x-curr->data]++;
            curr=curr->next;
        }
        
        Node* curr2=head2;
        int count=0;
        
        while(curr2!=nullptr){
            if(mp.find(curr2->data)!=mp.end()){
                count++;
            }
            curr2=curr2->next;
        }
        return count;
    }
};