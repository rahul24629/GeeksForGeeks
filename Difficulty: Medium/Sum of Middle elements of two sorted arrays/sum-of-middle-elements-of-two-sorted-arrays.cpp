// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        
        if(arr1[arr1.size()-1]<=arr2[0]) return (arr1[arr1.size()-1]+arr2[0]);
        
        int margin=(arr1.size()+arr2.size())/2;
        int x=0;
        
        int prev=0;
        int curr=0;
        
        int i=0;
        int j=0;
        
        while(i<arr1.size() && j<arr2.size() && (x!=margin)){
            if(arr1[i]<arr2[j]){
                i++;
            }else{
                j++;
            }
            x++;
            if(x==margin-1){
                if(arr1[i]<arr2[j]) prev=arr1[i];
                else prev=arr2[j];
            }
            
            if(x==margin){
                if(arr1[i]<arr2[j]) curr=arr1[i];
                else curr=arr2[j];
            }
        }
        
        return (prev+curr);
        
    }
};