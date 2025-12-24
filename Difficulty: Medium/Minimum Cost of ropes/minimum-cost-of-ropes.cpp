class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>,greater<int>> pq(arr.begin(), arr.end());
        if(arr.size()==1){
            return 0;
        }
        int cost=0;
        while(pq.size()>1){
            int min1=pq.top();
            pq.pop();
            int min2=pq.top();
            pq.pop();
            cost+=min1+min2;
            pq.push(min1+min2);
        }
        return cost;
    }
};