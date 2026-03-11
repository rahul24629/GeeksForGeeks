class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int org=n;
        int ans=0;
        while(n>0){
            int rem=n%10;
            ans=(ans*10)+rem;
            n/=10;
        }
        return org==ans;
    }
};