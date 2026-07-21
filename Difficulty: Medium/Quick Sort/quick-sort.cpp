class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>= high) return;
        
        int pivotIdx= partition(arr,low,high);
        
        quickSort(arr,low,pivotIdx-1);
        quickSort(arr,pivotIdx+1,high);
        
    }

    int partition(vector<int>& arr, int low, int high) {
        // code here
        
        int i=low-1;
        
        int pivot=arr[high];
        
        for(int j=low;j<high;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[high]);
        return i+1;
        
    }
};