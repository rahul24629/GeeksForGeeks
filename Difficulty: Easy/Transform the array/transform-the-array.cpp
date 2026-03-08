class Solution {
  public:
    vector<int> valid(vector<int>& arr) {
        vector<int> ans;
        int prev = -1;

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] != 0){
                if(prev != -1 && arr[prev] == arr[i]){
                    ans.back() += arr[i];
                    prev = -1;
                }
                else{
                    ans.push_back(arr[i]);
                    prev = i;
                }
            }
        }

        while(ans.size() < arr.size()){
            ans.push_back(0);
        }

        return ans;
    }
};