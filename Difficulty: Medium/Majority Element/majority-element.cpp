class Solution {
  public:
    int count(vector<int>&arr,int num,int low, int high){
        int count=0;
        for(int i=low;i<=high;i++){
            if(arr[i]==num) count++;
        }
        return count;
    }
    int majRec(vector<int>&arr , int start,int end){
        if(start==end) return arr[start];
        
        int mid=start+(end-start)/2;
        
        int left=majRec(arr,start,mid);
        int right=majRec(arr,mid+1,end);
        
        //find Occurence 
        int leftCount=count(arr,left,start,end);
        int rightCount=count(arr,right,start,end);
        
        if(leftCount>rightCount) return left;
        else return right;
        
        
    }
    int majorityElement(vector<int>& arr) {
        // code here
        int candidate = majRec(arr, 0, arr.size() - 1);
        int cnt = count(arr, candidate, 0, arr.size() - 1);
        if (cnt > arr.size() / 2) return candidate;
        else return -1; 
    }
};