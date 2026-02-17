class Solution {
  public:
  
    long long merge(vector<int>& arr, int si, int mid, int ei) {
        int i = si;
        int j = mid + 1;
        vector<int> temp;
        long long count = 0;
        
        while (i <= mid && j <= ei) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
                count += (mid - i + 1); // inversion count
            }
        }
        
        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= ei) temp.push_back(arr[j++]);
        
        int x = 0;
        for (int idx = si; idx <= ei; idx++) {
            arr[idx] = temp[x++];
        }
        
        return count;
    }
    
    long long mergeSort(vector<int>& arr, int si, int ei) {
        if (si >= ei) return 0;
        
        int mid = si + (ei - si) / 2;
        long long count = 0;
        
        count += mergeSort(arr, si, mid);       // left half
        count += mergeSort(arr, mid + 1, ei);   // right half
        count += merge(arr, si, mid, ei);       // merge and count
        
        return count;
    }
    
    long long inversionCount(vector<int> &arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};
