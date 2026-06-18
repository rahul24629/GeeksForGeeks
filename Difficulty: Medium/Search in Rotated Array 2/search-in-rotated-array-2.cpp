class Solution {
	public:
	bool search(vector<int>& arr, int key) {
		// Code here
		int st = 0;
		int end = arr.size() - 1;
		
		while (st <= end) {
			int mid = st + (end - st) / 2;
			
			if (arr[mid] == key)
				return true;
			
			if (arr[st] == arr[mid] && arr[mid] == arr[end]) {
				st++;
				end--;
			}
			else if (arr[st] <= arr[mid]) { 
				if (arr[st] <= key && key < arr[mid])
					end = mid - 1;
				else
					st = mid + 1;
			}
			else {
				if (arr[mid] < key && key <= arr[end])
					st = mid + 1;
				else
					end = mid - 1;
			}
		}
		return false;
	}
};
