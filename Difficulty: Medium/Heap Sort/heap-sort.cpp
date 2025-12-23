// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
    // Function to sort an array using Heap Sort.
    void heapyfy(int i,vector<int> &arr,int n){
        if(i>=arr.size()){
            return; // ex:- for an single element like [5]
        }
        
        int left=2*i+1;
        int right=2*i+2;
        
        int maxIndex=i;
        
        if(left<n && arr[left]>arr[maxIndex]){
            maxIndex=left;
        }
        
        if(right<n && arr[right] > arr[maxIndex]){
            maxIndex=right;
        }
        
        swap(arr[maxIndex],arr[i]);
        if(maxIndex!=i){
            heapyfy(maxIndex,arr,n);
        }
    }
    
    void heapSort(vector<int>& arr) {
        // code here
        // 1st step means to built a maxheap
        int n= arr.size();
        for(int i=n/2;i>=0;i--){
            heapyfy(i,arr,n);
        }
        
        //2ns step means to sort 
        for(int i=n-1;i>=0;i--){
            swap(arr[0],arr[i]);
            heapyfy(0,arr,i);
        }
 
    }
};