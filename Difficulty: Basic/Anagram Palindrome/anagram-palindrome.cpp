int isPossible(string S) {
    // your code here
    int n=S.size();
    vector<int> arr(26,0);
    for(int i=0;i<S.size();i++){
        int idx=S[i]-'a';
        arr[idx]++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    
    if(n%2==0 && count==0) return 1;
    else if(n%2!=0 && count==1) return 1;
    else return 0;
    
}