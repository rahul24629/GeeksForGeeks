class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int el: arr) map[el]++;  // just to store elements

        int count = 0;

        for(int el: arr) {
            // Only start from sequence start
            if(map.count(el - 1) == 0) {
                int currNum = el;
                int currLen = 1;

                while(map.count(currNum + 1)) {
                    currNum++;
                    currLen++;
                }

                count = max(count, currLen);
            }
        }

        return count;
    }
};
