class Solution {
public:
    bool isFibonacci(int n) {
        if (n == 0 || n == 1)
            return true;

        int a = 0;
        int b = 1;
        int sum = a + b;

        while (sum < n) {
            a = b;
            b = sum;
            sum = a + b;
        }

        return sum == n;
    }
};