class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int newNumber=0;
        while(n>0){
            int rem= n%10;

            newNumber=newNumber*10+rem;
            n/=10;
        }
        return newNumber;
        
    }
};