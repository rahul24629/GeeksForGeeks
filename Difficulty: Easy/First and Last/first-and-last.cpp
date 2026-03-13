class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
        
        int st = 0, end = arr.size() - 1;
        int firstOccur = -1;
        
        while(st <= end){
            int mid = st + (end - st) / 2;
            
            if(arr[mid] == x){
                firstOccur = mid;
                end = mid - 1;
            }
            else if(arr[mid] < x){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        st = 0, end = arr.size() - 1;
        int last = -1;
        
        while(st <= end){
            int mid = st + (end - st) / 2;
            
            if(arr[mid] == x){
                last = mid;
                st = mid + 1;
            }
            else if(arr[mid] < x){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        if(firstOccur == -1) return {-1};
        return {firstOccur,last};
    }
};