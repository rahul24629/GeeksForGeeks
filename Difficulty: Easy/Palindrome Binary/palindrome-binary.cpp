class Solution {
  public:
    int isPallindrome(long long int N) {
        string bin = "";
        
        while(N > 0){
            bin += (N % 2) + '0';
            N /= 2;
        }
        
        reverse(bin.begin(), bin.end());

        int st = 0, end = bin.size() - 1;
        
        while(st < end){
            if(bin[st] != bin[end]) return 0;
            st++;
            end--;
        }
        
        return 1;
    }
};