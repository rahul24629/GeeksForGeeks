class Solution {
  public:
    // Function to return kth largest element from an array.
    class Largest{
        public:
            int idx;
            Largest(int idx){
                this->idx=idx;
            }
            bool operator < (const Largest & obj) const{
                return this->idx < obj.idx;
            }
    };
    
    int KthLargest(vector<int> &arr, int k) {
        // Your code here
        priority_queue<int> pq(arr.begin(),arr.end());
        for(int i=0;i<k-1;i++){
            pq.pop();
        }
        return pq.top();
        
        
    }
};