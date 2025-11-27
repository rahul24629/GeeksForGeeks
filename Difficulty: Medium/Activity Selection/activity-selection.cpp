class Solution {
  public:
    static bool compare(pair<int , int> &p1, pair<int,int> &p2){
        return p1.second < p2.second;  
    }
    
    int activitySelection(vector<int> &start, vector<int> &finish) {
        int n = start.size();
        
       
        vector<pair<int,int>> activities;
        for(int i = 0; i < n; i++){
            activities.push_back({start[i], finish[i]});
        }
        
        
        sort(activities.begin(), activities.end(), compare);
        
       
        int count = 1;  
        int lastFinish = activities[0].second;
        
        for(int i = 1; i < n; i++){
            if(activities[i].first > lastFinish){
                count++;                   
                lastFinish = activities[i].second;
            }
        }
        
        return count;
    }
};
