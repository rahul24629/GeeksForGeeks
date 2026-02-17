class Solution {
  public:
   pair<long long, long long> indexes(vector<long long> v, long long X) {
    int n = v.size();
    long long first = -1, last = -1;
    
    // Find first occurrence
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(v[mid] == X) {
            first = mid;
            high = mid - 1; 
        }
        else if(v[mid] < X) low = mid + 1;
        else high = mid - 1;
    }
    
    // Find last occurrence
    low = 0; high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(v[mid] == X) {
            last = mid;
            low = mid + 1; 
        }
        else if(v[mid] < X) low = mid + 1;
        else high = mid - 1;
    }
    
    return {first, last};
}

};