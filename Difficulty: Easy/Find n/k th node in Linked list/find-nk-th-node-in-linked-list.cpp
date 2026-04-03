/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:

    int getSize(Node* head){
        int s = 0;

        Node* curr = head;

        while(curr != nullptr){
            s++;
            curr = curr->next;
        }

        return s;
    }

    int fractional_node(struct Node *head, int k) {

        int size = getSize(head);

        int pos = size / k;

        if(size % k != 0)
            pos++;

        Node* curr = head;

        for(int i=1; i<pos; i++){
            curr = curr->next;
        }

        return curr->data;
    }
};