// User function template for C++
class Solution {
  public:
    // Just print the space separated array elements
    void printArray(vector<int> &arr) {
        int i = 0;
        while(i < arr.size()){
            cout << arr[i++] << " ";
        }
    }
};
