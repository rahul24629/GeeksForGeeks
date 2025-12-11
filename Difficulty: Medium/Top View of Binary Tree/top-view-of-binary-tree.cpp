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
    vector<int> topView(Node *root) {

        vector<int> arr;

      
        queue<pair<Node*, int>> Q;
        map<int, int> m;

        Q.push({root, 0});

        while (!Q.empty()) {
            auto curr = Q.front();
            Q.pop();

            Node* currNode = curr.first;
            int currHD = curr.second;

           
            if (m.count(currHD) == 0) {
                m[currHD] = currNode->data;
            }

            
            if (currNode->left != nullptr) {
                Q.push({currNode->left, currHD - 1});
            }

    
            if (currNode->right != nullptr) {
                Q.push({currNode->right, currHD + 1});
            }
        }


        for (auto it : m) {
            arr.push_back(it.second);
        }

        return arr;
    }
};
