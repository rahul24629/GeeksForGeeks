class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int first=INT_MAX;
        int second=INT_MAX;
        for(int a:arr){
            if(a<first){
                second=first;
                first=a;
            }else if(a<second && a>first){
                second=a;
            }
        }
        if(second == INT_MAX) return {-1};
        return {first,second};
    }
};