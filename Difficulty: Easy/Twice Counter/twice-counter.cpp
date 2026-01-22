class Solution {
  public:
    int countWords(string list[], int n) {
        // code here.
        unordered_map<string,int> map;
        for(int i=0;i<n;i++){
            map[list[i]]++;
        }
        int count=0;
        for(auto &it:map){
            if(it.second==2){
                count++;
            }
        }
        return count;
    }
};