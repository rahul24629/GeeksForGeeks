class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
    int i = 0, sum = 0;
    for (int j = 0; j < arr.size(); j++) {
        sum += arr[j];

        while (sum > target && i < j) {
            sum -= arr[i];
            i++;
        }

        if (sum == target) {
            return {i + 1, j + 1};
        }
    }
    return {-1};
}

};