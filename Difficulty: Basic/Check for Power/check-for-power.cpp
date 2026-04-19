class Solution {
  public:
    bool isPower(int x, int y) {
        // code here
        if(x==1 && y>1) return false;
         while(y!=1){
             int rem=y%x;
             if(rem!=0) return false;
             y=y/x;
         }
         return true;
    }
};