class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        unordered_map<int,int> mp; //sum,idx;
        int n= arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if (sum == 0)
                return true;
            if(mp.count(sum)){
                return true;
            }else{
                mp[sum]=i;
            }
            
        }
        return false;
        
    }
};