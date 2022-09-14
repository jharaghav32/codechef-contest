class Solution {
public:
    int Mod=1e9+7;

    int countPaths(int n, vector<vector<int>>& roads) {
      vector<pair<long long,long long>>adj[n];
        for(long long i=0;i<roads.size();i++){
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        vector<long long>dist(n,Mod);
        vector<long long>ways(n,0);
        ways[0]=1;
    priority_queue<pair<long long,int>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
        pq.push({0,0});
        dist[0]=0;
        while(!pq.empty()){
            auto elem = pq.top();
            pq.pop();
            long long node = elem.first;
            long long weight = elem.second;
            for(auto i : adj[node]){
                if(dist[i.first]>dist[node]+i.second && i.first!=-1){
                    ways[i.first]=ways[node];
                    dist[i.first]=dist[node]+i.second;
                    pq.push({dist[i.first],i.first});
                    i.first=-1;
                }
                else if(dist[i.first]==dist[node]+i.second && i.first!=-1){
                    ways[i.first]=ways[i.first]+ways[node];
                }
            }
            
        }
        return ways[n-1];
    }
};