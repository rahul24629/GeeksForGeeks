int firstDigit(int n) {
    // code here
    if(n==1) return 1;
    while(n>0){
        n=n/10;
        if(n<10) break;
    }
    return n;
}