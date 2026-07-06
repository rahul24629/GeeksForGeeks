class Solution {
  public:
    int largestArea(int n, int m, int k, vector<vector<int>> &arr) {
        // code here
        vector<int> blockedRow;
        vector<int> blockedCol;
        
        for(int i=0;i<arr.size();i++){
            blockedRow.push_back(arr[i][0]);
            blockedCol.push_back(arr[i][1]);
        }
        
        sort(blockedRow.begin(),blockedRow.end());
        sort(blockedCol.begin(),blockedCol.end());
        
        int prev=0;
        int maxHeight=INT_MIN;
        
        for(int i=0;i<blockedRow.size();i++){
            maxHeight=max(maxHeight,blockedRow[i]-prev-1);
            prev=blockedRow[i];
        }
        maxHeight = max(maxHeight, n - prev); 
        prev=0;
        int maxWidth=INT_MIN;
        for(int i=0;i<blockedCol.size();i++){
            maxWidth=max(maxWidth,blockedCol[i]-prev-1);
            prev=blockedCol[i];
        }
        maxWidth = max(maxWidth, m - prev);  
        
        return maxWidth*maxHeight;
    }
};