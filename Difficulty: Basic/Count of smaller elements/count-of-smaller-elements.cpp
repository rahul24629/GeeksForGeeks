
class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {

        // Code Here
        int count=0;
        for(int n:arr){
            if(n<=x) count++;
        }
        return count;
    }
};