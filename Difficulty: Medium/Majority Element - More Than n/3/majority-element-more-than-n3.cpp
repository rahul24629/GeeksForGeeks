class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // code here
        int count1=0;
        int el1=INT_MAX;
        
        int count2=0;
        int el2=INT_MAX;
        
        for(int i=0;i<arr.size();i++){
            if(count1==0 && arr[i]!=el2){
                count1=1;
                el1=arr[i];
            }else if(count2==0 && arr[i]!=el1){
                count2=1;
                el2=arr[i];
            }else if(arr[i]== el1){
                count1++;
            }else if(arr[i]==el2){
                count2++;
            }else{
                count1--;
                count2--;
            }
        }
    
    //manuel check
    count1=0;
    count2=0;
    
    vector<int> ans;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]==el1){
            count1++;
        }else if(arr[i]==el2){
            count2++;
        }
    }
    
    int minimal = (int)arr.size()/3 +1;
    
    if(count1>=minimal) ans.push_back(el1);
    if(count2>=minimal) ans.push_back(el2);
    
    sort(ans.begin(),ans.end());
    
    return ans;
    }
};