class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
    int largest = -1, second = -1;

    for(int x : arr){
        if(x > largest){
            second = largest;
            largest = x;
        }
        else if(x < largest && x > second){
            second = x;
        }
    }
    return second;
}

};