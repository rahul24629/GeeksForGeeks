class Solution {
public:
    bool isPalindrome(int n) {
        n = abs(n);
        int original = n;
        int newNumber = 0;

        while (n > 0) {
            int rem = n % 10;
            newNumber = newNumber * 10 + rem;
            n /= 10;
        }

        return newNumber == original;
    }
};