class Solution {
  public:

    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n) {
        // Your code here
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        string winnerName="";
        int maxVotes=0;
        for(auto &p:mp){
            if(maxVotes<p.second){
                maxVotes=p.second;
                winnerName=p.first;
            }else if(p.second==maxVotes && p.first<winnerName){
                winnerName=p.first;
                
            }
        }
        return {winnerName, to_string(maxVotes)};
        
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
    }
};