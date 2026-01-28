class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>> minHeap;
        for(int x:arr){
            minHeap.push(x);
        }
        for(int i=1;i<k;i++){
            minHeap.pop();
        }
        return minHeap.top();
    }
};