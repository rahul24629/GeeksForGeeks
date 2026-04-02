/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */

/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:

    long long unsigned int decimalValue(Node *head) {

        const long long MOD = 1000000007;

        long long ans = 0;

        Node* curr = head;

        while(curr != nullptr){

            ans = (ans * 2 + curr->data) % MOD;

            curr = curr->next;
        }

        return ans;
    }
};