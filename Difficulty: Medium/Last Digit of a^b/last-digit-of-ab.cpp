class Solution {
  public:
    int getLastDigit(string& a, string& b) {
        int sizeA = a.size();
        int sizeB = b.size();

        if(b == "0") return 1;

        int mod4 = 0;
        for(char c : b) {
            mod4 = (mod4 * 10 + (c - '0')) % 4;
        }

        if(a[sizeA-1]=='0'){
            return 0;
        }else if(a[sizeA-1]=='1'){
            return 1;
        }else if(a[sizeA-1]=='2'){
            if(mod4==1) return 2;
            else if(mod4==2) return 4;
            else if(mod4==3) return 8;
            else return 6;

        }else if(a[sizeA-1]=='3'){
            if(mod4==1) return 3;
            else if(mod4==2) return 9;
            else if(mod4==3) return 7;
            else return 1;

        }else if(a[sizeA-1]=='4'){
            int last = b[sizeB-1]-'0';
            if(last%2==1) return 4;
            else return 6;

        }else if(a[sizeA-1]=='5'){
            return 5;

        }else if(a[sizeA-1]=='6'){
            return 6;

        }else if(a[sizeA-1]=='7'){
            if(mod4==1) return 7;
            else if(mod4==2) return 9;
            else if(mod4==3) return 3;
            else return 1;

        }else if(a[sizeA-1]=='8'){
            if(mod4==1) return 8;
            else if(mod4==2) return 4;
            else if(mod4==3) return 2;
            else return 6;

        }else{ // 9
            int last = b[sizeB-1]-'0';
            if(last%2==1) return 9;
            else return 1;
        }
    }
};