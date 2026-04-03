/* Link list Node

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {

        if(k == 1) return nullptr;

        Node* dummy = new Node(0);
        dummy->next = head;

        Node* curr = head;
        Node* prev = dummy;

        int c = 1;

        while(curr != nullptr){

            if(c == k){

                prev->next = curr->next;

                Node* temp = curr;
                curr = curr->next;

                delete temp;

                c = 1;
            }
            else{

                prev = curr;
                curr = curr->next;
                c++;
            }
        }

        return dummy->next;
    }
};